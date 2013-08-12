<?php
/**
 * @file
 * immunizationed_help.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_help_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node help_topic content.
  $permissions['administer panelizer node help_topic content'] = array(
    'name' => 'administer panelizer node help_topic content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node help_topic context.
  $permissions['administer panelizer node help_topic context'] = array(
    'name' => 'administer panelizer node help_topic context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node help_topic defaults.
  $permissions['administer panelizer node help_topic defaults'] = array(
    'name' => 'administer panelizer node help_topic defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node help_topic layout.
  $permissions['administer panelizer node help_topic layout'] = array(
    'name' => 'administer panelizer node help_topic layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node help_topic overview.
  $permissions['administer panelizer node help_topic overview'] = array(
    'name' => 'administer panelizer node help_topic overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node help_topic settings.
  $permissions['administer panelizer node help_topic settings'] = array(
    'name' => 'administer panelizer node help_topic settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term help defaults.
  $permissions['administer panelizer taxonomy_term help defaults'] = array(
    'name' => 'administer panelizer taxonomy_term help defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create field_help_topics_tags.
  $permissions['create field_help_topics_tags'] = array(
    'name' => 'create field_help_topics_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create help_topic content.
  $permissions['create help_topic content'] = array(
    'name' => 'create help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any help_topic content.
  $permissions['delete any help_topic content'] = array(
    'name' => 'delete any help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own help_topic content.
  $permissions['delete own help_topic content'] = array(
    'name' => 'delete own help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 15.
  $permissions['delete terms in 15'] = array(
    'name' => 'delete terms in 15',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any help_topic content.
  $permissions['edit any help_topic content'] = array(
    'name' => 'edit any help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_help_topics_tags.
  $permissions['edit field_help_topics_tags'] = array(
    'name' => 'edit field_help_topics_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_help_topics_tags.
  $permissions['edit own field_help_topics_tags'] = array(
    'name' => 'edit own field_help_topics_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own help_topic content.
  $permissions['edit own help_topic content'] = array(
    'name' => 'edit own help_topic content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 15.
  $permissions['edit terms in 15'] = array(
    'name' => 'edit terms in 15',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: view field_help_topics_tags.
  $permissions['view field_help_topics_tags'] = array(
    'name' => 'view field_help_topics_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_help_topics_tags.
  $permissions['view own field_help_topics_tags'] = array(
    'name' => 'view own field_help_topics_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}