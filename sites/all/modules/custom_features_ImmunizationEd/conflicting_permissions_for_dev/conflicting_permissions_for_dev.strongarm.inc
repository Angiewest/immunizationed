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
    'default-system' => 'TestingMailSystem',
    'mimemail' => 'MimeMailSystem',
  );
  $export['mail_system'] = $strongarm;

  return $export;
}
