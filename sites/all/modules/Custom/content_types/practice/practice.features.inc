<?php
/**
 * @file
 * practice.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function practice_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function practice_node_info() {
  $items = array(
    'practice_group' => array(
      'name' => t('Practice'),
      'base' => 'node_content',
      'description' => t('Clinical practice enrolled in the 4 Pillars Toolkit Project to Build Adult Immunizations'),
      'has_title' => '1',
      'title_label' => t('Practice Name'),
      'help' => '',
    ),
  );
  return $items;
}
