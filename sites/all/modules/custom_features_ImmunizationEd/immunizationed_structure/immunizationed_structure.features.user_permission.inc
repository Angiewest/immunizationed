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

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: create field_epic_id.
  $permissions['create field_epic_id'] = array(
    'name' => 'create field_epic_id',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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
      'authenticated user' => 'authenticated user',
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
      'authenticated user' => 'authenticated user',
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
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: create og_group_ref.
  $permissions['create og_group_ref'] = array(
    'name' => 'create og_group_ref',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create vaccination_data_from_emr content.
  $permissions['create vaccination_data_from_emr content'] = array(
    'name' => 'create vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any vaccination_data_from_emr content.
  $permissions['delete any vaccination_data_from_emr content'] = array(
    'name' => 'delete any vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own vaccination_data_from_emr content.
  $permissions['delete own vaccination_data_from_emr content'] = array(
    'name' => 'delete own vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any vaccination_data_from_emr content.
  $permissions['edit any vaccination_data_from_emr content'] = array(
    'name' => 'edit any vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
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

  // Exported permission: edit field_epic_id.
  $permissions['edit field_epic_id'] = array(
    'name' => 'edit field_epic_id',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_task_due_date.
  $permissions['edit field_task_due_date'] = array(
    'name' => 'edit field_task_due_date',
    'roles' => array(
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

  // Exported permission: edit own field_epic_id.
  $permissions['edit own field_epic_id'] = array(
    'name' => 'edit own field_epic_id',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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

  // Exported permission: edit own field_task_due_date.
  $permissions['edit own field_task_due_date'] = array(
    'name' => 'edit own field_task_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_task_start_date.
  $permissions['edit own field_task_start_date'] = array(
    'name' => 'edit own field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
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

  // Exported permission: edit own vaccination_data_from_emr content.
  $permissions['edit own vaccination_data_from_emr content'] = array(
    'name' => 'edit own vaccination_data_from_emr content',
    'roles' => array(),
    'module' => 'node',
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

  // Exported permission: view field_epic_id.
  $permissions['view field_epic_id'] = array(
    'name' => 'view field_epic_id',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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

  // Exported permission: view own field_epic_id.
  $permissions['view own field_epic_id'] = array(
    'name' => 'view own field_epic_id',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
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
      'authenticated user' => 'authenticated user',
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

  return $permissions;
}
