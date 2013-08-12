<?php
/**
 * @file
 * immunizationed_pillar_tags.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_pillar_tags_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_pillar_tags.
  $permissions['create field_pillar_tags'] = array(
    'name' => 'create field_pillar_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: delete terms in 14.
  $permissions['delete terms in 14'] = array(
    'name' => 'delete terms in 14',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit field_pillar_tags.
  $permissions['edit field_pillar_tags'] = array(
    'name' => 'edit field_pillar_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_pillar_tags.
  $permissions['edit own field_pillar_tags'] = array(
    'name' => 'edit own field_pillar_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit terms in 14.
  $permissions['edit terms in 14'] = array(
    'name' => 'edit terms in 14',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: view field_pillar_tags.
  $permissions['view field_pillar_tags'] = array(
    'name' => 'view field_pillar_tags',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_pillar_tags.
  $permissions['view own field_pillar_tags'] = array(
    'name' => 'view own field_pillar_tags',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}