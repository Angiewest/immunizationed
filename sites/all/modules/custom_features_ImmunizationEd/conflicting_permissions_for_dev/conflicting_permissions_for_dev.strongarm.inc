<?php
/**
 * @file
 * conflicting_permissions_for_dev.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function conflicting_permissions_for_dev_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MimeMailSystem',
    'mimemail' => 'MimeMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_debug';
  $strongarm->value = '1';
  $export['rules_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_debug_log';
  $strongarm->value = 0;
  $export['rules_debug_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_debug_region_bartik';
  $strongarm->value = 'help';
  $export['rules_debug_region_bartik'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_debug_region_energetic';
  $strongarm->value = 'content';
  $export['rules_debug_region_energetic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_debug_region_seven';
  $strongarm->value = 'help';
  $export['rules_debug_region_seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_log_errors';
  $strongarm->value = '3';
  $export['rules_log_errors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_path_cleaning_callback';
  $strongarm->value = 'rules_path_default_cleaning_method';
  $export['rules_path_cleaning_callback'] = $strongarm;

  return $export;
}
