<?php
/**
 * @file
 * immunizationed_anti_spam.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_anti_spam_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
