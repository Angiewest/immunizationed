<?php
/**
 * @file
 * immunizationed_emr_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_emr_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function immunizationed_emr_importer_node_info() {
  $items = array(
    'vaccination_data_from_emr' => array(
      'name' => t('Vaccination data from EMR'),
      'base' => 'node_content',
      'description' => t('Contains vaccination data from EMR'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
