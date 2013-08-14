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
  $strongarm->name = 'rules_empty_sets';
  $strongarm->value = array(
    'botcha_form_approved' => 0,
    'botcha_form_rejected' => 1,
    'og_membership_insert' => 2,
    'og_membership_update' => 3,
    'og_membership_presave' => 4,
    'og_membership_delete' => 5,
    'feeds_before_import' => 6,
    'feeds_after_import' => 7,
    'feeds_import_assembly_step_date_changed' => 8,
    'feeds_import_user_import' => 9,
    'feeds_import_assembly_instructions_date_changed' => 10,
    'og_user_approved' => 11,
    'og_user_blocked' => 12,
    'og_role_grant' => 13,
    'og_role_revoke' => 14,
    'node_presave' => 15,
    'node_delete' => 16,
    'init' => 17,
    'cron' => 18,
    'watchdog' => 19,
    'user_insert' => 20,
    'user_update' => 21,
    'user_view' => 22,
    'user_delete' => 23,
    'user_logout' => 24,
    'comment_insert' => 25,
    'comment_update' => 26,
    'comment_presave' => 27,
    'comment_view' => 28,
    'comment_delete' => 29,
    'taxonomy_term_insert' => 30,
    'taxonomy_term_update' => 31,
    'taxonomy_term_presave' => 32,
    'taxonomy_term_delete' => 33,
    'taxonomy_vocabulary_insert' => 34,
    'taxonomy_vocabulary_update' => 35,
    'taxonomy_vocabulary_presave' => 36,
    'taxonomy_vocabulary_delete' => 37,
  );
  $export['rules_empty_sets'] = $strongarm;

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
