<?php
/**
 * @file
 * immunizationed_charts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_charts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function immunizationed_charts_views_api() {
  return array("api" => "3.0");
}
