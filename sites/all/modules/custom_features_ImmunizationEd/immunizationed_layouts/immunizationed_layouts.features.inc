<?php
/**
 * @file
 * immunizationed_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_layouts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
}