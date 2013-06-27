<?php
/**
 * @file
 * immunizationed_email.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_email_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer maillog.
  $permissions['administer maillog'] = array(
    'name' => 'administer maillog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: administer mailsystem.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: delete maillog.
  $permissions['delete maillog'] = array(
    'name' => 'delete maillog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maillog',
  );

  // Exported permission: edit mimemail user settings.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: execute mimemail_send_email_action.
  $permissions['execute mimemail_send_email_action'] = array(
    'name' => 'execute mimemail_send_email_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute system_send_email_action.
  $permissions['execute system_send_email_action'] = array(
    'name' => 'execute system_send_email_action',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: view maillog.
  $permissions['view maillog'] = array(
    'name' => 'view maillog',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'maillog',
  );

  return $permissions;
}