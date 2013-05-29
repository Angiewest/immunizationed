<?php
/**
 * @file
 * immunizationed_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_admin_group:add user'
  $permissions['node:practice_admin_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:administer group'
  $permissions['node:practice_admin_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:approve and deny subscription'
  $permissions['node:practice_admin_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:create announcement content'
  $permissions['node:practice_admin_group:create announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create article content'
  $permissions['node:practice_admin_group:create article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create convenient_vaccination_services content'
  $permissions['node:practice_admin_group:create convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:create enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create meeting_agenda content'
  $permissions['node:practice_admin_group:create meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create motivation content'
  $permissions['node:practice_admin_group:create motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create patient_notification content'
  $permissions['node:practice_admin_group:create patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:create task content'
  $permissions['node:practice_admin_group:create task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:delete any announcement content'
  $permissions['node:practice_admin_group:delete any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any article content'
  $permissions['node:practice_admin_group:delete any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any convenient_vaccination_services content'
  $permissions['node:practice_admin_group:delete any convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:delete any enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any meeting_agenda content'
  $permissions['node:practice_admin_group:delete any meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any motivation content'
  $permissions['node:practice_admin_group:delete any motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any patient_notification content'
  $permissions['node:practice_admin_group:delete any patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete any task content'
  $permissions['node:practice_admin_group:delete any task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:delete own announcement content'
  $permissions['node:practice_admin_group:delete own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own article content'
  $permissions['node:practice_admin_group:delete own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own convenient_vaccination_services content'
  $permissions['node:practice_admin_group:delete own convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:delete own enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own meeting_agenda content'
  $permissions['node:practice_admin_group:delete own meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own motivation content'
  $permissions['node:practice_admin_group:delete own motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own patient_notification content'
  $permissions['node:practice_admin_group:delete own patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:delete own task content'
  $permissions['node:practice_admin_group:delete own task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:manage members'
  $permissions['node:practice_admin_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:manage permissions'
  $permissions['node:practice_admin_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:manage roles'
  $permissions['node:practice_admin_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:subscribe'
  $permissions['node:practice_admin_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:subscribe without approval'
  $permissions['node:practice_admin_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:unsubscribe'
  $permissions['node:practice_admin_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update any announcement content'
  $permissions['node:practice_admin_group:update any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any article content'
  $permissions['node:practice_admin_group:update any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any convenient_vaccination_services content'
  $permissions['node:practice_admin_group:update any convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:update any enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any meeting_agenda content'
  $permissions['node:practice_admin_group:update any meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any motivation content'
  $permissions['node:practice_admin_group:update any motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any patient_notification content'
  $permissions['node:practice_admin_group:update any patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update any task content'
  $permissions['node:practice_admin_group:update any task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update body field'
  $permissions['node:practice_admin_group:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_assembly_instruction field'
  $permissions['node:practice_admin_group:update field_assembly_instruction field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_assembly_instruction_p2 field'
  $permissions['node:practice_admin_group:update field_assembly_instruction_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_assembly_instruction_p3 field'
  $permissions['node:practice_admin_group:update field_assembly_instruction_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_assembly_instruction_p4 field'
  $permissions['node:practice_admin_group:update field_assembly_instruction_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_date field'
  $permissions['node:practice_admin_group:update field_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_date_started field'
  $permissions['node:practice_admin_group:update field_date_started field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_date_task_completed field'
  $permissions['node:practice_admin_group:update field_date_task_completed field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_expected_time_to_complete field'
  $permissions['node:practice_admin_group:update field_expected_time_to_complete field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_image field'
  $permissions['node:practice_admin_group:update field_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_next_meeting_date field'
  $permissions['node:practice_admin_group:update field_next_meeting_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_notes field'
  $permissions['node:practice_admin_group:update field_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_other_please_specify_p1 field'
  $permissions['node:practice_admin_group:update field_other_please_specify_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_other_please_specify_p2 field'
  $permissions['node:practice_admin_group:update field_other_please_specify_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_other_please_specify_p3 field'
  $permissions['node:practice_admin_group:update field_other_please_specify_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_other_please_specify_p4 field'
  $permissions['node:practice_admin_group:update field_other_please_specify_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_practice_address field'
  $permissions['node:practice_admin_group:update field_practice_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_practice_phone field'
  $permissions['node:practice_admin_group:update field_practice_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_practice_photo field'
  $permissions['node:practice_admin_group:update field_practice_photo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_practice_website field'
  $permissions['node:practice_admin_group:update field_practice_website field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_req_assembly_instruc_p1 field'
  $permissions['node:practice_admin_group:update field_req_assembly_instruc_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_req_assembly_instruc_p2 field'
  $permissions['node:practice_admin_group:update field_req_assembly_instruc_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_req_assembly_instruc_p3 field'
  $permissions['node:practice_admin_group:update field_req_assembly_instruc_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_req_assembly_instruc_p4 field'
  $permissions['node:practice_admin_group:update field_req_assembly_instruc_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_resource_links field'
  $permissions['node:practice_admin_group:update field_resource_links field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_responsible_role field'
  $permissions['node:practice_admin_group:update field_responsible_role field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_tags field'
  $permissions['node:practice_admin_group:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update field_task_due_date field'
  $permissions['node:practice_admin_group:update field_task_due_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update field_task_start_date field'
  $permissions['node:practice_admin_group:update field_task_start_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update group'
  $permissions['node:practice_admin_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update group_content_access field'
  $permissions['node:practice_admin_group:update group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update group_group field'
  $permissions['node:practice_admin_group:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update og_group_ref field'
  $permissions['node:practice_admin_group:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update og_user_node field'
  $permissions['node:practice_admin_group:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:update own announcement content'
  $permissions['node:practice_admin_group:update own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own article content'
  $permissions['node:practice_admin_group:update own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own convenient_vaccination_services content'
  $permissions['node:practice_admin_group:update own convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own enhanced_vaccination_systems content'
  $permissions['node:practice_admin_group:update own enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own meeting_agenda content'
  $permissions['node:practice_admin_group:update own meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own motivation content'
  $permissions['node:practice_admin_group:update own motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own patient_notification content'
  $permissions['node:practice_admin_group:update own patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:update own task content'
  $permissions['node:practice_admin_group:update own task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view body field'
  $permissions['node:practice_admin_group:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_assembly_instruction field'
  $permissions['node:practice_admin_group:view field_assembly_instruction field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_assembly_instruction_p2 field'
  $permissions['node:practice_admin_group:view field_assembly_instruction_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_assembly_instruction_p3 field'
  $permissions['node:practice_admin_group:view field_assembly_instruction_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_assembly_instruction_p4 field'
  $permissions['node:practice_admin_group:view field_assembly_instruction_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_date field'
  $permissions['node:practice_admin_group:view field_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_date_started field'
  $permissions['node:practice_admin_group:view field_date_started field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_date_task_completed field'
  $permissions['node:practice_admin_group:view field_date_task_completed field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_expected_time_to_complete field'
  $permissions['node:practice_admin_group:view field_expected_time_to_complete field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_image field'
  $permissions['node:practice_admin_group:view field_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_next_meeting_date field'
  $permissions['node:practice_admin_group:view field_next_meeting_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_notes field'
  $permissions['node:practice_admin_group:view field_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_other_please_specify_p1 field'
  $permissions['node:practice_admin_group:view field_other_please_specify_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_other_please_specify_p2 field'
  $permissions['node:practice_admin_group:view field_other_please_specify_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_other_please_specify_p3 field'
  $permissions['node:practice_admin_group:view field_other_please_specify_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_other_please_specify_p4 field'
  $permissions['node:practice_admin_group:view field_other_please_specify_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_practice_address field'
  $permissions['node:practice_admin_group:view field_practice_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_practice_phone field'
  $permissions['node:practice_admin_group:view field_practice_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_practice_photo field'
  $permissions['node:practice_admin_group:view field_practice_photo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_practice_website field'
  $permissions['node:practice_admin_group:view field_practice_website field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_req_assembly_instruc_p1 field'
  $permissions['node:practice_admin_group:view field_req_assembly_instruc_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_req_assembly_instruc_p2 field'
  $permissions['node:practice_admin_group:view field_req_assembly_instruc_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_req_assembly_instruc_p3 field'
  $permissions['node:practice_admin_group:view field_req_assembly_instruc_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_req_assembly_instruc_p4 field'
  $permissions['node:practice_admin_group:view field_req_assembly_instruc_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_resource_links field'
  $permissions['node:practice_admin_group:view field_resource_links field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_responsible_role field'
  $permissions['node:practice_admin_group:view field_responsible_role field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_tags field'
  $permissions['node:practice_admin_group:view field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view field_task_due_date field'
  $permissions['node:practice_admin_group:view field_task_due_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view field_task_start_date field'
  $permissions['node:practice_admin_group:view field_task_start_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view group_content_access field'
  $permissions['node:practice_admin_group:view group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_admin_group:view group_group field'
  $permissions['node:practice_admin_group:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view og_group_ref field'
  $permissions['node:practice_admin_group:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_admin_group:view og_user_node field'
  $permissions['node:practice_admin_group:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

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
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:approve and deny subscription'
  $permissions['node:practice_group:approve and deny subscription'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create announcement content'
  $permissions['node:practice_group:create announcement content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create article content'
  $permissions['node:practice_group:create article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:create convenient_vaccination_services content'
  $permissions['node:practice_group:create convenient_vaccination_services content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create enhanced_vaccination_systems content'
  $permissions['node:practice_group:create enhanced_vaccination_systems content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create meeting_agenda content'
  $permissions['node:practice_group:create meeting_agenda content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create motivation content'
  $permissions['node:practice_group:create motivation content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create patient_notification content'
  $permissions['node:practice_group:create patient_notification content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:create task content'
  $permissions['node:practice_group:create task content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:delete any announcement content'
  $permissions['node:practice_group:delete any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any article content'
  $permissions['node:practice_group:delete any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any convenient_vaccination_services content'
  $permissions['node:practice_group:delete any convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any enhanced_vaccination_systems content'
  $permissions['node:practice_group:delete any enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any meeting_agenda content'
  $permissions['node:practice_group:delete any meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any motivation content'
  $permissions['node:practice_group:delete any motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any patient_notification content'
  $permissions['node:practice_group:delete any patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete any task content'
  $permissions['node:practice_group:delete any task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own announcement content'
  $permissions['node:practice_group:delete own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own article content'
  $permissions['node:practice_group:delete own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own convenient_vaccination_services content'
  $permissions['node:practice_group:delete own convenient_vaccination_services content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own enhanced_vaccination_systems content'
  $permissions['node:practice_group:delete own enhanced_vaccination_systems content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own meeting_agenda content'
  $permissions['node:practice_group:delete own meeting_agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own motivation content'
  $permissions['node:practice_group:delete own motivation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own patient_notification content'
  $permissions['node:practice_group:delete own patient_notification content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:delete own task content'
  $permissions['node:practice_group:delete own task content'] = array(
    'roles' => array(),
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
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:subscribe without approval'
  $permissions['node:practice_group:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:unsubscribe'
  $permissions['node:practice_group:unsubscribe'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any announcement content'
  $permissions['node:practice_group:update any announcement content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any article content'
  $permissions['node:practice_group:update any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update any convenient_vaccination_services content'
  $permissions['node:practice_group:update any convenient_vaccination_services content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any enhanced_vaccination_systems content'
  $permissions['node:practice_group:update any enhanced_vaccination_systems content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any meeting_agenda content'
  $permissions['node:practice_group:update any meeting_agenda content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any motivation content'
  $permissions['node:practice_group:update any motivation content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any patient_notification content'
  $permissions['node:practice_group:update any patient_notification content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update any task content'
  $permissions['node:practice_group:update any task content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:update body field'
  $permissions['node:practice_group:update body field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_assembly_instruction field'
  $permissions['node:practice_group:update field_assembly_instruction field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_assembly_instruction_p2 field'
  $permissions['node:practice_group:update field_assembly_instruction_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_assembly_instruction_p3 field'
  $permissions['node:practice_group:update field_assembly_instruction_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_assembly_instruction_p4 field'
  $permissions['node:practice_group:update field_assembly_instruction_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_date field'
  $permissions['node:practice_group:update field_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_date_started field'
  $permissions['node:practice_group:update field_date_started field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_date_task_completed field'
  $permissions['node:practice_group:update field_date_task_completed field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_expected_time_to_complete field'
  $permissions['node:practice_group:update field_expected_time_to_complete field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_image field'
  $permissions['node:practice_group:update field_image field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_next_meeting_date field'
  $permissions['node:practice_group:update field_next_meeting_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_notes field'
  $permissions['node:practice_group:update field_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_other_please_specify_p1 field'
  $permissions['node:practice_group:update field_other_please_specify_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_other_please_specify_p2 field'
  $permissions['node:practice_group:update field_other_please_specify_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_other_please_specify_p3 field'
  $permissions['node:practice_group:update field_other_please_specify_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_other_please_specify_p4 field'
  $permissions['node:practice_group:update field_other_please_specify_p4 field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:update field_req_assembly_instruc_p1 field'
  $permissions['node:practice_group:update field_req_assembly_instruc_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_req_assembly_instruc_p2 field'
  $permissions['node:practice_group:update field_req_assembly_instruc_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_req_assembly_instruc_p3 field'
  $permissions['node:practice_group:update field_req_assembly_instruc_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_req_assembly_instruc_p4 field'
  $permissions['node:practice_group:update field_req_assembly_instruc_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_resource_links field'
  $permissions['node:practice_group:update field_resource_links field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_responsible_role field'
  $permissions['node:practice_group:update field_responsible_role field'] = array(
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

  // Exported og permission: 'node:practice_group:update field_task_due_date field'
  $permissions['node:practice_group:update field_task_due_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_task_start_date field'
  $permissions['node:practice_group:update field_task_start_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update group'
  $permissions['node:practice_group:update group'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
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

  // Exported og permission: 'node:practice_group:update og_user_node field'
  $permissions['node:practice_group:update og_user_node field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own announcement content'
  $permissions['node:practice_group:update own announcement content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own article content'
  $permissions['node:practice_group:update own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update own convenient_vaccination_services content'
  $permissions['node:practice_group:update own convenient_vaccination_services content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own enhanced_vaccination_systems content'
  $permissions['node:practice_group:update own enhanced_vaccination_systems content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own meeting_agenda content'
  $permissions['node:practice_group:update own meeting_agenda content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own motivation content'
  $permissions['node:practice_group:update own motivation content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own patient_notification content'
  $permissions['node:practice_group:update own patient_notification content'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update own task content'
  $permissions['node:practice_group:update own task content'] = array(
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

  // Exported og permission: 'node:practice_group:view field_assembly_instruction field'
  $permissions['node:practice_group:view field_assembly_instruction field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_assembly_instruction_p2 field'
  $permissions['node:practice_group:view field_assembly_instruction_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_assembly_instruction_p3 field'
  $permissions['node:practice_group:view field_assembly_instruction_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_assembly_instruction_p4 field'
  $permissions['node:practice_group:view field_assembly_instruction_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_date field'
  $permissions['node:practice_group:view field_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_date_started field'
  $permissions['node:practice_group:view field_date_started field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_date_task_completed field'
  $permissions['node:practice_group:view field_date_task_completed field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_expected_time_to_complete field'
  $permissions['node:practice_group:view field_expected_time_to_complete field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_image field'
  $permissions['node:practice_group:view field_image field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_next_meeting_date field'
  $permissions['node:practice_group:view field_next_meeting_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_notes field'
  $permissions['node:practice_group:view field_notes field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_other_please_specify_p1 field'
  $permissions['node:practice_group:view field_other_please_specify_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_other_please_specify_p2 field'
  $permissions['node:practice_group:view field_other_please_specify_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_other_please_specify_p3 field'
  $permissions['node:practice_group:view field_other_please_specify_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_other_please_specify_p4 field'
  $permissions['node:practice_group:view field_other_please_specify_p4 field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view field_req_assembly_instruc_p1 field'
  $permissions['node:practice_group:view field_req_assembly_instruc_p1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_req_assembly_instruc_p2 field'
  $permissions['node:practice_group:view field_req_assembly_instruc_p2 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_req_assembly_instruc_p3 field'
  $permissions['node:practice_group:view field_req_assembly_instruc_p3 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_req_assembly_instruc_p4 field'
  $permissions['node:practice_group:view field_req_assembly_instruc_p4 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_resource_links field'
  $permissions['node:practice_group:view field_resource_links field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_responsible_role field'
  $permissions['node:practice_group:view field_responsible_role field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_tags field'
  $permissions['node:practice_group:view field_tags field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_task_due_date field'
  $permissions['node:practice_group:view field_task_due_date field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_task_start_date field'
  $permissions['node:practice_group:view field_task_start_date field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view og_user_node field'
  $permissions['node:practice_group:view og_user_node field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
