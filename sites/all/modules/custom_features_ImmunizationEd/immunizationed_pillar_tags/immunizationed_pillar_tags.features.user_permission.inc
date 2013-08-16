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

  // Exported permission: 'administer panelizer taxonomy_term taxonomy_pillar_tags_ defaults'.
  $permissions['administer panelizer taxonomy_term taxonomy_pillar_tags_ defaults'] = array(
    'name' => 'administer panelizer taxonomy_term taxonomy_pillar_tags_ defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create field_pillar_tags'.
  $permissions['create field_pillar_tags'] = array(
    'name' => 'create field_pillar_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete terms in taxonomy_pillar_tags_'.
  $permissions['delete terms in taxonomy_pillar_tags_'] = array(
    'name' => 'delete terms in taxonomy_pillar_tags_',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit field_pillar_tags'.
  $permissions['edit field_pillar_tags'] = array(
    'name' => 'edit field_pillar_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pillar_tags'.
  $permissions['edit own field_pillar_tags'] = array(
    'name' => 'edit own field_pillar_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in taxonomy_pillar_tags_'.
  $permissions['edit terms in taxonomy_pillar_tags_'] = array(
    'name' => 'edit terms in taxonomy_pillar_tags_',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_pillar_tags'.
  $permissions['view field_pillar_tags'] = array(
    'name' => 'view field_pillar_tags',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pillar_tags'.
  $permissions['view own field_pillar_tags'] = array(
    'name' => 'view own field_pillar_tags',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
