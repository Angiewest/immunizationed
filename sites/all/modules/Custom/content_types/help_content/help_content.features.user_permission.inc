<?php
/**
 * @file
 * help_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function help_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create help_manual_page content'.
  $permissions['create help_manual_page content'] = array(
    'name' => 'create help_manual_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create help_topic content'.
  $permissions['create help_topic content'] = array(
    'name' => 'create help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any help_manual_page content'.
  $permissions['delete any help_manual_page content'] = array(
    'name' => 'delete any help_manual_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any help_topic content'.
  $permissions['delete any help_topic content'] = array(
    'name' => 'delete any help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own help_manual_page content'.
  $permissions['delete own help_manual_page content'] = array(
    'name' => 'delete own help_manual_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own help_topic content'.
  $permissions['delete own help_topic content'] = array(
    'name' => 'delete own help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any help_manual_page content'.
  $permissions['edit any help_manual_page content'] = array(
    'name' => 'edit any help_manual_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any help_topic content'.
  $permissions['edit any help_topic content'] = array(
    'name' => 'edit any help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own help_manual_page content'.
  $permissions['edit own help_manual_page content'] = array(
    'name' => 'edit own help_manual_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own help_topic content'.
  $permissions['edit own help_topic content'] = array(
    'name' => 'edit own help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
