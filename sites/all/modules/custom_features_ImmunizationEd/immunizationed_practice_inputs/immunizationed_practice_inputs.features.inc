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
 * Implements hook_node_info().
 */
function immunizationed_practice_inputs_node_info() {
  $items = array(
    'meeting_agenda' => array(
      'name' => t('Meeting Agenda'),
      'base' => 'node_content',
      'description' => t('You can add content from the Meeting Agenda document. Information collected here will be items on the agenda.'),
      'has_title' => '1',
      'title_label' => t('Meeting Agenda'),
      'help' => '',
    ),
  );
  return $items;
}
