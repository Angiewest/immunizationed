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
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'spambot',
  );

  // Exported permission: skip CAPTCHA.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'captcha',
  );

  return $permissions;
}
