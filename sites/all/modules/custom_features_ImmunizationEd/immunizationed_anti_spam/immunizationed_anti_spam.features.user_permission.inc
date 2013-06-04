<?php
/**
 * @file
 * immunizationed_anti_spam.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function immunizationed_anti_spam_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer BOTCHA settings.
  $permissions['administer BOTCHA settings'] = array(
    'name' => 'administer BOTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'botcha',
  );

  // Exported permission: administer CAPTCHA settings.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: administer recaptcha.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: protected from spambot scans.
  $permissions['protected from spambot scans'] = array(
    'name' => 'protected from spambot scans',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'spambot',
  );

  // Exported permission: skip BOTCHA.
  $permissions['skip BOTCHA'] = array(
    'name' => 'skip BOTCHA',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'editor' => 'editor',
    ),
    'module' => 'botcha',
  );

  // Exported permission: skip CAPTCHA.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Co-I admin' => 'Co-I admin',
      'Group member' => 'Group member',
      'Practice admin' => 'Practice admin',
      'administrator' => 'administrator',
      'apprentice admin' => 'apprentice admin',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'captcha',
  );

  return $permissions;
}
