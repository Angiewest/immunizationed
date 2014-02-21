<?php
/**
 * @file
 * pillar_strategies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pillar_strategies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pillar_strategies_node_info() {
  $items = array(
    'convenient_vaccination_services' => array(
      'name' => t('Pillar-1 - Convenient Vaccination Services'),
      'base' => 'node_content',
      'description' => t('This content will be for Pillar 1: Convenient Vaccination Services/ Easy Access. This will include all references and information for Pillar 1. '),
      'has_title' => '1',
      'title_label' => t('Convenient Vaccination Services'),
      'help' => t('Create information for Pillar 1. '),
    ),
    'enhanced_vaccination_systems' => array(
      'name' => t('Pillar-3 - Enhanced Vaccination Systems'),
      'base' => 'node_content',
      'description' => t('This is Pillar 3: Enhanced Office Vaccination Systems. Any content here will be associated with enhancing office system to reduce missed opportunities and increase immunizations. Pillar 3. '),
      'has_title' => '1',
      'title_label' => t('Enhanced Vaccination Systems'),
      'help' => t('Add content about Pillar 3: Enhancing Vaccination Systems. '),
    ),
    'motivation' => array(
      'name' => t('Pillar-4 - Motivation'),
      'base' => 'node_content',
      'description' => t('This is Pillar 4: Motivation. Content to be placed in this section should be associated with motivation strategies through Pillar 4. '),
      'has_title' => '1',
      'title_label' => t('Motivation'),
      'help' => '',
    ),
    'patient_notification' => array(
      'name' => t('Pillar-2 - Patient Notification'),
      'base' => 'node_content',
      'description' => t('This is Pillar 2: Patient notification about the importance of vaccination and the availability of convenient programs. This content will be about Pillar 2.'),
      'has_title' => '1',
      'title_label' => t('Patient Notification'),
      'help' => t('Enter things here that will accomodate Pillar 2 things.'),
    ),
  );
  return $items;
}
