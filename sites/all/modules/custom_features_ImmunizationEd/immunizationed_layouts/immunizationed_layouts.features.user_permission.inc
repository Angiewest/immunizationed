<?php
/**
 * @file
 * immunizationed_layouts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_layouts_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'block',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panel-nodes.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node announcement defaults.
  $permissions['administer panelizer node announcement defaults'] = array(
    'name' => 'administer panelizer node announcement defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node article content.
  $permissions['administer panelizer node article content'] = array(
    'name' => 'administer panelizer node article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node article context.
  $permissions['administer panelizer node article context'] = array(
    'name' => 'administer panelizer node article context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node article defaults.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node article layout.
  $permissions['administer panelizer node article layout'] = array(
    'name' => 'administer panelizer node article layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node article overview.
  $permissions['administer panelizer node article overview'] = array(
    'name' => 'administer panelizer node article overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node article settings.
  $permissions['administer panelizer node article settings'] = array(
    'name' => 'administer panelizer node article settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node book content.
  $permissions['administer panelizer node book content'] = array(
    'name' => 'administer panelizer node book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node book context.
  $permissions['administer panelizer node book context'] = array(
    'name' => 'administer panelizer node book context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node book defaults.
  $permissions['administer panelizer node book defaults'] = array(
    'name' => 'administer panelizer node book defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node book layout.
  $permissions['administer panelizer node book layout'] = array(
    'name' => 'administer panelizer node book layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node book overview.
  $permissions['administer panelizer node book overview'] = array(
    'name' => 'administer panelizer node book overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node book settings.
  $permissions['administer panelizer node book settings'] = array(
    'name' => 'administer panelizer node book settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node convenient_vaccination_services defaults.
  $permissions['administer panelizer node convenient_vaccination_services defaults'] = array(
    'name' => 'administer panelizer node convenient_vaccination_services defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node document content.
  $permissions['administer panelizer node document content'] = array(
    'name' => 'administer panelizer node document content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node document context.
  $permissions['administer panelizer node document context'] = array(
    'name' => 'administer panelizer node document context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node document defaults.
  $permissions['administer panelizer node document defaults'] = array(
    'name' => 'administer panelizer node document defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node document layout.
  $permissions['administer panelizer node document layout'] = array(
    'name' => 'administer panelizer node document layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node document overview.
  $permissions['administer panelizer node document overview'] = array(
    'name' => 'administer panelizer node document overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node document settings.
  $permissions['administer panelizer node document settings'] = array(
    'name' => 'administer panelizer node document settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node nuts_bolts content.
  $permissions['administer panelizer node nuts_bolts content'] = array(
    'name' => 'administer panelizer node nuts_bolts content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node nuts_bolts context.
  $permissions['administer panelizer node nuts_bolts context'] = array(
    'name' => 'administer panelizer node nuts_bolts context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node nuts_bolts defaults.
  $permissions['administer panelizer node nuts_bolts defaults'] = array(
    'name' => 'administer panelizer node nuts_bolts defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node nuts_bolts layout.
  $permissions['administer panelizer node nuts_bolts layout'] = array(
    'name' => 'administer panelizer node nuts_bolts layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node nuts_bolts overview.
  $permissions['administer panelizer node nuts_bolts overview'] = array(
    'name' => 'administer panelizer node nuts_bolts overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node nuts_bolts settings.
  $permissions['administer panelizer node nuts_bolts settings'] = array(
    'name' => 'administer panelizer node nuts_bolts settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node offsite_resource content.
  $permissions['administer panelizer node offsite_resource content'] = array(
    'name' => 'administer panelizer node offsite_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node offsite_resource context.
  $permissions['administer panelizer node offsite_resource context'] = array(
    'name' => 'administer panelizer node offsite_resource context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node offsite_resource defaults.
  $permissions['administer panelizer node offsite_resource defaults'] = array(
    'name' => 'administer panelizer node offsite_resource defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node offsite_resource layout.
  $permissions['administer panelizer node offsite_resource layout'] = array(
    'name' => 'administer panelizer node offsite_resource layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node offsite_resource overview.
  $permissions['administer panelizer node offsite_resource overview'] = array(
    'name' => 'administer panelizer node offsite_resource overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node offsite_resource settings.
  $permissions['administer panelizer node offsite_resource settings'] = array(
    'name' => 'administer panelizer node offsite_resource settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node other_additions_to_views defaults.
  $permissions['administer panelizer node other_additions_to_views defaults'] = array(
    'name' => 'administer panelizer node other_additions_to_views defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page content.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page context.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page defaults.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page layout.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page overview.
  $permissions['administer panelizer node page overview'] = array(
    'name' => 'administer panelizer node page overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node page settings.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node patient_notification defaults.
  $permissions['administer panelizer node patient_notification defaults'] = array(
    'name' => 'administer panelizer node patient_notification defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_admin_group content.
  $permissions['administer panelizer node practice_admin_group content'] = array(
    'name' => 'administer panelizer node practice_admin_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_admin_group context.
  $permissions['administer panelizer node practice_admin_group context'] = array(
    'name' => 'administer panelizer node practice_admin_group context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_admin_group defaults.
  $permissions['administer panelizer node practice_admin_group defaults'] = array(
    'name' => 'administer panelizer node practice_admin_group defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_admin_group layout.
  $permissions['administer panelizer node practice_admin_group layout'] = array(
    'name' => 'administer panelizer node practice_admin_group layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_admin_group overview.
  $permissions['administer panelizer node practice_admin_group overview'] = array(
    'name' => 'administer panelizer node practice_admin_group overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_admin_group settings.
  $permissions['administer panelizer node practice_admin_group settings'] = array(
    'name' => 'administer panelizer node practice_admin_group settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_group content.
  $permissions['administer panelizer node practice_group content'] = array(
    'name' => 'administer panelizer node practice_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_group context.
  $permissions['administer panelizer node practice_group context'] = array(
    'name' => 'administer panelizer node practice_group context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_group defaults.
  $permissions['administer panelizer node practice_group defaults'] = array(
    'name' => 'administer panelizer node practice_group defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_group layout.
  $permissions['administer panelizer node practice_group layout'] = array(
    'name' => 'administer panelizer node practice_group layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_group overview.
  $permissions['administer panelizer node practice_group overview'] = array(
    'name' => 'administer panelizer node practice_group overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node practice_group settings.
  $permissions['administer panelizer node practice_group settings'] = array(
    'name' => 'administer panelizer node practice_group settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node required_disclosure defaults.
  $permissions['administer panelizer node required_disclosure defaults'] = array(
    'name' => 'administer panelizer node required_disclosure defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node roadmap_waypoint content.
  $permissions['administer panelizer node roadmap_waypoint content'] = array(
    'name' => 'administer panelizer node roadmap_waypoint content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node roadmap_waypoint context.
  $permissions['administer panelizer node roadmap_waypoint context'] = array(
    'name' => 'administer panelizer node roadmap_waypoint context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node roadmap_waypoint defaults.
  $permissions['administer panelizer node roadmap_waypoint defaults'] = array(
    'name' => 'administer panelizer node roadmap_waypoint defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node roadmap_waypoint layout.
  $permissions['administer panelizer node roadmap_waypoint layout'] = array(
    'name' => 'administer panelizer node roadmap_waypoint layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node roadmap_waypoint overview.
  $permissions['administer panelizer node roadmap_waypoint overview'] = array(
    'name' => 'administer panelizer node roadmap_waypoint overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node roadmap_waypoint settings.
  $permissions['administer panelizer node roadmap_waypoint settings'] = array(
    'name' => 'administer panelizer node roadmap_waypoint settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node task content.
  $permissions['administer panelizer node task content'] = array(
    'name' => 'administer panelizer node task content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node task context.
  $permissions['administer panelizer node task context'] = array(
    'name' => 'administer panelizer node task context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node task defaults.
  $permissions['administer panelizer node task defaults'] = array(
    'name' => 'administer panelizer node task defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node task layout.
  $permissions['administer panelizer node task layout'] = array(
    'name' => 'administer panelizer node task layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node task overview.
  $permissions['administer panelizer node task overview'] = array(
    'name' => 'administer panelizer node task overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node task settings.
  $permissions['administer panelizer node task settings'] = array(
    'name' => 'administer panelizer node task settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node video content.
  $permissions['administer panelizer node video content'] = array(
    'name' => 'administer panelizer node video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node video context.
  $permissions['administer panelizer node video context'] = array(
    'name' => 'administer panelizer node video context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node video defaults.
  $permissions['administer panelizer node video defaults'] = array(
    'name' => 'administer panelizer node video defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node video layout.
  $permissions['administer panelizer node video layout'] = array(
    'name' => 'administer panelizer node video layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node video overview.
  $permissions['administer panelizer node video overview'] = array(
    'name' => 'administer panelizer node video overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node video settings.
  $permissions['administer panelizer node video settings'] = array(
    'name' => 'administer panelizer node video settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node webform defaults.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term certification_entities defaults.
  $permissions['administer panelizer taxonomy_term certification_entities defaults'] = array(
    'name' => 'administer panelizer taxonomy_term certification_entities defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term form_relationships defaults.
  $permissions['administer panelizer taxonomy_term form_relationships defaults'] = array(
    'name' => 'administer panelizer taxonomy_term form_relationships defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term practice_jobs defaults.
  $permissions['administer panelizer taxonomy_term practice_jobs defaults'] = array(
    'name' => 'administer panelizer taxonomy_term practice_jobs defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term special_practice_role defaults.
  $permissions['administer panelizer taxonomy_term special_practice_role defaults'] = array(
    'name' => 'administer panelizer taxonomy_term special_practice_role defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term tags defaults.
  $permissions['administer panelizer taxonomy_term tags defaults'] = array(
    'name' => 'administer panelizer taxonomy_term tags defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: create panel-nodes.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete any panel-nodes.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete own panel-nodes.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit any panel-nodes.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own panel-nodes.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: execute panelizer_set_status_action.
  $permissions['execute panelizer_set_status_action'] = array(
    'name' => 'execute panelizer_set_status_action',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  return $permissions;
}
