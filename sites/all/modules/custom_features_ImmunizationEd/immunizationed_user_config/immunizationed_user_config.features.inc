<?php
/**
 * @file
 * immunizationed_user_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_user_config_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
