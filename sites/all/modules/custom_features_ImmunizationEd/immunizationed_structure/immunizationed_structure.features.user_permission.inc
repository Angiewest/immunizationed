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

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'create announcement content'.
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

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create body'.
  $permissions['create body'] = array(
    'name' => 'create body',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_applicable_roles'.
  $permissions['create field_applicable_roles'] = array(
    'name' => 'create field_applicable_roles',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_audience'.
  $permissions['create field_audience'] = array(
    'name' => 'create field_audience',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_certification_entity'.
  $permissions['create field_certification_entity'] = array(
    'name' => 'create field_certification_entity',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_date_started'.
  $permissions['create field_date_started'] = array(
    'name' => 'create field_date_started',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_date_task_completed'.
  $permissions['create field_date_task_completed'] = array(
    'name' => 'create field_date_task_completed',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_document'.
  $permissions['create field_document'] = array(
    'name' => 'create field_document',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_educational_objectives'.
  $permissions['create field_educational_objectives'] = array(
    'name' => 'create field_educational_objectives',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_expected_time_to_complete'.
  $permissions['create field_expected_time_to_complete'] = array(
    'name' => 'create field_expected_time_to_complete',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_internal_video_url'.
  $permissions['create field_internal_video_url'] = array(
    'name' => 'create field_internal_video_url',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_reference_to_onsite_video'.
  $permissions['create field_reference_to_onsite_video'] = array(
    'name' => 'create field_reference_to_onsite_video',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_resource_links'.
  $permissions['create field_resource_links'] = array(
    'name' => 'create field_resource_links',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tags'.
  $permissions['create field_tags'] = array(
    'name' => 'create field_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_task_due_date'.
  $permissions['create field_task_due_date'] = array(
    'name' => 'create field_task_due_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_task_start_date'.
  $permissions['create field_task_start_date'] = array(
    'name' => 'create field_task_start_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group_content_access'.
  $permissions['create group_content_access'] = array(
    'name' => 'create group_content_access',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create nuts_bolts content'.
  $permissions['create nuts_bolts content'] = array(
    'name' => 'create nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create offsite_resource content'.
  $permissions['create offsite_resource content'] = array(
    'name' => 'create offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create og_group_ref'.
  $permissions['create og_group_ref'] = array(
    'name' => 'create og_group_ref',
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

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create practice_group content'.
  $permissions['create practice_group content'] = array(
    'name' => 'create practice_group content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create required_disclosure content'.
  $permissions['create required_disclosure content'] = array(
    'name' => 'create required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create roadmap_waypoint content'.
  $permissions['create roadmap_waypoint content'] = array(
    'name' => 'create roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create task content'.
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

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any announcement content'.
  $permissions['delete any announcement content'] = array(
    'name' => 'delete any announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document content'.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nuts_bolts content'.
  $permissions['delete any nuts_bolts content'] = array(
    'name' => 'delete any nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any offsite_resource content'.
  $permissions['delete any offsite_resource content'] = array(
    'name' => 'delete any offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any required_disclosure content'.
  $permissions['delete any required_disclosure content'] = array(
    'name' => 'delete any required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any roadmap_waypoint content'.
  $permissions['delete any roadmap_waypoint content'] = array(
    'name' => 'delete any roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any task content'.
  $permissions['delete any task content'] = array(
    'name' => 'delete any task content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own announcement content'.
  $permissions['delete own announcement content'] = array(
    'name' => 'delete own announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document content'.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nuts_bolts content'.
  $permissions['delete own nuts_bolts content'] = array(
    'name' => 'delete own nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own offsite_resource content'.
  $permissions['delete own offsite_resource content'] = array(
    'name' => 'delete own offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own required_disclosure content'.
  $permissions['delete own required_disclosure content'] = array(
    'name' => 'delete own required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own roadmap_waypoint content'.
  $permissions['delete own roadmap_waypoint content'] = array(
    'name' => 'delete own roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own task content'.
  $permissions['delete own task content'] = array(
    'name' => 'delete own task content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any announcement content'.
  $permissions['edit any announcement content'] = array(
    'name' => 'edit any announcement content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nuts_bolts content'.
  $permissions['edit any nuts_bolts content'] = array(
    'name' => 'edit any nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any offsite_resource content'.
  $permissions['edit any offsite_resource content'] = array(
    'name' => 'edit any offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any required_disclosure content'.
  $permissions['edit any required_disclosure content'] = array(
    'name' => 'edit any required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any roadmap_waypoint content'.
  $permissions['edit any roadmap_waypoint content'] = array(
    'name' => 'edit any roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any task content'.
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

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit body'.
  $permissions['edit body'] = array(
    'name' => 'edit body',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_applicable_roles'.
  $permissions['edit field_applicable_roles'] = array(
    'name' => 'edit field_applicable_roles',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_audience'.
  $permissions['edit field_audience'] = array(
    'name' => 'edit field_audience',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_certification_entity'.
  $permissions['edit field_certification_entity'] = array(
    'name' => 'edit field_certification_entity',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_date_started'.
  $permissions['edit field_date_started'] = array(
    'name' => 'edit field_date_started',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_date_task_completed'.
  $permissions['edit field_date_task_completed'] = array(
    'name' => 'edit field_date_task_completed',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_document'.
  $permissions['edit field_document'] = array(
    'name' => 'edit field_document',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_educational_objectives'.
  $permissions['edit field_educational_objectives'] = array(
    'name' => 'edit field_educational_objectives',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_expected_time_to_complete'.
  $permissions['edit field_expected_time_to_complete'] = array(
    'name' => 'edit field_expected_time_to_complete',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_internal_video_url'.
  $permissions['edit field_internal_video_url'] = array(
    'name' => 'edit field_internal_video_url',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reference_to_onsite_video'.
  $permissions['edit field_reference_to_onsite_video'] = array(
    'name' => 'edit field_reference_to_onsite_video',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_resource_links'.
  $permissions['edit field_resource_links'] = array(
    'name' => 'edit field_resource_links',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tags'.
  $permissions['edit field_tags'] = array(
    'name' => 'edit field_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_task_due_date'.
  $permissions['edit field_task_due_date'] = array(
    'name' => 'edit field_task_due_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_task_start_date'.
  $permissions['edit field_task_start_date'] = array(
    'name' => 'edit field_task_start_date',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit group_content_access'.
  $permissions['edit group_content_access'] = array(
    'name' => 'edit group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit og_group_ref'.
  $permissions['edit og_group_ref'] = array(
    'name' => 'edit og_group_ref',
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

  // Exported permission: 'edit own announcement content'.
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

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own body'.
  $permissions['edit own body'] = array(
    'name' => 'edit own body',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_applicable_roles'.
  $permissions['edit own field_applicable_roles'] = array(
    'name' => 'edit own field_applicable_roles',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_audience'.
  $permissions['edit own field_audience'] = array(
    'name' => 'edit own field_audience',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_certification_entity'.
  $permissions['edit own field_certification_entity'] = array(
    'name' => 'edit own field_certification_entity',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_date_started'.
  $permissions['edit own field_date_started'] = array(
    'name' => 'edit own field_date_started',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_date_task_completed'.
  $permissions['edit own field_date_task_completed'] = array(
    'name' => 'edit own field_date_task_completed',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_document'.
  $permissions['edit own field_document'] = array(
    'name' => 'edit own field_document',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_educational_objectives'.
  $permissions['edit own field_educational_objectives'] = array(
    'name' => 'edit own field_educational_objectives',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_expected_time_to_complete'.
  $permissions['edit own field_expected_time_to_complete'] = array(
    'name' => 'edit own field_expected_time_to_complete',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_internal_video_url'.
  $permissions['edit own field_internal_video_url'] = array(
    'name' => 'edit own field_internal_video_url',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reference_to_onsite_video'.
  $permissions['edit own field_reference_to_onsite_video'] = array(
    'name' => 'edit own field_reference_to_onsite_video',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_resource_links'.
  $permissions['edit own field_resource_links'] = array(
    'name' => 'edit own field_resource_links',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tags'.
  $permissions['edit own field_tags'] = array(
    'name' => 'edit own field_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_task_due_date'.
  $permissions['edit own field_task_due_date'] = array(
    'name' => 'edit own field_task_due_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_task_start_date'.
  $permissions['edit own field_task_start_date'] = array(
    'name' => 'edit own field_task_start_date',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group_content_access'.
  $permissions['edit own group_content_access'] = array(
    'name' => 'edit own group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own nuts_bolts content'.
  $permissions['edit own nuts_bolts content'] = array(
    'name' => 'edit own nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own offsite_resource content'.
  $permissions['edit own offsite_resource content'] = array(
    'name' => 'edit own offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own og_group_ref'.
  $permissions['edit own og_group_ref'] = array(
    'name' => 'edit own og_group_ref',
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

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own required_disclosure content'.
  $permissions['edit own required_disclosure content'] = array(
    'name' => 'edit own required_disclosure content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own roadmap_waypoint content'.
  $permissions['edit own roadmap_waypoint content'] = array(
    'name' => 'edit own roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own task content'.
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

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view body'.
  $permissions['view body'] = array(
    'name' => 'view body',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_applicable_roles'.
  $permissions['view field_applicable_roles'] = array(
    'name' => 'view field_applicable_roles',
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

  // Exported permission: 'view field_audience'.
  $permissions['view field_audience'] = array(
    'name' => 'view field_audience',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_certification_entity'.
  $permissions['view field_certification_entity'] = array(
    'name' => 'view field_certification_entity',
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

  // Exported permission: 'view field_date_started'.
  $permissions['view field_date_started'] = array(
    'name' => 'view field_date_started',
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

  // Exported permission: 'view field_date_task_completed'.
  $permissions['view field_date_task_completed'] = array(
    'name' => 'view field_date_task_completed',
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

  // Exported permission: 'view field_document'.
  $permissions['view field_document'] = array(
    'name' => 'view field_document',
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

  // Exported permission: 'view field_educational_objectives'.
  $permissions['view field_educational_objectives'] = array(
    'name' => 'view field_educational_objectives',
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

  // Exported permission: 'view field_expected_time_to_complete'.
  $permissions['view field_expected_time_to_complete'] = array(
    'name' => 'view field_expected_time_to_complete',
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

  // Exported permission: 'view field_internal_video_url'.
  $permissions['view field_internal_video_url'] = array(
    'name' => 'view field_internal_video_url',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_reference_to_onsite_video'.
  $permissions['view field_reference_to_onsite_video'] = array(
    'name' => 'view field_reference_to_onsite_video',
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

  // Exported permission: 'view field_resource_links'.
  $permissions['view field_resource_links'] = array(
    'name' => 'view field_resource_links',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tags'.
  $permissions['view field_tags'] = array(
    'name' => 'view field_tags',
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

  // Exported permission: 'view field_task_due_date'.
  $permissions['view field_task_due_date'] = array(
    'name' => 'view field_task_due_date',
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

  // Exported permission: 'view field_task_start_date'.
  $permissions['view field_task_start_date'] = array(
    'name' => 'view field_task_start_date',
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

  // Exported permission: 'view group_content_access'.
  $permissions['view group_content_access'] = array(
    'name' => 'view group_content_access',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view og_group_ref'.
  $permissions['view og_group_ref'] = array(
    'name' => 'view og_group_ref',
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

  // Exported permission: 'view own body'.
  $permissions['view own body'] = array(
    'name' => 'view own body',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_applicable_roles'.
  $permissions['view own field_applicable_roles'] = array(
    'name' => 'view own field_applicable_roles',
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

  // Exported permission: 'view own field_audience'.
  $permissions['view own field_audience'] = array(
    'name' => 'view own field_audience',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_certification_entity'.
  $permissions['view own field_certification_entity'] = array(
    'name' => 'view own field_certification_entity',
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

  // Exported permission: 'view own field_date_started'.
  $permissions['view own field_date_started'] = array(
    'name' => 'view own field_date_started',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_date_task_completed'.
  $permissions['view own field_date_task_completed'] = array(
    'name' => 'view own field_date_task_completed',
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

  // Exported permission: 'view own field_document'.
  $permissions['view own field_document'] = array(
    'name' => 'view own field_document',
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

  // Exported permission: 'view own field_educational_objectives'.
  $permissions['view own field_educational_objectives'] = array(
    'name' => 'view own field_educational_objectives',
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

  // Exported permission: 'view own field_expected_time_to_complete'.
  $permissions['view own field_expected_time_to_complete'] = array(
    'name' => 'view own field_expected_time_to_complete',
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

  // Exported permission: 'view own field_internal_video_url'.
  $permissions['view own field_internal_video_url'] = array(
    'name' => 'view own field_internal_video_url',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reference_to_onsite_video'.
  $permissions['view own field_reference_to_onsite_video'] = array(
    'name' => 'view own field_reference_to_onsite_video',
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

  // Exported permission: 'view own field_resource_links'.
  $permissions['view own field_resource_links'] = array(
    'name' => 'view own field_resource_links',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tags'.
  $permissions['view own field_tags'] = array(
    'name' => 'view own field_tags',
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

  // Exported permission: 'view own field_task_due_date'.
  $permissions['view own field_task_due_date'] = array(
    'name' => 'view own field_task_due_date',
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

  // Exported permission: 'view own field_task_start_date'.
  $permissions['view own field_task_start_date'] = array(
    'name' => 'view own field_task_start_date',
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

  // Exported permission: 'view own group_content_access'.
  $permissions['view own group_content_access'] = array(
    'name' => 'view own group_content_access',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own og_group_ref'.
  $permissions['view own og_group_ref'] = array(
    'name' => 'view own og_group_ref',
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

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
