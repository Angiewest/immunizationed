<?php
/**
 * @file
 * immunizationed_practice_inputs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_practice_inputs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function immunizationed_practice_inputs_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function immunizationed_practice_inputs_node_info() {
  $items = array(
    'convenient_vaccination_services' => array(
      'name' => t('Convenient Vaccination Services'),
      'base' => 'node_content',
      'description' => t('This content will be for Pillar 1: Convenient Vaccination Services/ Easy Access. This will include all references and information for Pillar 1. '),
      'has_title' => '1',
      'title_label' => t('Convenient Vaccination Services'),
      'help' => t('Create information for Pillar 1. '),
    ),
    'enhanced_vaccination_systems' => array(
      'name' => t('Enhanced Vaccination Systems'),
      'base' => 'node_content',
      'description' => t('This is Pillar 3: Enhanced Office Vaccination Systems. Any content here will be associated with enhancing office system to reduce missed opportunities and increase immunizations. Pillar 3. '),
      'has_title' => '1',
      'title_label' => t('Enhanced Vaccination Systems'),
      'help' => t('Add content about Pillar 3: Enhancing Vaccination Systems. '),
    ),
    'meeting_agenda' => array(
      'name' => t('Meeting Agenda'),
      'base' => 'node_content',
      'description' => t('You can add content from the Meeting Agenda document. Information collected here will be items on the agenda.'),
      'has_title' => '1',
      'title_label' => t('Meeting Agenda'),
      'help' => '',
    ),
    'motivation' => array(
      'name' => t('Motivation'),
      'base' => 'node_content',
      'description' => t('This is Pillar 4: Motivation. Content to be placed in this section should be associated with motivation strategies through Pillar 4. '),
      'has_title' => '1',
      'title_label' => t('Motivation'),
      'help' => '',
    ),
    'other_additions_to_views' => array(
      'name' => t('Other Additions to Views'),
      'base' => 'node_content',
      'description' => t('This content will be additions that will be seen on various views that we can\'t put anywhere else. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patient_notification' => array(
      'name' => t('Patient Notification'),
      'base' => 'node_content',
      'description' => t('This is Pillar 2: Patient notification about the importance of vaccination and the availability of convenient programs. This content will be about Pillar 2.'),
      'has_title' => '1',
      'title_label' => t('Patient Notification'),
      'help' => t('Enter things here that will accomodate Pillar 2 things.'),
    ),
  );
  return $items;
}
