<?php
/**
 * @file
 * meeting_agenda.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meeting_agenda_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function meeting_agenda_node_info() {
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
