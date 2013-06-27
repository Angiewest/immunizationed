<?php
/**
 * @file
 * immunizationed_temp_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_temp_feeds_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function immunizationed_temp_feeds_views_api() {
  return array("api" => "3.0");
}
