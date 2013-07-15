<?php
/**
 * @file
 * immunizationed_practice.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_practice_ctools_plugin_api() {
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
function immunizationed_practice_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function immunizationed_practice_node_info() {
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
