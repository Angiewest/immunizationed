<?php
/**
 * @file
 * immunizationed_structure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_structure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create announcement content.
  $permissions['create announcement content'] = array(
    'name' => 'create announcement content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create body.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create book content.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create convenient_vaccination_services content.
  $permissions['create convenient_vaccination_services content'] = array(
    'name' => 'create convenient_vaccination_services content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create document content.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create enhanced_vaccination_systems content.
  $permissions['create enhanced_vaccination_systems content'] = array(
    'name' => 'create enhanced_vaccination_systems content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_assembly_instruction.
  $permissions['create field_assembly_instruction'] = array(
    'name' => 'create field_assembly_instruction',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_assembly_instruction_p2.
  $permissions['create field_assembly_instruction_p2'] = array(
    'name' => 'create field_assembly_instruction_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_assembly_instruction_p3.
  $permissions['create field_assembly_instruction_p3'] = array(
    'name' => 'create field_assembly_instruction_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_assembly_instruction_p4.
  $permissions['create field_assembly_instruction_p4'] = array(
    'name' => 'create field_assembly_instruction_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_date_started.
  $permissions['create field_date_started'] = array(
    'name' => 'create field_date_started',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_date_task_completed.
  $permissions['create field_date_task_completed'] = array(
    'name' => 'create field_date_task_completed',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_epic_id.
  $permissions['create field_epic_id'] = array(
    'name' => 'create field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_expected_time_to_complete.
  $permissions['create field_expected_time_to_complete'] = array(
    'name' => 'create field_expected_time_to_complete',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_influenza.
  $permissions['create field_influenza'] = array(
    'name' => 'create field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_other_please_specify_p1.
  $permissions['create field_other_please_specify_p1'] = array(
    'name' => 'create field_other_please_specify_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_other_please_specify_p2.
  $permissions['create field_other_please_specify_p2'] = array(
    'name' => 'create field_other_please_specify_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_other_please_specify_p3.
  $permissions['create field_other_please_specify_p3'] = array(
    'name' => 'create field_other_please_specify_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_other_please_specify_p4.
  $permissions['create field_other_please_specify_p4'] = array(
    'name' => 'create field_other_please_specify_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_pneumo.
  $permissions['create field_pneumo'] = array(
    'name' => 'create field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_reporting_period.
  $permissions['create field_reporting_period'] = array(
    'name' => 'create field_reporting_period',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_req_assembly_instruc_p1.
  $permissions['create field_req_assembly_instruc_p1'] = array(
    'name' => 'create field_req_assembly_instruc_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_req_assembly_instruc_p2.
  $permissions['create field_req_assembly_instruc_p2'] = array(
    'name' => 'create field_req_assembly_instruc_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_req_assembly_instruc_p3.
  $permissions['create field_req_assembly_instruc_p3'] = array(
    'name' => 'create field_req_assembly_instruc_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_req_assembly_instruc_p4.
  $permissions['create field_req_assembly_instruc_p4'] = array(
    'name' => 'create field_req_assembly_instruc_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_responsible_role.
  $permissions['create field_responsible_role'] = array(
    'name' => 'create field_responsible_role',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tags.
  $permissions['create field_tags'] = array(
    'name' => 'create field_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_task_due_date.
  $permissions['create field_task_due_date'] = array(
    'name' => 'create field_task_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_task_start_date.
  $permissions['create field_task_start_date'] = array(
    'name' => 'create field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_td.
  $permissions['create field_td'] = array(
    'name' => 'create field_td',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_tdap.
  $permissions['create field_tdap'] = array(
    'name' => 'create field_tdap',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_total.
  $permissions['create field_total'] = array(
    'name' => 'create field_total',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_visits.
  $permissions['create field_visits'] = array(
    'name' => 'create field_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create group_content_access.
  $permissions['create group_content_access'] = array(
    'name' => 'create group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create meeting_agenda content.
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

  // Exported permission: create motivation content.
  $permissions['create motivation content'] = array(
    'name' => 'create motivation content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create nuts_bolts content.
  $permissions['create nuts_bolts content'] = array(
    'name' => 'create nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create offsite_resource content.
  $permissions['create offsite_resource content'] = array(
    'name' => 'create offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create og_group_ref.
  $permissions['create og_group_ref'] = array(
    'name' => 'create og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create other_additions_to_views content.
  $permissions['create other_additions_to_views content'] = array(
    'name' => 'create other_additions_to_views content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel content.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create patient_notification content.
  $permissions['create patient_notification content'] = array(
    'name' => 'create patient_notification content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create practice_admin_group content.
  $permissions['create practice_admin_group content'] = array(
    'name' => 'create practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create practice_group content.
  $permissions['create practice_group content'] = array(
    'name' => 'create practice_group content',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create required_disclosure content.
  $permissions['create required_disclosure content'] = array(
    'name' => 'create required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create roadmap_waypoint content.
  $permissions['create roadmap_waypoint content'] = array(
    'name' => 'create roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create task content.
  $permissions['create task content'] = array(
    'name' => 'create task content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create vaccination_data_from_emr content.
  $permissions['create vaccination_data_from_emr content'] = array(
    'name' => 'create vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create video content.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any announcement content.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any book content.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any convenient_vaccination_services content.
  $permissions['delete any convenient_vaccination_services content'] = array(
    'name' => 'delete any convenient_vaccination_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any document content.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any enhanced_vaccination_systems content.
  $permissions['delete any enhanced_vaccination_systems content'] = array(
    'name' => 'delete any enhanced_vaccination_systems content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any meeting_agenda content.
  $permissions['delete any meeting_agenda content'] = array(
    'name' => 'delete any meeting_agenda content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any motivation content.
  $permissions['delete any motivation content'] = array(
    'name' => 'delete any motivation content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any nuts_bolts content.
  $permissions['delete any nuts_bolts content'] = array(
    'name' => 'delete any nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any offsite_resource content.
  $permissions['delete any offsite_resource content'] = array(
    'name' => 'delete any offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any other_additions_to_views content.
  $permissions['delete any other_additions_to_views content'] = array(
    'name' => 'delete any other_additions_to_views content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel content.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any patient_notification content.
  $permissions['delete any patient_notification content'] = array(
    'name' => 'delete any patient_notification content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any practice_admin_group content.
  $permissions['delete any practice_admin_group content'] = array(
    'name' => 'delete any practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any practice_group content.
  $permissions['delete any practice_group content'] = array(
    'name' => 'delete any practice_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any required_disclosure content.
  $permissions['delete any required_disclosure content'] = array(
    'name' => 'delete any required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any roadmap_waypoint content.
  $permissions['delete any roadmap_waypoint content'] = array(
    'name' => 'delete any roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any task content.
  $permissions['delete any task content'] = array(
    'name' => 'delete any task content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vaccination_data_from_emr content.
  $permissions['delete any vaccination_data_from_emr content'] = array(
    'name' => 'delete any vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any video content.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own announcement content.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own book content.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own convenient_vaccination_services content.
  $permissions['delete own convenient_vaccination_services content'] = array(
    'name' => 'delete own convenient_vaccination_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own document content.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own enhanced_vaccination_systems content.
  $permissions['delete own enhanced_vaccination_systems content'] = array(
    'name' => 'delete own enhanced_vaccination_systems content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own meeting_agenda content.
  $permissions['delete own meeting_agenda content'] = array(
    'name' => 'delete own meeting_agenda content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own motivation content.
  $permissions['delete own motivation content'] = array(
    'name' => 'delete own motivation content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own nuts_bolts content.
  $permissions['delete own nuts_bolts content'] = array(
    'name' => 'delete own nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own offsite_resource content.
  $permissions['delete own offsite_resource content'] = array(
    'name' => 'delete own offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own other_additions_to_views content.
  $permissions['delete own other_additions_to_views content'] = array(
    'name' => 'delete own other_additions_to_views content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel content.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own patient_notification content.
  $permissions['delete own patient_notification content'] = array(
    'name' => 'delete own patient_notification content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own practice_admin_group content.
  $permissions['delete own practice_admin_group content'] = array(
    'name' => 'delete own practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own practice_group content.
  $permissions['delete own practice_group content'] = array(
    'name' => 'delete own practice_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own required_disclosure content.
  $permissions['delete own required_disclosure content'] = array(
    'name' => 'delete own required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own roadmap_waypoint content.
  $permissions['delete own roadmap_waypoint content'] = array(
    'name' => 'delete own roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own task content.
  $permissions['delete own task content'] = array(
    'name' => 'delete own task content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vaccination_data_from_emr content.
  $permissions['delete own vaccination_data_from_emr content'] = array(
    'name' => 'delete own vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own video content.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any announcement content.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any book content.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any convenient_vaccination_services content.
  $permissions['edit any convenient_vaccination_services content'] = array(
    'name' => 'edit any convenient_vaccination_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any document content.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any enhanced_vaccination_systems content.
  $permissions['edit any enhanced_vaccination_systems content'] = array(
    'name' => 'edit any enhanced_vaccination_systems content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any meeting_agenda content.
  $permissions['edit any meeting_agenda content'] = array(
    'name' => 'edit any meeting_agenda content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any motivation content.
  $permissions['edit any motivation content'] = array(
    'name' => 'edit any motivation content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any nuts_bolts content.
  $permissions['edit any nuts_bolts content'] = array(
    'name' => 'edit any nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any offsite_resource content.
  $permissions['edit any offsite_resource content'] = array(
    'name' => 'edit any offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any other_additions_to_views content.
  $permissions['edit any other_additions_to_views content'] = array(
    'name' => 'edit any other_additions_to_views content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel content.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any patient_notification content.
  $permissions['edit any patient_notification content'] = array(
    'name' => 'edit any patient_notification content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any practice_admin_group content.
  $permissions['edit any practice_admin_group content'] = array(
    'name' => 'edit any practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any practice_group content.
  $permissions['edit any practice_group content'] = array(
    'name' => 'edit any practice_group content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any required_disclosure content.
  $permissions['edit any required_disclosure content'] = array(
    'name' => 'edit any required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any roadmap_waypoint content.
  $permissions['edit any roadmap_waypoint content'] = array(
    'name' => 'edit any roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any task content.
  $permissions['edit any task content'] = array(
    'name' => 'edit any task content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vaccination_data_from_emr content.
  $permissions['edit any vaccination_data_from_emr content'] = array(
    'name' => 'edit any vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any video content.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit body.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_assembly_instruction.
  $permissions['edit field_assembly_instruction'] = array(
    'name' => 'edit field_assembly_instruction',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_assembly_instruction_p2.
  $permissions['edit field_assembly_instruction_p2'] = array(
    'name' => 'edit field_assembly_instruction_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_assembly_instruction_p3.
  $permissions['edit field_assembly_instruction_p3'] = array(
    'name' => 'edit field_assembly_instruction_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_assembly_instruction_p4.
  $permissions['edit field_assembly_instruction_p4'] = array(
    'name' => 'edit field_assembly_instruction_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_date_started.
  $permissions['edit field_date_started'] = array(
    'name' => 'edit field_date_started',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_date_task_completed.
  $permissions['edit field_date_task_completed'] = array(
    'name' => 'edit field_date_task_completed',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_epic_id.
  $permissions['edit field_epic_id'] = array(
    'name' => 'edit field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_expected_time_to_complete.
  $permissions['edit field_expected_time_to_complete'] = array(
    'name' => 'edit field_expected_time_to_complete',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_influenza.
  $permissions['edit field_influenza'] = array(
    'name' => 'edit field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_other_please_specify_p1.
  $permissions['edit field_other_please_specify_p1'] = array(
    'name' => 'edit field_other_please_specify_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_other_please_specify_p2.
  $permissions['edit field_other_please_specify_p2'] = array(
    'name' => 'edit field_other_please_specify_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_other_please_specify_p3.
  $permissions['edit field_other_please_specify_p3'] = array(
    'name' => 'edit field_other_please_specify_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_other_please_specify_p4.
  $permissions['edit field_other_please_specify_p4'] = array(
    'name' => 'edit field_other_please_specify_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_pneumo.
  $permissions['edit field_pneumo'] = array(
    'name' => 'edit field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_reporting_period.
  $permissions['edit field_reporting_period'] = array(
    'name' => 'edit field_reporting_period',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_req_assembly_instruc_p1.
  $permissions['edit field_req_assembly_instruc_p1'] = array(
    'name' => 'edit field_req_assembly_instruc_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_req_assembly_instruc_p2.
  $permissions['edit field_req_assembly_instruc_p2'] = array(
    'name' => 'edit field_req_assembly_instruc_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_req_assembly_instruc_p3.
  $permissions['edit field_req_assembly_instruc_p3'] = array(
    'name' => 'edit field_req_assembly_instruc_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_req_assembly_instruc_p4.
  $permissions['edit field_req_assembly_instruc_p4'] = array(
    'name' => 'edit field_req_assembly_instruc_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_responsible_role.
  $permissions['edit field_responsible_role'] = array(
    'name' => 'edit field_responsible_role',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tags.
  $permissions['edit field_tags'] = array(
    'name' => 'edit field_tags',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_task_due_date.
  $permissions['edit field_task_due_date'] = array(
    'name' => 'edit field_task_due_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_task_start_date.
  $permissions['edit field_task_start_date'] = array(
    'name' => 'edit field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_td.
  $permissions['edit field_td'] = array(
    'name' => 'edit field_td',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_tdap.
  $permissions['edit field_tdap'] = array(
    'name' => 'edit field_tdap',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_total.
  $permissions['edit field_total'] = array(
    'name' => 'edit field_total',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_visits.
  $permissions['edit field_visits'] = array(
    'name' => 'edit field_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit group_content_access.
  $permissions['edit group_content_access'] = array(
    'name' => 'edit group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit og_group_ref.
  $permissions['edit og_group_ref'] = array(
    'name' => 'edit og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own announcement content.
  $permissions['edit own announcement content'] = array(
    'name' => 'edit own announcement content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own body.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own book content.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own convenient_vaccination_services content.
  $permissions['edit own convenient_vaccination_services content'] = array(
    'name' => 'edit own convenient_vaccination_services content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own document content.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own enhanced_vaccination_systems content.
  $permissions['edit own enhanced_vaccination_systems content'] = array(
    'name' => 'edit own enhanced_vaccination_systems content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_assembly_instruction.
  $permissions['edit own field_assembly_instruction'] = array(
    'name' => 'edit own field_assembly_instruction',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_assembly_instruction_p2.
  $permissions['edit own field_assembly_instruction_p2'] = array(
    'name' => 'edit own field_assembly_instruction_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_assembly_instruction_p3.
  $permissions['edit own field_assembly_instruction_p3'] = array(
    'name' => 'edit own field_assembly_instruction_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_assembly_instruction_p4.
  $permissions['edit own field_assembly_instruction_p4'] = array(
    'name' => 'edit own field_assembly_instruction_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_date_started.
  $permissions['edit own field_date_started'] = array(
    'name' => 'edit own field_date_started',
    'roles' => array(
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_date_task_completed.
  $permissions['edit own field_date_task_completed'] = array(
    'name' => 'edit own field_date_task_completed',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_epic_id.
  $permissions['edit own field_epic_id'] = array(
    'name' => 'edit own field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_expected_time_to_complete.
  $permissions['edit own field_expected_time_to_complete'] = array(
    'name' => 'edit own field_expected_time_to_complete',
    'roles' => array(
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_influenza.
  $permissions['edit own field_influenza'] = array(
    'name' => 'edit own field_influenza',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_other_please_specify_p1.
  $permissions['edit own field_other_please_specify_p1'] = array(
    'name' => 'edit own field_other_please_specify_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_other_please_specify_p2.
  $permissions['edit own field_other_please_specify_p2'] = array(
    'name' => 'edit own field_other_please_specify_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_other_please_specify_p3.
  $permissions['edit own field_other_please_specify_p3'] = array(
    'name' => 'edit own field_other_please_specify_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_other_please_specify_p4.
  $permissions['edit own field_other_please_specify_p4'] = array(
    'name' => 'edit own field_other_please_specify_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_pneumo.
  $permissions['edit own field_pneumo'] = array(
    'name' => 'edit own field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_reporting_period.
  $permissions['edit own field_reporting_period'] = array(
    'name' => 'edit own field_reporting_period',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_req_assembly_instruc_p1.
  $permissions['edit own field_req_assembly_instruc_p1'] = array(
    'name' => 'edit own field_req_assembly_instruc_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_req_assembly_instruc_p2.
  $permissions['edit own field_req_assembly_instruc_p2'] = array(
    'name' => 'edit own field_req_assembly_instruc_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_req_assembly_instruc_p3.
  $permissions['edit own field_req_assembly_instruc_p3'] = array(
    'name' => 'edit own field_req_assembly_instruc_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_req_assembly_instruc_p4.
  $permissions['edit own field_req_assembly_instruc_p4'] = array(
    'name' => 'edit own field_req_assembly_instruc_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_responsible_role.
  $permissions['edit own field_responsible_role'] = array(
    'name' => 'edit own field_responsible_role',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tags.
  $permissions['edit own field_tags'] = array(
    'name' => 'edit own field_tags',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_task_due_date.
  $permissions['edit own field_task_due_date'] = array(
    'name' => 'edit own field_task_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_task_start_date.
  $permissions['edit own field_task_start_date'] = array(
    'name' => 'edit own field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_td.
  $permissions['edit own field_td'] = array(
    'name' => 'edit own field_td',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_tdap.
  $permissions['edit own field_tdap'] = array(
    'name' => 'edit own field_tdap',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_total.
  $permissions['edit own field_total'] = array(
    'name' => 'edit own field_total',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_visits.
  $permissions['edit own field_visits'] = array(
    'name' => 'edit own field_visits',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own group_content_access.
  $permissions['edit own group_content_access'] = array(
    'name' => 'edit own group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own meeting_agenda content.
  $permissions['edit own meeting_agenda content'] = array(
    'name' => 'edit own meeting_agenda content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own motivation content.
  $permissions['edit own motivation content'] = array(
    'name' => 'edit own motivation content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own nuts_bolts content.
  $permissions['edit own nuts_bolts content'] = array(
    'name' => 'edit own nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own offsite_resource content.
  $permissions['edit own offsite_resource content'] = array(
    'name' => 'edit own offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own og_group_ref.
  $permissions['edit own og_group_ref'] = array(
    'name' => 'edit own og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own other_additions_to_views content.
  $permissions['edit own other_additions_to_views content'] = array(
    'name' => 'edit own other_additions_to_views content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel content.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own patient_notification content.
  $permissions['edit own patient_notification content'] = array(
    'name' => 'edit own patient_notification content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own practice_admin_group content.
  $permissions['edit own practice_admin_group content'] = array(
    'name' => 'edit own practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own practice_group content.
  $permissions['edit own practice_group content'] = array(
    'name' => 'edit own practice_group content',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own required_disclosure content.
  $permissions['edit own required_disclosure content'] = array(
    'name' => 'edit own required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own roadmap_waypoint content.
  $permissions['edit own roadmap_waypoint content'] = array(
    'name' => 'edit own roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own task content.
  $permissions['edit own task content'] = array(
    'name' => 'edit own task content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vaccination_data_from_emr content.
  $permissions['edit own vaccination_data_from_emr content'] = array(
    'name' => 'edit own vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own video content.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view body.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_assembly_instruction.
  $permissions['view field_assembly_instruction'] = array(
    'name' => 'view field_assembly_instruction',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_assembly_instruction_p2.
  $permissions['view field_assembly_instruction_p2'] = array(
    'name' => 'view field_assembly_instruction_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_assembly_instruction_p3.
  $permissions['view field_assembly_instruction_p3'] = array(
    'name' => 'view field_assembly_instruction_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_assembly_instruction_p4.
  $permissions['view field_assembly_instruction_p4'] = array(
    'name' => 'view field_assembly_instruction_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_date_started.
  $permissions['view field_date_started'] = array(
    'name' => 'view field_date_started',
    'roles' => array(
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_date_task_completed.
  $permissions['view field_date_task_completed'] = array(
    'name' => 'view field_date_task_completed',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_epic_id.
  $permissions['view field_epic_id'] = array(
    'name' => 'view field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_expected_time_to_complete.
  $permissions['view field_expected_time_to_complete'] = array(
    'name' => 'view field_expected_time_to_complete',
    'roles' => array(
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_influenza.
  $permissions['view field_influenza'] = array(
    'name' => 'view field_influenza',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_other_please_specify_p1.
  $permissions['view field_other_please_specify_p1'] = array(
    'name' => 'view field_other_please_specify_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_other_please_specify_p2.
  $permissions['view field_other_please_specify_p2'] = array(
    'name' => 'view field_other_please_specify_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_other_please_specify_p3.
  $permissions['view field_other_please_specify_p3'] = array(
    'name' => 'view field_other_please_specify_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_other_please_specify_p4.
  $permissions['view field_other_please_specify_p4'] = array(
    'name' => 'view field_other_please_specify_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_pneumo.
  $permissions['view field_pneumo'] = array(
    'name' => 'view field_pneumo',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_reporting_period.
  $permissions['view field_reporting_period'] = array(
    'name' => 'view field_reporting_period',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_req_assembly_instruc_p1.
  $permissions['view field_req_assembly_instruc_p1'] = array(
    'name' => 'view field_req_assembly_instruc_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_req_assembly_instruc_p2.
  $permissions['view field_req_assembly_instruc_p2'] = array(
    'name' => 'view field_req_assembly_instruc_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_req_assembly_instruc_p3.
  $permissions['view field_req_assembly_instruc_p3'] = array(
    'name' => 'view field_req_assembly_instruc_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_req_assembly_instruc_p4.
  $permissions['view field_req_assembly_instruc_p4'] = array(
    'name' => 'view field_req_assembly_instruc_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_responsible_role.
  $permissions['view field_responsible_role'] = array(
    'name' => 'view field_responsible_role',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tags.
  $permissions['view field_tags'] = array(
    'name' => 'view field_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_task_due_date.
  $permissions['view field_task_due_date'] = array(
    'name' => 'view field_task_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_task_start_date.
  $permissions['view field_task_start_date'] = array(
    'name' => 'view field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_td.
  $permissions['view field_td'] = array(
    'name' => 'view field_td',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_tdap.
  $permissions['view field_tdap'] = array(
    'name' => 'view field_tdap',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_total.
  $permissions['view field_total'] = array(
    'name' => 'view field_total',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_visits.
  $permissions['view field_visits'] = array(
    'name' => 'view field_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view group_content_access.
  $permissions['view group_content_access'] = array(
    'name' => 'view group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view og_group_ref.
  $permissions['view og_group_ref'] = array(
    'name' => 'view og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own body.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_assembly_instruction.
  $permissions['view own field_assembly_instruction'] = array(
    'name' => 'view own field_assembly_instruction',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_assembly_instruction_p2.
  $permissions['view own field_assembly_instruction_p2'] = array(
    'name' => 'view own field_assembly_instruction_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_assembly_instruction_p3.
  $permissions['view own field_assembly_instruction_p3'] = array(
    'name' => 'view own field_assembly_instruction_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_assembly_instruction_p4.
  $permissions['view own field_assembly_instruction_p4'] = array(
    'name' => 'view own field_assembly_instruction_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_date_started.
  $permissions['view own field_date_started'] = array(
    'name' => 'view own field_date_started',
    'roles' => array(
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_date_task_completed.
  $permissions['view own field_date_task_completed'] = array(
    'name' => 'view own field_date_task_completed',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_epic_id.
  $permissions['view own field_epic_id'] = array(
    'name' => 'view own field_epic_id',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_expected_time_to_complete.
  $permissions['view own field_expected_time_to_complete'] = array(
    'name' => 'view own field_expected_time_to_complete',
    'roles' => array(
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_influenza.
  $permissions['view own field_influenza'] = array(
    'name' => 'view own field_influenza',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_other_please_specify_p1.
  $permissions['view own field_other_please_specify_p1'] = array(
    'name' => 'view own field_other_please_specify_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_other_please_specify_p2.
  $permissions['view own field_other_please_specify_p2'] = array(
    'name' => 'view own field_other_please_specify_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_other_please_specify_p3.
  $permissions['view own field_other_please_specify_p3'] = array(
    'name' => 'view own field_other_please_specify_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_other_please_specify_p4.
  $permissions['view own field_other_please_specify_p4'] = array(
    'name' => 'view own field_other_please_specify_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_pneumo.
  $permissions['view own field_pneumo'] = array(
    'name' => 'view own field_pneumo',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_reporting_period.
  $permissions['view own field_reporting_period'] = array(
    'name' => 'view own field_reporting_period',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_req_assembly_instruc_p1.
  $permissions['view own field_req_assembly_instruc_p1'] = array(
    'name' => 'view own field_req_assembly_instruc_p1',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_req_assembly_instruc_p2.
  $permissions['view own field_req_assembly_instruc_p2'] = array(
    'name' => 'view own field_req_assembly_instruc_p2',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_req_assembly_instruc_p3.
  $permissions['view own field_req_assembly_instruc_p3'] = array(
    'name' => 'view own field_req_assembly_instruc_p3',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_req_assembly_instruc_p4.
  $permissions['view own field_req_assembly_instruc_p4'] = array(
    'name' => 'view own field_req_assembly_instruc_p4',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_responsible_role.
  $permissions['view own field_responsible_role'] = array(
    'name' => 'view own field_responsible_role',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tags.
  $permissions['view own field_tags'] = array(
    'name' => 'view own field_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_task_due_date.
  $permissions['view own field_task_due_date'] = array(
    'name' => 'view own field_task_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_task_start_date.
  $permissions['view own field_task_start_date'] = array(
    'name' => 'view own field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_td.
  $permissions['view own field_td'] = array(
    'name' => 'view own field_td',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_tdap.
  $permissions['view own field_tdap'] = array(
    'name' => 'view own field_tdap',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_total.
  $permissions['view own field_total'] = array(
    'name' => 'view own field_total',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_visits.
  $permissions['view own field_visits'] = array(
    'name' => 'view own field_visits',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own group_content_access.
  $permissions['view own group_content_access'] = array(
    'name' => 'view own group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own og_group_ref.
  $permissions['view own og_group_ref'] = array(
    'name' => 'view own og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
