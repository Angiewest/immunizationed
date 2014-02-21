<?php
/**
 * @file
 * assembly_step.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function assembly_step_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function assembly_step_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Assembly Step'),
      'base' => 'node_content',
      'description' => t('Use to create single assembly steps for individual practices.'),
      'has_title' => '1',
      'title_label' => t('Assembly Step'),
      'help' => '',
    ),
  );
  return $items;
}
