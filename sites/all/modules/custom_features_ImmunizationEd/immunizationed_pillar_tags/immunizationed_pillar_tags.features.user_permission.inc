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

  // Exported permission: administer panelizer taxonomy_term pillar_tags defaults.
  $permissions['administer panelizer taxonomy_term pillar_tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term pillar_tags defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: delete terms in 14.
  $permissions['delete terms in 14'] = array(
    'name' => 'delete terms in 14',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 14.
  $permissions['edit terms in 14'] = array(
    'name' => 'edit terms in 14',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
