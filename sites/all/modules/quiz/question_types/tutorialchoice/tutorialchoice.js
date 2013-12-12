var tutorialchoice = tutorialchoice || {};
(function($) {

tutorialchoice.refreshScores = function(checkbox, scoring) {
  var prefix = '#' + tutorialchoice.getCorrectIdPrefix(checkbox.id);
  if (checkbox.checked) {
    $(prefix + 'score-if-chosen').val('1');
    $(prefix + 'score-if-not-chosen').val('0');
  }
  else {
    if (scoring == 0) {
      $(prefix + 'score-if-not-chosen').val('0');
      if ($('#edit-choice-multi').attr('checked')) {
        $(prefix + 'score-if-chosen').val('-1');
      }
      else {
        $(prefix + 'score-if-chosen').val('0');
      }
    }
    else if (scoring == 1) {
	    $(prefix + 'score-if-chosen').val('0');
	    if ($('#edit-choice-multi').attr('checked')) {
	      $(prefix + 'score-if-not-chosen').val('1');
	    }
	    else {
	      $(prefix + 'score-if-not-chosen').val('0');
	    }
    }
  }
}

/**
 * Updates correct checkboxes according to changes of the score values for an alternative
 *
 * @param textfield
 *  The textfield(score) that is being updated
 */
tutorialchoice.refreshCorrect = function(textfield) {
  var prefix = '#' + tutorialchoice.getCorrectIdPrefix(textfield.id);
  var chosenScore;
  var notChosenScore;

  // Fetch the score if chosen and score if not chosen values for the active alternative
  if (tutorialchoice.isChosen(textfield.id)) {
    chosenScore = new Number(textfield.value);
    notChosenScore = new Number($(prefix + 'score-if-not-chosen').val());
  }
  else {
    chosenScore = new Number($(prefix + 'score-if-chosen').val());
    notChosenScore = new Number(textfield.value);
  }

  // Set the checked status for the checkbox in the active alternative
  if(notChosenScore < chosenScore) {
    $(prefix + 'correct').attr('checked', true);
  }
  else {
    $(prefix + 'correct').attr('checked', false);
  }
}

/**
 * Helper function fetching the id prefix for a html id attribute
 *
 * @param string
 *  Html id attribute
 * @return
 *  The common prefix for all the alternatives in this alternative fieldset
 */
tutorialchoice.getCorrectIdPrefix = function(string) {
  // TODO: Will the regExp below always work?
  var pattern = new RegExp("^(edit-alternatives-[0-9]{1,2}-)(?:correct|score-if-(?:not-|)chosen)$");
  pattern.exec(string);
  return RegExp.lastParen;
}

/**
 * Checks if the id belongs to the score if chosen textfield
 *
 * @param string
 *  html id attribute of one of the score text fields
 * @return
 *  True if the string ends with "score-if-chosen", false otherwise.
 */
tutorialchoice.isChosen = function(string) {
  var pattern = new RegExp("score-if-chosen$");
  return pattern.test(string);
}
})(jQuery);