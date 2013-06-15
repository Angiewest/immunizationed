<?php
/**
 * @file
 * conflicting_permissions_for_production.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function conflicting_permissions_for_production_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
