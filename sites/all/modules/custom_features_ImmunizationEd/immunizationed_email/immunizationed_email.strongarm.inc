<?php
/**
 * @file
 * immunizationed_email.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function immunizationed_email_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'queue_mail_keys';
  $strongarm->value = 'webform_*
contact_*
system_*
update_*
user_*';
  $export['queue_mail_keys'] = $strongarm;

  return $export;
}
