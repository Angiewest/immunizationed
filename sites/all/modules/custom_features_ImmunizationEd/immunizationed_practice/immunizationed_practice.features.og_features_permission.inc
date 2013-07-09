<?php
/**
 * @file
 * immunizationed_practice.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_practice_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_group:add user'
  $permissions['node:practice_group:add user'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:administer group'
  $permissions['node:practice_group:administer group'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:approve and deny subscription'
  $permissions['node:practice_group:approve and deny subscription'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:manage members'
  $permissions['node:practice_group:manage members'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:manage permissions'
  $permissions['node:practice_group:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:manage roles'
  $permissions['node:practice_group:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:subscribe'
  $permissions['node:practice_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:subscribe without approval'
  $permissions['node:practice_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:unsubscribe'
  $permissions['node:practice_group:unsubscribe'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:update body field'
  $permissions['node:practice_group:update body field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_epic_id field'
  $permissions['node:practice_group:update field_epic_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_image field'
  $permissions['node:practice_group:update field_image field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_practice_address field'
  $permissions['node:practice_group:update field_practice_address field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_practice_phone field'
  $permissions['node:practice_group:update field_practice_phone field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_practice_photo field'
  $permissions['node:practice_group:update field_practice_photo field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_practice_website field'
  $permissions['node:practice_group:update field_practice_website field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_tags field'
  $permissions['node:practice_group:update field_tags field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:update group'
  $permissions['node:practice_group:update group'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update group_content_access field'
  $permissions['node:practice_group:update group_content_access field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update group_group field'
  $permissions['node:practice_group:update group_group field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update og_group_ref field'
  $permissions['node:practice_group:update og_group_ref field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:view body field'
  $permissions['node:practice_group:view body field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_epic_id field'
  $permissions['node:practice_group:view field_epic_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_image field'
  $permissions['node:practice_group:view field_image field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice field'
  $permissions['node:practice_group:view field_practice field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice_address field'
  $permissions['node:practice_group:view field_practice_address field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice_phone field'
  $permissions['node:practice_group:view field_practice_phone field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice_photo field'
  $permissions['node:practice_group:view field_practice_photo field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_practice_website field'
  $permissions['node:practice_group:view field_practice_website field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_tags field'
  $permissions['node:practice_group:view field_tags field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view group_content_access field'
  $permissions['node:practice_group:view group_content_access field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view group_group field'
  $permissions['node:practice_group:view group_group field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view og_group_ref field'
  $permissions['node:practice_group:view og_group_ref field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
