<?php
/**
 * @file
 * caption.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caption_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function caption_node_info() {
  $items = array(
    'caption' => array(
      'name' => t('Caption'),
      'base' => 'node_content',
      'description' => t('use this content type for captions to be attached to views.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
