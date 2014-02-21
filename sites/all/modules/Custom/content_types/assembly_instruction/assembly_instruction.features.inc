<?php
/**
 * @file
 * assembly_instruction.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function assembly_instruction_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function assembly_instruction_node_info() {
  $items = array(
    'roadmap_waypoint' => array(
      'name' => t('Assembly instructions'),
      'base' => 'node_content',
      'description' => t('Master instructions for assembly steps. All elements will be cloned as assembly steps at enrollment'),
      'has_title' => '1',
      'title_label' => t('Assembly Instruction'),
      'help' => t('Add master tasks to be cloned on practice creation.'),
    ),
  );
  return $items;
}
