<?php
/**
 * @file
 * immunizationed_feeds.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_feeds_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear assembly_instructions_date_changed feeds.
  $permissions['clear assembly_instructions_date_changed feeds'] = array(
    'name' => 'clear assembly_instructions_date_changed feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear assembly_step_date_changed feeds.
  $permissions['clear assembly_step_date_changed feeds'] = array(
    'name' => 'clear assembly_step_date_changed feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear emr_importer feeds.
  $permissions['clear emr_importer feeds'] = array(
    'name' => 'clear emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear user_import_form feeds.
  $permissions['clear user_import_form feeds'] = array(
    'name' => 'clear user_import_form feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import assembly_instructions_date_changed feeds.
  $permissions['import assembly_instructions_date_changed feeds'] = array(
    'name' => 'import assembly_instructions_date_changed feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import assembly_step_date_changed feeds.
  $permissions['import assembly_step_date_changed feeds'] = array(
    'name' => 'import assembly_step_date_changed feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import emr_importer feeds.
  $permissions['import emr_importer feeds'] = array(
    'name' => 'import emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import user_import_form feeds.
  $permissions['import user_import_form feeds'] = array(
    'name' => 'import user_import_form feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock assembly_instructions_date_changed feeds.
  $permissions['unlock assembly_instructions_date_changed feeds'] = array(
    'name' => 'unlock assembly_instructions_date_changed feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock assembly_step_date_changed feeds.
  $permissions['unlock assembly_step_date_changed feeds'] = array(
    'name' => 'unlock assembly_step_date_changed feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock emr_importer feeds.
  $permissions['unlock emr_importer feeds'] = array(
    'name' => 'unlock emr_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock user_import_form feeds.
  $permissions['unlock user_import_form feeds'] = array(
    'name' => 'unlock user_import_form feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
