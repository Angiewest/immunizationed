<?php
/**
 * @file
 * conflicting_permissions_for_dev.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conflicting_permissions_for_dev_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
