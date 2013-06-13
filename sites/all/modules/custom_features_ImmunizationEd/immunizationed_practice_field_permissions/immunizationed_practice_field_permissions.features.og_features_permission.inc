<?php
/**
 * @file
 * immunizationed_practice_field_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function immunizationed_practice_field_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:practice_group:update body field'
  $permissions['node:practice_group:update body field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
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

  // Exported og permission: 'node:practice_group:update field_epic_id field'
  $permissions['node:practice_group:update field_epic_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_expected_time_to_complete field'
  $permissions['node:practice_group:update field_expected_time_to_complete field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_first_names field'
  $permissions['node:practice_group:update field_first_names field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_image field'
  $permissions['node:practice_group:update field_image field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_influenza field'
  $permissions['node:practice_group:update field_influenza field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_job_other field'
  $permissions['node:practice_group:update field_job_other field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_last_names field'
  $permissions['node:practice_group:update field_last_names field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:update field_pneumo field'
  $permissions['node:practice_group:update field_pneumo field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_practice_address field'
  $permissions['node:practice_group:update field_practice_address field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
    ),
  );

  // Exported og permission: 'node:practice_group:update field_practice_jobs field'
  $permissions['node:practice_group:update field_practice_jobs field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:update field_report_id field'
  $permissions['node:practice_group:update field_report_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_reporting_period field'
  $permissions['node:practice_group:update field_reporting_period field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:update field_salutations field'
  $permissions['node:practice_group:update field_salutations field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:update field_td field'
  $permissions['node:practice_group:update field_td field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_tdap field'
  $permissions['node:practice_group:update field_tdap field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_total field'
  $permissions['node:practice_group:update field_total field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_visitor field'
  $permissions['node:practice_group:update field_visitor field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:update field_visits field'
  $permissions['node:practice_group:update field_visits field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view field_epic_id field'
  $permissions['node:practice_group:view field_epic_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_expected_time_to_complete field'
  $permissions['node:practice_group:view field_expected_time_to_complete field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_first_names field'
  $permissions['node:practice_group:view field_first_names field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_image field'
  $permissions['node:practice_group:view field_image field'] = array(
    'roles' => array(
      'Administrator member' => 'Administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:practice_group:view field_influenza field'
  $permissions['node:practice_group:view field_influenza field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_job_other field'
  $permissions['node:practice_group:view field_job_other field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_last_names field'
  $permissions['node:practice_group:view field_last_names field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view field_pneumo field'
  $permissions['node:practice_group:view field_pneumo field'] = array(
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

  // Exported og permission: 'node:practice_group:view field_practice_jobs field'
  $permissions['node:practice_group:view field_practice_jobs field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view field_report_id field'
  $permissions['node:practice_group:view field_report_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_reporting_period field'
  $permissions['node:practice_group:view field_reporting_period field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view field_salutations field'
  $permissions['node:practice_group:view field_salutations field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:practice_group:view field_td field'
  $permissions['node:practice_group:view field_td field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_tdap field'
  $permissions['node:practice_group:view field_tdap field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_total field'
  $permissions['node:practice_group:view field_total field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_visitor field'
  $permissions['node:practice_group:view field_visitor field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:practice_group:view field_visits field'
  $permissions['node:practice_group:view field_visits field'] = array(
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
