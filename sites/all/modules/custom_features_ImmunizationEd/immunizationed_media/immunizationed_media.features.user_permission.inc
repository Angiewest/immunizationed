<?php
/**
 * @file
 * immunizationed_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'image',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create field_image'.
  $permissions['create field_image'] = array(
    'name' => 'create field_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_resource_image'.
  $permissions['create field_resource_image'] = array(
    'name' => 'create field_resource_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit field_image'.
  $permissions['edit field_image'] = array(
    'name' => 'edit field_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_resource_image'.
  $permissions['edit field_resource_image'] = array(
    'name' => 'edit field_resource_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_image'.
  $permissions['edit own field_image'] = array(
    'name' => 'edit own field_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_resource_image'.
  $permissions['edit own field_resource_image'] = array(
    'name' => 'edit own field_resource_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view field_image'.
  $permissions['view field_image'] = array(
    'name' => 'view field_image',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_resource_image'.
  $permissions['view field_resource_image'] = array(
    'name' => 'view field_resource_image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own field_image'.
  $permissions['view own field_image'] = array(
    'name' => 'view own field_image',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_resource_image'.
  $permissions['view own field_resource_image'] = array(
    'name' => 'view own field_resource_image',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
