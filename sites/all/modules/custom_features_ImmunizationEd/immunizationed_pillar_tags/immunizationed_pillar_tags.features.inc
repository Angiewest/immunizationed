<?php
/**
 * @file
 * immunizationed_pillar_tags.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_pillar_tags_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
