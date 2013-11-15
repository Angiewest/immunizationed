<?php


/**
 * The main classes for the multichoice question type.
 *
 * These inherit or implement code found in quiz_question.classes.inc.
 *
 * Sponsored by: Norwegian Centre for Telemedicine
 * Code: falcon
 *
 * Based on:
 * Other question types in the quiz framework.
 *
 *
 *
 * @file
 * Question type, enabling the creation of multiple choice and multiple answer questions.
 */

/**
 * Extension of QuizQuestion.
 */
class MultichoiceQuestion extends QuizQuestion {

  /**
   * Forgive some possible logical flaws in the user input.
   */
  private function forgive() {
    if ($this->node->choice_multi == 1) {
      for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
        $short = &$this->node->alternatives[$i];
        // If the scoring data doesn't make sense, use the data from the "correct" checkbox to set the score data
        if ($short['score_if_chosen'] == $short['score_if_not_chosen']
         || !is_numeric($short['score_if_chosen'])
         || !is_numeric($short['score_if_not_chosen'])) {
          if ($short['correct'] == 1) {
            $short['score_if_chosen'] = 1;
            $short['score_if_not_chosen'] = 0;
          }
          else {
            if (variable_get('multichoice_def_scoring', 0) == 0) {
              $short['score_if_chosen'] = -1;
              $short['score_if_not_chosen'] = 0;
            }
            elseif (variable_get('multichoice_def_scoring', 0) == 1) {
              $short['score_if_chosen'] = 0;
              $short['score_if_not_chosen'] = 1;
            }
          }
        }
      }
    }
    else {
      // For questions with one, and only one, correct answer, there will be no points awarded for alternatives
      // not chosen.
      for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
        $short = &$this->node->alternatives[$i];
        $short['score_if_not_chosen'] = 0;
        if (isset($short['correct']) && $short['correct'] == 1 && !_quiz_is_int($short['score_if_chosen'], 1)) {
          $short['score_if_chosen'] = 1;
        }
      }
    }
  }

  /**
   * Warn the user about possible user errors
   */
  private function warn() {
    // Count the number of correct answers
    $num_corrects = 0;
    for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
      $alt = &$this->node->alternatives[$i];
      if ($alt['score_if_chosen'] > $alt['score_if_not_chosen']) {
        $num_corrects++;
      }
    }
    if ($num_corrects == 1 && $this->node->choice_multi == 1 || $num_corrects > 1 && $this->node->choice_multi == 0) {
      $link_options = array();
      if (isset($_GET['destination'])) {
        $link_options['query'] = array('destination' => $_GET['destination']);
      }
      $go_back = l(t('go back'), 'node/' . $this->node->nid . '/edit', $link_options);
      if ($num_corrects == 1) {
        drupal_set_message(
          t('Your question allows multiple answers. Only one of the alternatives have been marked as correct. If this wasn\'t intended please !go_back and correct it.',
            array('!go_back' => $go_back)),
          'warning');
      }
      else {
        drupal_set_message(
          t('Your question doesn\'t allow multiple answers. More than one of the alternatives have been marked as correct. If this wasn\'t intended please !go_back and correct it.',
            array('!go_back' => $go_back)),
          'warning');
      }
    }
  }

  /**
   * Run check_markup() on the field of the specified choice alternative
   * @param $alternativeIndex
   *  The index of the alternative in the alternatives array.
   * @param $field
   *  The name of the field we want to check markup on
   * @param $check_user_access
   *  Whether or not to check for user access to the filter we're trying to apply
   * @return HTML markup
   */
  private function checkMarkup($alternativeIndex, $field, $check_user_access = FALSE) {
    $alternative = $this->node->alternatives[$alternativeIndex];
	//jkm 9/21/13 check that value is set before validating
	if (isset($alternative[$field]['value']) && isset($alternative[$field]['format']) ) {
		// jkm drupal_set_message(t($alternative[$field]['value'] .' ' .$alternative[$field]['format']));
		return check_markup($alternative[$field]['value'], $alternative[$field]['format']);
	}

  }

  /**
   * Implementation of save
   *
   * Stores the question in the database.
   *
   * @param is_new if - if the node is a new node...
   * (non-PHPdoc)
   * @see sites/all/modules/quiz-HEAD/question_types/quiz_question/QuizQuestion#save()
   */
  public function saveNodeProperties($is_new = FALSE) {
    $is_new = $is_new || $this->node->revision == 1;

    // Before we save we forgive some possible user errors
    // jkm 9/21/13 we've taken over the scoring so iognore
	//$this->forgive();

    // We also add warnings on other possible user errors
    $this->warn();

    if ($is_new) {
      $id = db_insert('quiz_multichoice_properties')
        ->fields(array(
          'nid' => $this->node->nid,
          'vid' => $this->node->vid,
          'choice_multi' => $this->node->choice_multi,
          'choice_random' => $this->node->choice_random,
          'choice_boolean' => $this->node->choice_boolean,
        ))
        ->execute();

      // TODO: utilize the benefit of multiple insert of DBTNG
      for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
	    // jkm 9/21/13 added check for value (alts not filed in)
		if ( isset($this->node->alternatives[$i]['answer']['value']) ) {
			if (drupal_strlen($this->node->alternatives[$i]['answer']['value']) > 0) {
			  $this->insertAlternative($i);
			}
		} else {
			// warn need an answer
			//form_set_error(alternatives[$i]['answer']['value'], t('Please fill out the details for the alternatives you have creared.'));
		}
      }
    }
    else {
      db_update('quiz_multichoice_properties')
        ->fields(array(
          'choice_multi' => $this->node->choice_multi,
          'choice_random' => $this->node->choice_random,
          'choice_boolean' => $this->node->choice_boolean,
        ))
        ->condition('nid', $this->node->nid)
        ->condition('vid', $this->node->vid)
        ->execute();

      // We fetch ids for the existing answers belonging to this question
      // We need to figure out if an existing alternative has been changed or deleted.
      $res = db_query('SELECT id FROM {quiz_multichoice_answers}
              WHERE question_nid = :nid AND question_vid = :vid', array(':nid' => $this->node->nid, ':vid' => $this->node->vid));

      // We start by assuming that all existing alternatives needs to be deleted
      $ids_to_delete = array();
      while ($res_o = $res->fetch()) {
        $ids_to_delete[] = $res_o->id;
      }

      for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
        $short = $this->node->alternatives[$i];
        if (drupal_strlen($this->node->alternatives[$i]['answer']['value']) > 0) {
          // If new alternative
          if (!is_numeric($short['id'])) {
            $this->insertAlternative($i);
          }
          // If existing alternative
          else {
		  	//drupal_set_message(t('at calling update: ]' . $short['feedback_if_not_chosen'] . '['));  //debug

            $this->updateAlternative($i);
            // Make sure this alternative isn't deleted
            $key = array_search($short['id'], $ids_to_delete);
            $ids_to_delete[$key] = FALSE;
          }
        }
      }
      foreach ($ids_to_delete as $id_to_delete) {
        if ($id_to_delete) {
          db_delete('quiz_multichoice_answers')
            ->condition('id', $id_to_delete)
            ->execute();
        }
      }
    }
    $this->saveUserSettings();
  }

  function _normalizeAlternative($alternatives) {
    $copy = $alternatives;
    // answer
    if (is_array($alternatives['answer']) && isset($alternatives['answer']['value'])) {
      $copy['answer'] = $alternatives['answer']['value'];
    }
    // answer format
    if (is_array($alternatives['answer']) && isset($alternatives['answer']['format'])) {
      $copy['answer_format'] = $alternatives['answer']['format'];
    }
    // feedback if choosen
    if (is_array($alternatives['feedback_if_chosen']) && isset($alternatives['feedback_if_chosen']['value'])) {
      $copy['feedback_if_chosen'] = $alternatives['feedback_if_chosen']['value'];
    }
    // feedback if choosen foramt
    if (is_array($alternatives['feedback_if_chosen']) && isset($alternatives['feedback_if_chosen']['format'])) {
      $copy['feedback_if_chosen_format'] = $alternatives['feedback_if_chosen']['format'];
    }
    // feedback if not chosen
    if (is_array($alternatives['feedback_if_not_chosen']) && isset($alternatives['feedback_if_not_chosen']['value'])) {
      $copy['feedback_if_not_chosen'] = $alternatives['feedback_if_not_chosen']['value'];
    }
    // feedback if not chosen foramt
    if (is_array($alternatives['feedback_if_not_chosen']) && isset($alternatives['feedback_if_not_chosen']['format'])) {
      $copy['feedback_if_not_chosen_format'] = $alternatives['feedback_if_not_chosen']['format'];
    }
    return $copy;
  }

  /**
   * Helper function. Saves new alternatives
   *
   * @param $i
   *  The alternative index
   */
  private function insertAlternative($i) {
    // jkm 8/31/13 force default value for fileds no longer used ($alternatives['score_if_not_chosen'])
    $alternatives = $this->node->alternatives[$i];

	// drupal_set_message(t('at insert: ]' . $alternatives['feedback_if_not_chosen'] . '['));

	 // jkm 9/23 save right/wrong in format field
	if ($alternatives['score_if_chosen'] == '9999') {
		$right_wrong = "R";
	} else {
		$right_wrong = "W";
	}

    db_insert('quiz_multichoice_answers')
      ->fields(array(
        'answer' => $alternatives['answer']['value'],
        'answer_format' => $alternatives['answer']['format'],
        'feedback_if_chosen' => $alternatives['feedback_if_chosen']['value'],
        'feedback_if_chosen_format' => $alternatives['feedback_if_chosen']['format'],
        //'feedback_if_not_chosen' => $alternatives['feedback_if_not_chosen']['value'],   //jkm actually group id
		'feedback_if_not_chosen' => isset($alternatives['feedback_if_not_chosen']) ? $alternatives['feedback_if_not_chosen'] : '0',
        //'feedback_if_not_chosen_format' => $alternatives['feedback_if_not_chosen']['format'],  // jkm no lnger used
        'feedback_if_not_chosen_format' => $right_wrong,		// jkm we now use this to hold R or W indicator (right or wrong answer)
=======
    $alternatives = $this->_normalizeAlternative($this->node->alternatives[$i]);
    db_insert('quiz_multichoice_answers')
      ->fields(array(
        'answer' => $alternatives['answer'],
        'answer_format' => $alternatives['answer_format'],
        'feedback_if_chosen' => $alternatives['feedback_if_chosen'],
        'feedback_if_chosen_format' => $alternatives['feedback_if_chosen_format'],
        'feedback_if_not_chosen' => $alternatives['feedback_if_not_chosen'],
        'feedback_if_not_chosen_format' => $alternatives['feedback_if_not_chosen_format'],
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
        'score_if_chosen' => $alternatives['score_if_chosen'],
        'score_if_not_chosen' => $alternatives['score_if_not_chosen'],
        'question_nid' => $this->node->nid,
        'question_vid' => $this->node->vid
      ))
      ->execute();
  }

  /**
   * Helper function. Updates existing alternatives
   *
   * @param $i
   *  The alternative index
   */
  private function updateAlternative($i) {
<<<<<<< HEAD
    $short = $this->node->alternatives[$i];

	//drupal_set_message(t('at update: ]' . $short['score_if_chosen'] . '['));

	// jkm 9/23 save right/wrong in format field
	if ($short['score_if_chosen'] == '9999') {
		$right_wrong = "R";
	} else {
		$right_wrong = "W";
	}

    db_update('quiz_multichoice_answers')
      ->fields(array(
        'answer' => $short['answer']['value'],
        'answer_format' => $short['answer']['format'],
        'feedback_if_chosen' => $short['feedback_if_chosen']['value'],
        'feedback_if_chosen_format' => $short['feedback_if_chosen']['format'],
        //'feedback_if_not_chosen' => $short['feedback_if_not_chosen']['value'],
		'feedback_if_not_chosen' => isset($short['feedback_if_not_chosen']) ? $short['feedback_if_not_chosen'] : '0',
        //'feedback_if_not_chosen_format' => $short['feedback_if_not_chosen']['format'],
		'feedback_if_not_chosen_format' => $right_wrong,		// jkm we now use this to hold R or W indicator (right or wrong answer)
        'score_if_chosen' => $short['score_if_chosen'],
        'score_if_not_chosen' => $short['score_if_not_chosen'],
=======
    $alternatives = $this->_normalizeAlternative($this->node->alternatives[$i]);
    db_update('quiz_multichoice_answers')
      ->fields(array(
        'answer' => $alternatives['answer'],
        'answer_format' => $alternatives['answer_format'],
        'feedback_if_chosen' => $alternatives['feedback_if_chosen'],
        'feedback_if_chosen_format' => $alternatives['feedback_if_chosen_format'],
        'feedback_if_not_chosen' => $alternatives['feedback_if_not_chosen'],
        'feedback_if_not_chosen_format' => $alternatives['feedback_if_not_chosen_format'],
        'score_if_chosen' => $alternatives['score_if_chosen'],
        'score_if_not_chosen' => $alternatives['score_if_not_chosen'],
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
      ))
      ->condition('id', $alternatives['id'])
      ->condition('question_nid', $this->node->nid)
      ->condition('question_vid', $this->node->vid)
      ->execute();
  }

  /**
   * Implementation of validate
   *
   * QuizQuestion#validate()
   */
  public function validateNode(array &$form) {
    if ($this->node->choice_multi == 0) {
      $found_one_correct = FALSE;
      for ($i = 0; (isset($this->node->alternatives[$i]) && is_array($this->node->alternatives[$i])); $i++) {
        $short = $this->node->alternatives[$i];
<<<<<<< HEAD

=======
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
        if (drupal_strlen($this->checkMarkup($i, 'answer')) < 1) {
          continue;
        }
        if ($short['correct'] == 1) {
          if ($found_one_correct) {
            // We don't display an error message here since we allow alternatives to be partially correct
          }
          else {
            $found_one_correct = TRUE;
          }
        }
      }
      if (!$found_one_correct) {
        form_set_error('choice_multi', t('You have not marked any alternatives as correct. If there are no correct alternatives you should allow multiple answers.'));
      }
    }
    else {
      for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
        $short = $this->node->alternatives[$i];
        if (strlen($this->checkMarkup($i, 'answer')) < 1) {
          continue;
        }
<<<<<<< HEAD

		// check correct marker in synch

		//drupal_set_message('Marker:' . t($short['score_if_chosen'] . '-' . $short['correct']));
		if ($short['score_if_chosen'] != '9999' && $short['correct'] == 1) {
			drupal_set_message(t('marker out of synch'));
			$short['correct'] = 0;
         }


        // check custom field to see if right or wrong
		if ($short['correct'] == 1 || $short['score_if_chosen'] == '9999') {
				//drupal_set_message(t('right answer...'));
			$ans_right = TRUE;
		} else {
				//drupal_set_message(t('wrong answer...'));
			$ans_right = FALSE;
		}

		// jkm 8/19/13 set score to neg value if answer is wrong (so right answers are always worth more than wrong)
		if (!$ans_right) $short['score_if_chosen']  = -(pow(2, $i));
		//drupal_set_message('score:' . $short['score_if_chosen']);

		// check if tagged as right or wrong and prefix feedback ith R: or W:
		// jkm 9/23/13  R/W now stored in feedback_if_not_chosen_fornmat field
//        if ($ans_right) {
//				$short['feedback_if_chosen'] = "R: " . $short['feedback_if_chosen'];
//		} else {
//				$short['feedback_if_chosen'] = "W: " . $short['feedback_if_chosen'];
//		}

		// jkm since we're chaging the scoring metod, don't need this check
//        if ($short['score_if_chosen'] < $short['score_if_not_chosen'] && $short['correct']) {
//          form_set_error("alternatives][$i][score_if_not_chosen", t('The alternative is marked as correct, but gives more points if you don\'t select it.'));
//        }
//        elseif ($short['score_if_chosen'] > $short['score_if_not_chosen'] && !$short['correct']) {
//          form_set_error("alternatives][$i][score_if_chosen", t('The alternative is not marked as correct, but gives more points if you select it.'));
//        }

		// drupal_set_message(t('at validate: ]' . $short['score_if_chosen'] . '['));  //debug

		// jkm 9/10/13 show error if fogot to pick group id (it's a drop dwon now not a text string)
		if ($short['feedback_if_not_chosen'] == "0") {
			form_set_error("alternatives][$i][feedback_if_not_chosen", t('Don\'t forget to assign a tested knowledge area to each possible response.'));
			//form_set_error("alternatives][$i][feedback_if_not_chosen", t('The alternative is not marked as correct, but gives more points if you select it.'));
		}
=======
        if ($short['score_if_chosen'] < $short['score_if_not_chosen'] && $short['correct']) {
          form_set_error("alternatives][$i][score_if_not_chosen", t('The alternative is marked as correct, but gives more points if you don\'t select it.'));
        }
        elseif ($short['score_if_chosen'] > $short['score_if_not_chosen'] && !$short['correct']) {
          form_set_error("alternatives][$i][score_if_chosen", t('The alternative is not marked as correct, but gives more points if you select it.'));
        }
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
      }
    }
  }

  /**
   * Implementation of delete
   *
   * @see QuizQuestion#delete()
   */
  public function delete($only_this_version = FALSE) {
    $delete_properties = db_delete('quiz_multichoice_properties')->condition('nid', $this->node->nid);
    $delete_answers = db_delete('quiz_multichoice_answers')->condition('question_nid', $this->node->nid);
    $delete_results = db_delete('quiz_multichoice_user_answers')->condition('question_nid', $this->node->nid);

    if ($only_this_version) {
      $delete_properties->condition('vid', $this->node->vid);
      $delete_answers->condition('question_vid', $this->node->vid);
      $delete_results->condition('question_vid', $this->node->vid);
    }

    // Delete from table quiz_multichoice_user_answer_multi
    if ($only_this_version) {
      $user_answer_id = db_query('SELECT id FROM {quiz_multichoice_user_answers} WHERE question_nid = :nid AND question_vid = :vid', array(':nid' => $this->node->nid, ':vid' => $this->node->vid))->fetchCol();
    }
    else {
      $user_answer_id = db_query('SELECT id FROM {quiz_multichoice_user_answers} WHERE question_nid = :nid', array(':nid' => $this->node->nid))->fetchCol();
    }

    if (!empty($user_answer_id)) {
      db_delete('quiz_multichoice_user_answer_multi')
        ->condition('user_answer_id', $user_answer_id, 'IN')
        ->execute();
    }
    $delete_properties->execute();
    $delete_answers->execute();
    $delete_results->execute();
    parent::delete($only_this_version);
  }

  /**
   * Implementation of getNodeProperties
   *
   * @see QuizQuestion#getNodeProperties()
   */
  public function getNodeProperties() {
    if (isset($this->nodeProperties) && !empty($this->nodeProperties)) {
      return $this->nodeProperties;
    }
    $props = parent::getNodeProperties();

    $res_a = db_query('SELECT choice_multi, choice_random, choice_boolean FROM {quiz_multichoice_properties}
            WHERE nid = :nid AND vid = :vid', array(':nid' => $this->node->nid, ':vid' => $this->node->vid))->fetchAssoc();

    if (is_array($res_a)) {
      $props = array_merge($props, $res_a);
    }

    // Load the answers
    $res = db_query('SELECT id, answer, answer_format, feedback_if_chosen, feedback_if_chosen_format,
            feedback_if_not_chosen, feedback_if_not_chosen_format, score_if_chosen, score_if_not_chosen
            FROM {quiz_multichoice_answers}
            WHERE question_nid = :question_nid AND question_vid = :question_vid
            ORDER BY id', array(':question_nid' => $this->node->nid, ':question_vid' => $this->node->vid));
    $props['alternatives'] = array(); // init array so it can be iterated even if empty
    while ($res_arr = $res->fetchAssoc()) {
      $props['alternatives'][] = $res_arr;
    }
    $this->nodeProperties = $props;
    return $props;
  }

  /**
   * Implementation of getNodeView
   *
   * @see QuizQuestion#getNodeView()
   */
  public function getNodeView() {
    $content = parent::getNodeView();
    if ($this->node->choice_random) {
      $this->shuffle($this->node->alternatives);
    }
    $content['answers'] = array(
       '#markup' => theme('multichoice_answer_node_view', array('alternatives' => $this->node->alternatives, 'show_correct' => $this->viewCanRevealCorrect())),
       '#weight' => 2,
    );

    return $content;
  }

  /**
   * Generates the question form.
   *
   * This is called whenever a question is rendered, either
   * to an administrator or to a quiz taker.
   */
  public function getAnsweringForm(array $form_state = NULL, $rid) {
    $form = parent::getAnsweringForm($form_state, $rid);
    //$form['#theme'] = 'multichoice_answering_form';

    /* We use an array looking key to be able to store multiple answers in tries.
     * At the moment all user answers have to be stored in tries. This is something we plan
     * to fix in quiz 5.x.
     */
    $form['tries[answer]'] = array(
      '#options' => array(),
      '#theme' => 'multichoice_alternative',
    );
    if (isset($rid)) {
      // This question has already been answered. We load the answer.
      $response = new MultichoiceResponse($rid, $this->node);
    }
    for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
      $short = $this->node->alternatives[$i];
      $answer_markup = check_markup($short['answer'], $short['answer_format']);
      if (drupal_strlen($answer_markup) > 0) {
        $form['tries[answer]']['#options'][$short['id']] = $answer_markup;
      }
    }
    if ($this->node->choice_random) {
      // We save the choice order so that the order will be the same in the answer report
      $form['tries[choice_order]'] = array(
        '#type' => 'hidden',
        '#value' => implode(',', $this->shuffle($form['tries[answer]']['#options'])),
      );
    }
    if ($this->node->choice_multi) {
      $form['tries[answer]']['#type'] = 'checkboxes';
      $form['tries[answer]']['#title'] = t('Choose');
      if (isset($response)) {
        if (is_array($response->getResponse())) {
          $form['tries[answer]']['#default_value'] = $response->getResponse();
        }
      }
    }
    else {
      $form['tries[answer]']['#type'] = 'radios';
      $form['tries[answer]']['#title'] = t('Choose one');
      if (isset($response)) {
        $selection = $response->getResponse();
        if (is_array($selection)) {
          $form['tries[answer]']['#default_value'] = array_pop($selection);
        }
      }
    }

    return $form;
  }

  /**
   * Custom shuffle function. It keeps the array key - value relationship intact
   *
   * @param array $array
   * @return unknown_type
   */
  private function shuffle(array &$array) {
    $newArray = array();
    $toReturn = array_keys($array);
    shuffle($toReturn);
    foreach ($toReturn as $key) {
      $newArray[$key] = $array[$key];
    }
    $array = $newArray;
    return $toReturn;
  }

  /**
<<<<<<< HEAD
   * form to loopup available groups
   *
   */

function get_group_terms() {
    // get the vid value from vocabulary_node_types file
    //$result = db_query("SELECT * FROM vocabulary_node_types WHERE type = 'my_type' ");
    //$node = db_fetch_object($result) ;
    //$vid = $node->vid ;

    // get corresponding term names from term_data file
    //$items = array();
    //$terms = taxonomy_get_tree($vid);
    //foreach ( $terms as $term ) {
    //    $count = taxonomy_term_count_nodes($term->tid);
    //    if ($count) {
    //        $items[$term->tid] = $term->name;
    //    }
    //}

	  // setup the array of radio buttons
 $items = array(
    0 => "Group 1",
    1 => "Group 2",
    2 => "Group 3",
    3 => "Group 4",
    4 => "Group 5"
  );

	return $items;
}

  /**
=======
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
   * Implementation of getCreationForm
   *
   * @see QuizQuestion#getCreationForm()
   */
  public function getCreationForm(array &$form_state = NULL) {
    $form = array();
    $type = node_type_get_type($this->node);
    // We add #action to the form because of the use of ajax
    $options = array();
    $get = $_GET;
    unset($get['q']);
    if (!empty($get)) {
      $options['query'] = $get;
    }

    // TODO The second parameter to this function call should be an array.
    $action = url('node/add/' . $type->type, $options);
    if (isset($this->node->nid)) {
      // TODO The second parameter to this function call should be an array.
      $action = url('node/' . $this->node->nid . '/edit', $options);
    }
    $form['#action'] = $action;

    $form['alternatives'] = array(
      '#type' => 'fieldset',
      '#title' => t('Answer'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#weight' => -4,
      '#tree' => TRUE,
    );

    // Get the nodes settings, users settings or default settings
    $default_settings = $this->getDefaultAltSettings();

    $form['alternatives']['settings'] = array(
      '#type' => 'fieldset',
      '#title' => t('Settings'),
	  '#access' => FALSE, // jkm  hide field
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
      '#description' => t('Your settings will be remembered.'),
    );
    $form['alternatives']['settings']['choice_multi'] = array(
      '#type' => 'checkbox',
      '#title' => t('Multiple answers'),
      '#description' => t('Allow any number of answers(checkboxes are used). If this box is not checked, one, and only one answer is allowed(radiobuttons are used).'),
      '#default_value' => $default_settings['choice_multi'],
      '#parents' => array('choice_multi'),
    );
    $form['alternatives']['settings']['choice_random'] = array(
      '#type' => 'checkbox',
      '#title' => t('Random order'),
      '#description' => t('Present alternatives in random order when quiz is being taken.'),
      '#default_value' => $default_settings['choice_random'],
      '#parents' => array('choice_random'),
    );
    $form['alternatives']['settings']['choice_boolean'] = array(
      '#type' => 'checkbox',
      '#title' => t('Simple scoring'),
      '#description' => t('Give max score if everything is correct. Zero points otherwise.'),
      '#default_value' => $default_settings['choice_boolean'],
      '#parents' => array('choice_boolean'),
    );

    // Add helper tag where we will place the input selector for all the textareas.
    $form['alternatives']['input_format_all'] = array(
      '#markup' => '<DIV id="input-all-ph"></DIV>',
    );

    $form['alternatives']['#theme'][] = 'multichoice_creation_form';
    $i = 0;

    // choice_count might be stored in the form_state after an ajax callback
    if (isset($form_state['choice_count'])) {
      $choice_count = $form_state['choice_count'];
    }
    else {
      $choice_count = max(variable_get('multichoice_def_num_of_alts', 2), isset($this->node->alternatives) ? count($this->node->alternatives) : 0);
    }

    for (; $i < $choice_count; $i++) {
      $short = isset($this->node->alternatives[$i]) ? $this->node->alternatives[$i] : NULL;
      $form['alternatives'][$i] = array(
        '#type' => 'fieldset',
        '#title' => t('Alternative !i - ', array('!i' => ($i + 1))) . $short['answer'],
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
        // - The two first alternatives won't be collapsed.
        // - Populated alternatives won't be collapsed
      );
      $form['alternatives'][$i]['#theme'][] = 'multichoice_alternative_creation';

	  // jkm 9/21/13 we're taken over the scoring logic here
//      if (is_array($short)) {
//        if ($short['score_if_chosen'] == $short['score_if_not_chosen']) {
//          $correct_default = isset($short['correct']) ? $short['correct'] : FALSE;
//        }
//        else {
//          $correct_default = $short['score_if_chosen'] > $short['score_if_not_chosen'];
//        }
//      }
//      else {
//        $correct_default = FALSE;
//      }
		if ($short['score_if_chosen'] == '9999') {
			$correct_default = 1;
			$dropdown_default = 9999;
		} else {
			$correct_default = -1;
			$dropdown_default = -1;
		}
 //drupal_set_message(t('correct flag from db: ]' . $correct_default . '['));

      $form['alternatives'][$i]['correct'] = array(
        '#type' => 'checkbox',
        '#title' => t(' '),  // jkm required field   t('Correct')
		'#access' => FALSE, // jkm  hide field
        '#default_value' => $correct_default,
        '#attributes' => array('onchange' => 'Multichoice.refreshScores(this, ' . variable_get('multichoice_def_scoring', 0) . ')'),
      );
      // We add id to be able to update the correct alternatives if the node is updated, without destroying
      // existing answer reports
      $form['alternatives'][$i]['id'] = array(
        '#type' => 'value',
        '#value' => $short['id'],
      );

<<<<<<< HEAD
	  // jkm 8/20/13 change to just text field

//      $form['alternatives'][$i]['answer'] = array(
//        //'#type' => 'text_format',
//		'#type' => 'textfield',
//        //'#base_type' => 'textarea',
//        '#title' => t('Alternative !i', array('!i' => ($i + 1))),
//        '#default_value' => $short['answer'],
//        '#required' => $i < 2,
//        '#format' => isset($short['answer_format']) ? $short['answer_format'] : NULL,
//       // '#rows' => 3,
//      );

	   $form['alternatives'][$i]['answer'] = array(
        '#type' => 'text_format',
		//'#type' => 'textfield',
=======
      $form['alternatives'][$i]['answer'] = array(
        '#type' => 'text_format',
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
        '#base_type' => 'textarea',
        '#title' => t('Alternative !i', array('!i' => ($i + 1))),
        '#default_value' => $short['answer'],
        '#required' => $i < 2,
<<<<<<< HEAD
        '#format' => t('filtered_html'),  //isset($short['answer_format']) ? $short['answer_format'] : NULL,
        '#rows' => 1,
=======
        '#format' => isset($short['answer_format']) ? $short['answer_format'] : NULL,
        '#rows' => 3,
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
      );

      $form['alternatives'][$i]['advanced'] = array(
        '#type' => 'fieldset',
        '#title' => t('Details'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
      );
<<<<<<< HEAD

	  // jkm 8/19/13  Add a new field to hold if right or wrong answer
	   $form['alternatives'][$i]['advanced']['score_if_chosen'] = array(
		"#type" => "select",
		"#title" => t("Indicate whether this is a correct answer or a wrong answer."),
		"#default_value" => $dropdown_default,
		"#options" => array(
		"9999" => t("Answer is correct"),
		"-1" => t("Answer is wrong"),
		),
        '#attributes' => array(
          'onkeypress' => 'Multichoice.refreshCorrect(this)',
          'onkeyup' => 'Multichoice.refreshCorrect(this)',
          'onchange' => 'Multichoice.refreshCorrect(this)'
        ),
        '#parents' => array('alternatives', $i, 'score_if_chosen')
		//"#description" => t("Select plugin."),
		);

	  // jkm this field is hidden since now calculated. First we need to figure out if this is a right answer (alwsys 9999) or if it is a wrong answer (calc score from alternative number)
	  // we don't know if the question is right or wrong at this point, so we assume it is wrong and double check later when the form is submitted

	  // this field drives the built in right/wrong indicator so we use it to set the score. pos = right, neg = wrong

	  //$calc_score = -(pow(2, $i));   //populate as if it was a wrong answer

     /* $form['alternatives'][$i]['advanced']['score_if_chosen'] = array(
        '#type' => 'textfield',
		//'#access' => FALSE, // jkm  hide field
		//  jkm 6/13/13 Added custom message
        '#title' => t('Score if chosen (9999 if correct, -1,-2,-4,-8,-16,etc if wrong)'),
        '#size' => 4,
        '#maxlength' => 4,
        '#default_value' => $calc_score, // jkm use calc score isntead
        '#description' => t('This score is added to the users total score if the user chooses this alternative.'),
        '#attributes' => array(
          'onkeypress' => 'Multichoice.refreshCorrect(this)',
          'onkeyup' => 'Multichoice.refreshCorrect(this)',
          'onchange' => 'Multichoice.refreshCorrect(this)'
        ),
        '#parents' => array('alternatives', $i, 'score_if_chosen')
      ); */

      $form['alternatives'][$i]['advanced']['feedback_if_chosen'] = array(
        '#type' => 'text_format',
        '#base_type' => 'textarea',
        '#title' => t('Feedback if chosen (make it positive if this is a correct answer, or corrective if this is a wrong answer)'),
        '#description' => t('This feedback is given to users who choose this alternative.'),
=======
      $form['alternatives'][$i]['advanced']['feedback_if_chosen'] = array(
        '#type' => 'text_format',
        '#base_type' => 'textarea',
        '#title' => t('Feedback if chosen'),
        '#description' => t('This feedback is given to users who chooses this alternative.'),
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
        '#parents' => array('alternatives', $i, 'feedback_if_chosen'),
        '#default_value' => $short['feedback_if_chosen'],
        '#format' => isset($short['feedback_if_chosen_format']) ? $short['feedback_if_chosen_format'] : NULL,
        '#rows' => 3,
      );
      // We add 'helper' to trick the current version of the wysiwyg module to add an editor to several
      // textareas in the same fieldset
<<<<<<< HEAD

	  // jkm 8/19/13 turn this into a drop down driven by the taxonomy of groups

	  /*
	      '#type' => 'select',
    '#title' => t('Choose a value'),
    '#id' => 'limiter',
    '#options' => get_group_terms(),
	*/

	// jkm 9/21/13 Build a list from the taxonomy and use it for the dropdown

	//get the list of locations from taxonomy to use in the dropdown
    $dropdown_source = taxonomy_get_tree(16) ;
	$dropdown_array = array('0' => t("Unassigned"));
	foreach ($dropdown_source as $item) {
		$key = $item->tid;
		$value = $item->name;
		$dropdown_array[$key] = $value;
	}

	//location filter dropdown
	/* $form['filterset']['locationfilter'] = array(
	  '#weight' => '1',
	  '#key_type' => 'associative',
	  '#multiple_toggle' => '1',
	  '#type' => 'select',
	  '#options' => $dropdown_array,
	  '#title' => 'Filter by location',
	); */

//	unset($dropdown_array);

	// end list build

   /* original

    $form['alternatives'][$i]['advanced']['helper']['feedback_if_not_chosen'] = array(
        //'#type' => 'text_format',
		"#type" => "select",
        '#base_type' => 'textarea',
        '#title' => t('Tested Knowledge Area'),  // jkm 9/9/13
        '#description' => t('Assign this response to a resource that provides a clue to the answer that guides the student to the corect response.'),
        '#parents' => array('alternatives', $i, 'feedback_if_not_chosen'),
        '#default_value' => $short['feedback_if_not_chosen'],
        //'#format' => isset($short['feedback_if_not_chosen_format']) ? $short['feedback_if_not_chosen_format'] : NULL,
        //'#rows' => 3,
		"#options" => array(
		"0" => t("Unassigned"),
		"100" => t("PORT"),
		"101" => t("ISDA"),
		"102" => t("ISDA_CAP"),
		"103" => t("INTRODUCTION"),
		"104" => t("SYMPTOMS"),
		"105" => t("HISTORY"),
		"106" => t("VITAL_SIGNS"),
		"107" => t("PHYSICAL_EXAMINATION"),
		"108" => t("X_RAY"),
		"109" => t("BACTERIA"),
		"110" => t("SHOTS"),
		"111" => t("EPI"),
		"112" => t("COMMUNITY_GUIDE"),
		"113" => t("SOP"),
		"114" => t("BIBLIOGRAPHY"),
		)
      );  */

	 // drupal_set_message(t('from db: ]' . $short['feedback_if_not_chosen'] . '['));

	  $form['alternatives'][$i]['advanced']['helper']['feedback_if_not_chosen'] = array(
        //'#type' => 'text_format',
		"#type" => "select",
        '#base_type' => 'textarea',
        '#title' => t('Tested Knowledge Area'),  // jkm 9/9/13
        '#description' => t('Assign this response to a resource that provides a clue to the answer and guides the student to the corect response.'),
        '#parents' => array('alternatives', $i, 'feedback_if_not_chosen'),
        '#default_value' => $short['feedback_if_not_chosen'],
        //'#format' => isset($short['feedback_if_not_chosen_format']) ? $short['feedback_if_not_chosen_format'] : NULL,
        //'#rows' => 3,
		'#options' => $dropdown_array,
      );
      $default_value = isset($this->node->alternatives[$i]['score_if_chosen']) ? $this->node->alternatives[$i]['score_if_chosen'] : 0;
=======
      $form['alternatives'][$i]['advanced']['helper']['feedback_if_not_chosen'] = array(
        '#type' => 'text_format',
        '#base_type' => 'textarea',
        '#title' => t('Feedback if not chosen'),
        '#description' => t('This feedback is given to users who doesn\'t choose this alternative.'),
        '#parents' => array('alternatives', $i, 'feedback_if_not_chosen'),
        '#default_value' => $short['feedback_if_not_chosen'],
        '#format' => isset($short['feedback_if_not_chosen_format']) ? $short['feedback_if_not_chosen_format'] : NULL,
        '#rows' => 3,
      );
      $default_value = isset($this->node->alternatives[$i]['score_if_chosen']) ? $this->node->alternatives[$i]['score_if_chosen'] : 0;
      $form['alternatives'][$i]['advanced']['score_if_chosen'] = array(
        '#type' => 'textfield',
        '#title' => t('Score if chosen'),
        '#size' => 4,
        '#maxlength' => 4,
        '#default_value' => $default_value,
        '#description' => t('This score is added to the users total score if the user chooses this alternative.'),
        '#attributes' => array(
          'onkeypress' => 'Multichoice.refreshCorrect(this)',
          'onkeyup' => 'Multichoice.refreshCorrect(this)',
          'onchange' => 'Multichoice.refreshCorrect(this)'
        ),
        '#parents' => array('alternatives', $i, 'score_if_chosen')
      );
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c

      $default_value = $short['score_if_not_chosen'];
      if (!isset($default_value)) {
        $default_value = '0';
      }
      $form['alternatives'][$i]['advanced']['score_if_not_chosen'] = array(
        '#type' => 'textfield',
        '#title' => t('Score if not chosen'),
        '#size' => 4,
        '#maxlength' => 4,
        '#default_value' => $default_value,
        '#description' => t('This score is added to the users total score if the user doesn\'t choose this alternative. Only used if multiple answers are allowed.'),
        '#attributes' => array(
          'onkeypress' => 'Multichoice.refreshCorrect(this)',
          'onkeyup' => 'Multichoice.refreshCorrect(this)',
          'onchange' => 'Multichoice.refreshCorrect(this)'
        ),
        '#parents' => array('alternatives', $i, 'score_if_not_chosen')
      );
    }
<<<<<<< HEAD

=======
>>>>>>> 473c11e4c54fee51fe1d9050f459f871bb83724c
    // ahah helper tag. New questions will be inserted before this tag
    $form['alternatives']["placeholder"] = array(
      '#markup' => '<div id="placeholder"></div>',
    );

    // We can't send the get values to the ahah callback the normal way, so we do it like this.
    $form['get'] = array(
      '#type' => 'value',
      '#value' => $get,
    );

    $form['alternatives']['multichoice_add_alternative'] = array(
      '#type' => 'submit',
      '#value' => t('Add more alternatives'),
      '#submit' => array('multichoice_more_choices_submit'), // If no javascript action.
      '#limit_validation_errors' => array(),
      '#ajax' => array(
        'callback' => 'multichoice_add_alternative_ajax_callback',
        'wrapper' => 'placeholder',
        'effect' => 'slide',
        'method' => 'before',
      ),
    );
    $form['#attached']['js'] = array(
      drupal_get_path('module', 'multichoice') . '/multichoice.js',
    );

    return $form;
  }

  /**
   * Helper function provding the default settings for the creation form.
   *
   * @return
   *  Array with the default settings
   */
  private function getDefaultAltSettings() {
    // If the node is being updated the default settings are those stored in the node
    if (isset($this->node->nid)) {
      $settings['choice_multi'] = $this->node->choice_multi;
      $settings['choice_random'] = $this->node->choice_random;
      $settings['choice_boolean'] = $this->node->choice_boolean;
    }
    // We try to fetch the users settings
    elseif ($settings = $this->getUserSettings()) {
    }
    // The user is creating his first multichoice node
    else {
      $settings['choice_multi'] = 0;
      $settings['choice_random'] = 0;
      $settings['choice_boolean'] = 0;
    }
    return $settings;
  }

  /**
   * Fetches the users default settings for the creation form
   *
   * @return
   *  The users default node settings
   */
  private function getUserSettings() {
    global $user;
    $res = db_query('SELECT choice_multi, choice_boolean, choice_random
            FROM {quiz_multichoice_user_settings}
            WHERE uid = :uid', array(':uid' => $user->uid))->fetchAssoc();
    if ($res) {
      return $res;
    }
    else {
      return FALSE;
    }
  }

  /**
   * Fetches the users default settings from the creation form
   */
  private function saveUserSettings() {
    global $user;
    db_merge('quiz_multichoice_user_settings')
      ->key(array('uid' => $user->uid))
      ->fields(array(
        'choice_random' => $this->node->choice_random,
        'choice_multi' => $this->node->choice_multi,
        'choice_boolean' => $this->node->choice_boolean,
      ))
      ->execute();
  }

  /**
   * Implementation of getMaximumScore.
   *
   * @see QuizQuestion#getMaximumScore()
   */
  public function getMaximumScore() {
    if ($this->node->choice_boolean) {
      return 1;
    }

    $max = 0;
    for ($i = 0; isset($this->node->alternatives[$i]); $i++) {
      $short = $this->node->alternatives[$i];
      if ($this->node->choice_multi) {
        $max += max($short['score_if_chosen'], $short['score_if_not_chosen']);
      }
      else {
        $max = max($max, $short['score_if_chosen'], $short['score_if_not_chosen']);
      }
    }
    return max($max, 1);
  }
}

/**
 * Extension of QuizQuestionResponse
 */
class MultichoiceResponse extends QuizQuestionResponse {
  /**
   * ID of the answers.
   */
  protected $user_answer_ids;
  protected $choice_order;

  /**
   * Constructor
   */
  public function __construct($result_id, stdClass $question_node, $tries = NULL) {
    parent::__construct($result_id, $question_node, $tries);
    $this->user_answer_ids = array();
    // tries is the tries part of the post data
    if (is_array($tries)) {
      if (isset($tries['choice_order'])) {
        $this->choice_order = $tries['choice_order'];
      }
      unset($tries['choice_order']);
      if (isset($tries['answer']) && is_array($tries['answer'])) {
        foreach ($tries['answer'] as $answer_id) {
          $this->user_answer_ids[] = $answer_id;
          $this->answer = $this->user_answer_ids; //@todo: Stop using user_answer_ids and only use answer instead...
        }
      }
      elseif (isset($tries['answer'])) {
        $this->user_answer_ids[] = $tries['answer'];
      }
    }
    // We load the answer from the database
    else {
      $res = db_query('SELECT answer_id FROM {quiz_multichoice_user_answers} ua
              LEFT OUTER JOIN {quiz_multichoice_user_answer_multi} uam ON(uam.user_answer_id = ua.id)
              WHERE ua.result_id = :result_id AND ua.question_nid = :question_nid AND ua.question_vid = :question_vid', array(':result_id' => $result_id, ':question_nid' => $this->question->nid, ':question_vid' => $this->question->vid));
      while ($res_o = $res->fetch()) {
        $this->user_answer_ids[] = $res_o->answer_id;
      }
    }
  }

  /**
   * Implementation of isValid
   *
   * @see QuizQuestionResponse#isValid()
   */
  public function isValid() {
    if ($this->question->choice_multi) {
      return TRUE;
    }
    if (empty($this->user_answer_ids)) {
      return t('You must provide an answer');
    }
    // Perform extra check since FAPI isn't being used:
    if (count($this->user_answer_ids) > 1) {
      return t('You are only allowed to select one answer');
    }
    return TRUE;
  }

  /**
   * Implementation of save
   *
   * @see QuizQuestionResponse#save()
   */
  public function save() {
    $user_answer_id = db_insert('quiz_multichoice_user_answers')
      ->fields(array(
        'result_id' => $this->rid,
        'question_vid' => $this->question->vid,
        'question_nid' => $this->question->nid,
        'choice_order' => $this->choice_order
      ))
      ->execute();

    $query = db_insert('quiz_multichoice_user_answer_multi')
      ->fields(array('user_answer_id', 'answer_id'));
    for ($i = 0; $i < count($this->user_answer_ids); $i++) {
      $query->values(array($user_answer_id, $this->user_answer_ids[$i]));
    }
      $query->execute();
  }

  /**
   * Implementation of delete
   *
   * @see QuizQuestionResponse#delete()
   */
  public function delete() {
    $user_answer_id = array();
    $query = db_query('SELECT id FROM {quiz_multichoice_user_answers} WHERE question_nid = :nid AND question_vid = :vid AND result_id = :result_id', array(':nid' => $this->question->nid, ':vid' => $this->question->vid, ':result_id' => $this->rid));
    while ($user_answer = $query->fetch()) {
      $user_answer_id[] = $user_answer->id;
    }

    if (!empty($user_answer_id)) {
      db_delete('quiz_multichoice_user_answer_multi')
        ->condition('user_answer_id', $user_answer_id, 'IN')
        ->execute();
    }

    db_delete('quiz_multichoice_user_answers')
      ->condition('result_id', $this->rid)
      ->condition('question_nid', $this->question->nid)
      ->condition('question_vid', $this->question->vid)
      ->execute();
  }

  /**
   * Implementation of score
   *
   * @return uint
   *
   * @see QuizQuestionResponse#score()
   */
  public function score() {
    if ($this->question->choice_boolean || $this->isAllWrong()) {
      $score = $this->getMaxScore();
      foreach ($this->question->alternatives as $key => $alt) {
        if (in_array($alt['id'], $this->user_answer_ids)) {
          if ($alt['score_if_chosen'] <= $alt['score_if_not_chosen']) {
            $score = 0;
          }
        }
        else {
          if ($alt['score_if_chosen'] > $alt['score_if_not_chosen']) {
            $score = 0;
          }
        }
      }
    }
    else {
      $score = 0;
      foreach ($this->question->alternatives as $key => $alt) {
        if (in_array($alt['id'], $this->user_answer_ids)) {
          $score += $alt['score_if_chosen'];
        }
        else {
          $score += $alt['score_if_not_chosen'];
        }
      }
    }
    return $score;
  }

  /**
   * If all answers in a question is wrong
   *
   * @return boolean
   *  TRUE if all answers are wrong. False otherwise.
   */
  public function isAllWrong() {
    foreach ($this->question->alternatives as $key => $alt) {
      if ($alt['score_if_chosen'] > 0 || $alt['score_if_not_chosen'] > 0) {
        return FALSE;
      }
    }
    return TRUE;
  }

  /**
   * Implementation of getResponse
   *
   * @return answer
   *
   * @see QuizQuestionResponse#getResponse()
   */
  public function getResponse() {
    return $this->user_answer_ids;
  }

  /**
   * Implementation of getReportFormResponse
   *
   * @see getReportFormResponse($showpoints, $showfeedback, $allow_scoring)
   */
  public function getReportFormResponse($showpoints = TRUE, $showfeedback = TRUE, $allow_scoring = FALSE) {
    $i = 0;
    $this->orderAlternatives($this->question->alternatives);

    // Find the alternative with the highest score
    if ($this->question->choice_multi == 0) {
      $max_score_if_chosen = -999;
      while (isset($this->question->alternatives[$i]) && is_array($this->question->alternatives[$i])) {
        $short = $this->question->alternatives[$i];
        if ($short['score_if_chosen'] > $max_score_if_chosen) {
          $max_score_if_chosen = $short['score_if_chosen'];
        }
        $i++;
      }
      $i = 0;
    }
    // Fetch all data for the report
    $data = array();
    while (isset($this->question->alternatives[$i])) {
      $short = $this->question->alternatives[$i];
      if (drupal_strlen($this->checkMarkup($short['answer'], $short['answer_format'])) > 0) {
        $alternative = array();

        // Did the user choose the alternative?
        $alternative['is_chosen'] = in_array($short['id'], $this->user_answer_ids);

        // Questions where multiple answers isn't allowed are scored differently...
        if ($this->question->choice_multi == 0) {

          if ($this->question->choice_boolean == 0) {
            if ($short['score_if_chosen'] > $short['score_if_not_chosen']) {
              $alternative['is_correct'] = $short['score_if_chosen'] < $max_score_if_chosen ? 1 : 2;
            }
            else {
              $alternative['is_correct'] = 0;
            }
          }

          else {
            $alternative['is_correct'] = $short['score_if_chosen'] > $short['score_if_not_chosen'] ? 2 : 0;
          }
        }

        // Questions where multiple answers are allowed
        else {
          $alternative['is_correct'] = $short['score_if_chosen'] > $short['score_if_not_chosen'] ? 2 : 0;
        }

        $alternative['answer'] = $this->checkMarkup($short['answer'], $short['answer_format'], FALSE);

        $not = $alternative['is_chosen'] ? '' : '_not';
        $alternative['feedback'] = $this->checkMarkup($short['feedback_if' . $not . '_chosen'], $short['feedback_if' . $not . '_chosen_format'], FALSE);
        $data[] = $alternative;
      }
      $i++;
    }
    // Return themed report
    return array('#markup' => theme('multichoice_response', array('data' => $data)));
  }

  /**
   * Order the alternatives according to the choice order stored in the database
   *
   * @param array $alternatives
   *  The alternatives to be ordered
   */
  private function orderAlternatives(array &$alternatives) {
    if (!$this->question->choice_random) {
      return;
    }
    $result = db_query('SELECT choice_order FROM {quiz_multichoice_user_answers}
            WHERE result_id = :result_id AND question_nid = :question_nid AND question_vid = :question_vid', array(':result_id' => $this->rid, ':question_nid' => $this->question->nid, ':question_vid' => $this->question->vid))->fetchField();
    if (!$result) {
      return;
    }
    $order = explode(',', $result);
    $newAlternatives = array();
    foreach ($order as $value) {
      foreach ($alternatives as $alternative) {
        if ($alternative['id'] == $value) {
          $newAlternatives[] = $alternative;
          break;
        }
      }
    }
    $alternatives = $newAlternatives;
  }
  /**
   * Run check_markup() on the field of the specified choice alternative
   *
   * @param $alternative
   *  String to be checked
   * @param $format
   *  The input format to be used
   * @param $check_user_access
   *  Whether or not we are to check the users access to the chosen format
   * @return HTML markup
   */
  private function checkMarkup($alternative, $format, $check_user_access = FALSE) {
    // If the string is empty we don't run it through input filters(They might add empty tags).
    if (drupal_strlen($alternative) == 0) {
      return '';
    }
    return check_markup($alternative, $format, $langcode = '' /* TODO Set this variable. */, $check_user_access);
  }
}
