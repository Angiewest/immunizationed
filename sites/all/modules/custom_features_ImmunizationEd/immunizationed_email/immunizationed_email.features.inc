<?php
/**
 * @file
 * immunizationed_email.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_email_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
