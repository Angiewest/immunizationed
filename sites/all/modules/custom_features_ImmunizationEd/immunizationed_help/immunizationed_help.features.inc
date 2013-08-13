<?php
/**
 * @file
 * immunizationed_help.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_help_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function immunizationed_help_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function immunizationed_help_node_info() {
  $items = array(
    'help_manual_page' => array(
      'name' => t('Help Manual Page'),
      'base' => 'node_content',
      'description' => t('Page for comprehensive help manual.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'help_topic' => array(
      'name' => t('Help topic'),
      'base' => 'node_content',
      'description' => t('Content to assist site users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
