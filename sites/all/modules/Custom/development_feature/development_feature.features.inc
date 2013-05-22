<?php
/**
 * @file
 * development_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function development_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
