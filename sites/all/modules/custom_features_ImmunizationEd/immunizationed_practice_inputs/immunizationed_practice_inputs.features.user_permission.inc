<?php
/**
 * @file
 * immunizationed_practice_inputs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_practice_inputs_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node enhanced_vaccination_systems defaults.
  $permissions['administer panelizer node enhanced_vaccination_systems defaults'] = array(
    'name' => 'administer panelizer node enhanced_vaccination_systems defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node meeting_agenda defaults.
  $permissions['administer panelizer node meeting_agenda defaults'] = array(
    'name' => 'administer panelizer node meeting_agenda defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node motivation defaults.
  $permissions['administer panelizer node motivation defaults'] = array(
    'name' => 'administer panelizer node motivation defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term convenient_vaccination_services_other defaults.
  $permissions['administer panelizer taxonomy_term convenient_vaccination_services_other defaults'] = array(
    'name' => 'administer panelizer taxonomy_term convenient_vaccination_services_other defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term convenient_vaccination_services_strategies defaults.
  $permissions['administer panelizer taxonomy_term convenient_vaccination_services_strategies defaults'] = array(
    'name' => 'administer panelizer taxonomy_term convenient_vaccination_services_strategies defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term enhanced_office_vaccination_systems_strategies defaults.
  $permissions['administer panelizer taxonomy_term enhanced_office_vaccination_systems_strategies defaults'] = array(
    'name' => 'administer panelizer taxonomy_term enhanced_office_vaccination_systems_strategies defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term enhanced_vaccination_systems_other defaults.
  $permissions['administer panelizer taxonomy_term enhanced_vaccination_systems_other defaults'] = array(
    'name' => 'administer panelizer taxonomy_term enhanced_vaccination_systems_other defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term motivation defaults.
  $permissions['administer panelizer taxonomy_term motivation defaults'] = array(
    'name' => 'administer panelizer taxonomy_term motivation defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term motivation_strategies_ defaults.
  $permissions['administer panelizer taxonomy_term motivation_strategies_ defaults'] = array(
    'name' => 'administer panelizer taxonomy_term motivation_strategies_ defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term patient_notification_other defaults.
  $permissions['administer panelizer taxonomy_term patient_notification_other defaults'] = array(
    'name' => 'administer panelizer taxonomy_term patient_notification_other defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term patient_notification_strategies defaults.
  $permissions['administer panelizer taxonomy_term patient_notification_strategies defaults'] = array(
    'name' => 'administer panelizer taxonomy_term patient_notification_strategies defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
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
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_assembly_instruction_p2.
  $permissions['create field_assembly_instruction_p2'] = array(
    'name' => 'create field_assembly_instruction_p2',
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

  // Exported permission: create field_assembly_instruction_p3.
  $permissions['create field_assembly_instruction_p3'] = array(
    'name' => 'create field_assembly_instruction_p3',
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

  // Exported permission: create field_assembly_instruction_p4.
  $permissions['create field_assembly_instruction_p4'] = array(
    'name' => 'create field_assembly_instruction_p4',
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

  // Exported permission: create field_date.
  $permissions['create field_date'] = array(
    'name' => 'create field_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_document.
  $permissions['create field_document'] = array(
    'name' => 'create field_document',
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

  // Exported permission: create field_next_meeting_date.
  $permissions['create field_next_meeting_date'] = array(
    'name' => 'create field_next_meeting_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_notes.
  $permissions['create field_notes'] = array(
    'name' => 'create field_notes',
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
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_other_please_specify_p2.
  $permissions['create field_other_please_specify_p2'] = array(
    'name' => 'create field_other_please_specify_p2',
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

  // Exported permission: create field_other_please_specify_p3.
  $permissions['create field_other_please_specify_p3'] = array(
    'name' => 'create field_other_please_specify_p3',
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

  // Exported permission: create field_other_please_specify_p4.
  $permissions['create field_other_please_specify_p4'] = array(
    'name' => 'create field_other_please_specify_p4',
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

  // Exported permission: create other_additions_to_views content.
  $permissions['create other_additions_to_views content'] = array(
    'name' => 'create other_additions_to_views content',
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

  // Exported permission: delete any convenient_vaccination_services content.
  $permissions['delete any convenient_vaccination_services content'] = array(
    'name' => 'delete any convenient_vaccination_services content',
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
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
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

  // Exported permission: delete any other_additions_to_views content.
  $permissions['delete any other_additions_to_views content'] = array(
    'name' => 'delete any other_additions_to_views content',
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
      'Co-I admin' => 'Co-I admin',
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

  // Exported permission: delete own other_additions_to_views content.
  $permissions['delete own other_additions_to_views content'] = array(
    'name' => 'delete own other_additions_to_views content',
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

  // Exported permission: delete terms in 10.
  $permissions['delete terms in 10'] = array(
    'name' => 'delete terms in 10',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 12.
  $permissions['delete terms in 12'] = array(
    'name' => 'delete terms in 12',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(),
    'module' => 'taxonomy',
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
      'Co-I admin' => 'Co-I admin',
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

  // Exported permission: edit any other_additions_to_views content.
  $permissions['edit any other_additions_to_views content'] = array(
    'name' => 'edit any other_additions_to_views content',
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

  // Exported permission: edit field_assembly_instruction.
  $permissions['edit field_assembly_instruction'] = array(
    'name' => 'edit field_assembly_instruction',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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

  // Exported permission: edit field_date.
  $permissions['edit field_date'] = array(
    'name' => 'edit field_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_document.
  $permissions['edit field_document'] = array(
    'name' => 'edit field_document',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_next_meeting_date.
  $permissions['edit field_next_meeting_date'] = array(
    'name' => 'edit field_next_meeting_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_notes.
  $permissions['edit field_notes'] = array(
    'name' => 'edit field_notes',
    'roles' => array(
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

  // Exported permission: edit own field_date.
  $permissions['edit own field_date'] = array(
    'name' => 'edit own field_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_document.
  $permissions['edit own field_document'] = array(
    'name' => 'edit own field_document',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_next_meeting_date.
  $permissions['edit own field_next_meeting_date'] = array(
    'name' => 'edit own field_next_meeting_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_notes.
  $permissions['edit own field_notes'] = array(
    'name' => 'edit own field_notes',
    'roles' => array(
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

  // Exported permission: edit own meeting_agenda content.
  $permissions['edit own meeting_agenda content'] = array(
    'name' => 'edit own meeting_agenda content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
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

  // Exported permission: edit own other_additions_to_views content.
  $permissions['edit own other_additions_to_views content'] = array(
    'name' => 'edit own other_additions_to_views content',
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

  // Exported permission: edit terms in 10.
  $permissions['edit terms in 10'] = array(
    'name' => 'edit terms in 10',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 12.
  $permissions['edit terms in 12'] = array(
    'name' => 'edit terms in 12',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: view field_assembly_instruction.
  $permissions['view field_assembly_instruction'] = array(
    'name' => 'view field_assembly_instruction',
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

  // Exported permission: view field_assembly_instruction_p2.
  $permissions['view field_assembly_instruction_p2'] = array(
    'name' => 'view field_assembly_instruction_p2',
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

  // Exported permission: view field_assembly_instruction_p3.
  $permissions['view field_assembly_instruction_p3'] = array(
    'name' => 'view field_assembly_instruction_p3',
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

  // Exported permission: view field_assembly_instruction_p4.
  $permissions['view field_assembly_instruction_p4'] = array(
    'name' => 'view field_assembly_instruction_p4',
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

  // Exported permission: view field_date.
  $permissions['view field_date'] = array(
    'name' => 'view field_date',
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

  // Exported permission: view field_document.
  $permissions['view field_document'] = array(
    'name' => 'view field_document',
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

  // Exported permission: view field_next_meeting_date.
  $permissions['view field_next_meeting_date'] = array(
    'name' => 'view field_next_meeting_date',
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

  // Exported permission: view field_notes.
  $permissions['view field_notes'] = array(
    'name' => 'view field_notes',
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

  // Exported permission: view field_other_please_specify_p1.
  $permissions['view field_other_please_specify_p1'] = array(
    'name' => 'view field_other_please_specify_p1',
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

  // Exported permission: view field_other_please_specify_p2.
  $permissions['view field_other_please_specify_p2'] = array(
    'name' => 'view field_other_please_specify_p2',
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

  // Exported permission: view field_other_please_specify_p3.
  $permissions['view field_other_please_specify_p3'] = array(
    'name' => 'view field_other_please_specify_p3',
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

  // Exported permission: view field_other_please_specify_p4.
  $permissions['view field_other_please_specify_p4'] = array(
    'name' => 'view field_other_please_specify_p4',
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

  // Exported permission: view field_req_assembly_instruc_p1.
  $permissions['view field_req_assembly_instruc_p1'] = array(
    'name' => 'view field_req_assembly_instruc_p1',
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

  // Exported permission: view field_req_assembly_instruc_p2.
  $permissions['view field_req_assembly_instruc_p2'] = array(
    'name' => 'view field_req_assembly_instruc_p2',
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

  // Exported permission: view field_req_assembly_instruc_p3.
  $permissions['view field_req_assembly_instruc_p3'] = array(
    'name' => 'view field_req_assembly_instruc_p3',
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

  // Exported permission: view field_req_assembly_instruc_p4.
  $permissions['view field_req_assembly_instruc_p4'] = array(
    'name' => 'view field_req_assembly_instruc_p4',
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

  // Exported permission: view own field_assembly_instruction.
  $permissions['view own field_assembly_instruction'] = array(
    'name' => 'view own field_assembly_instruction',
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

  // Exported permission: view own field_assembly_instruction_p2.
  $permissions['view own field_assembly_instruction_p2'] = array(
    'name' => 'view own field_assembly_instruction_p2',
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

  // Exported permission: view own field_assembly_instruction_p3.
  $permissions['view own field_assembly_instruction_p3'] = array(
    'name' => 'view own field_assembly_instruction_p3',
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

  // Exported permission: view own field_assembly_instruction_p4.
  $permissions['view own field_assembly_instruction_p4'] = array(
    'name' => 'view own field_assembly_instruction_p4',
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

  // Exported permission: view own field_date.
  $permissions['view own field_date'] = array(
    'name' => 'view own field_date',
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

  // Exported permission: view own field_document.
  $permissions['view own field_document'] = array(
    'name' => 'view own field_document',
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

  // Exported permission: view own field_next_meeting_date.
  $permissions['view own field_next_meeting_date'] = array(
    'name' => 'view own field_next_meeting_date',
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

  // Exported permission: view own field_notes.
  $permissions['view own field_notes'] = array(
    'name' => 'view own field_notes',
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

  // Exported permission: view own field_other_please_specify_p1.
  $permissions['view own field_other_please_specify_p1'] = array(
    'name' => 'view own field_other_please_specify_p1',
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

  // Exported permission: view own field_other_please_specify_p2.
  $permissions['view own field_other_please_specify_p2'] = array(
    'name' => 'view own field_other_please_specify_p2',
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

  // Exported permission: view own field_other_please_specify_p3.
  $permissions['view own field_other_please_specify_p3'] = array(
    'name' => 'view own field_other_please_specify_p3',
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

  // Exported permission: view own field_other_please_specify_p4.
  $permissions['view own field_other_please_specify_p4'] = array(
    'name' => 'view own field_other_please_specify_p4',
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
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_req_assembly_instruc_p3.
  $permissions['view own field_req_assembly_instruc_p3'] = array(
    'name' => 'view own field_req_assembly_instruc_p3',
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

  // Exported permission: view own field_req_assembly_instruc_p4.
  $permissions['view own field_req_assembly_instruc_p4'] = array(
    'name' => 'view own field_req_assembly_instruc_p4',
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

  return $permissions;
}
