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

  // Exported permission: administer mailsystem.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
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

  return $permissions;
}
