<?php
/**
 * @file
 * caption.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function caption_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node caption defaults'.
  $permissions['administer panelizer node caption defaults'] = array(
    'name' => 'administer panelizer node caption defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create caption content'.
  $permissions['create caption content'] = array(
    'name' => 'create caption content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any caption content'.
  $permissions['delete any caption content'] = array(
    'name' => 'delete any caption content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own caption content'.
  $permissions['delete own caption content'] = array(
    'name' => 'delete own caption content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any caption content'.
  $permissions['edit any caption content'] = array(
    'name' => 'edit any caption content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own caption content'.
  $permissions['edit own caption content'] = array(
    'name' => 'edit own caption content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
