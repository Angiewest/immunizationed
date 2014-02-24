<?php
/**
 * @file
 * meeting_agenda.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function meeting_agenda_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create meeting_agenda content'.
  $permissions['create meeting_agenda content'] = array(
    'name' => 'create meeting_agenda content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any meeting_agenda content'.
  $permissions['delete any meeting_agenda content'] = array(
    'name' => 'delete any meeting_agenda content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own meeting_agenda content'.
  $permissions['delete own meeting_agenda content'] = array(
    'name' => 'delete own meeting_agenda content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any meeting_agenda content'.
  $permissions['edit any meeting_agenda content'] = array(
    'name' => 'edit any meeting_agenda content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own meeting_agenda content'.
  $permissions['edit own meeting_agenda content'] = array(
    'name' => 'edit own meeting_agenda content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
