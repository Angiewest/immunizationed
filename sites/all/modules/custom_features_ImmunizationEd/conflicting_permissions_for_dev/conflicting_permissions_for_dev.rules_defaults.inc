<?php
/**
 * @file
 * conflicting_permissions_for_dev.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function conflicting_permissions_for_dev_default_rules_configuration() {
  $items = array();
  $items['rules_email_on_off_test'] = entity_import('rules_config', '{ "rules_email_on_off_test" : {
      "LABEL" : "Email on\\/off test",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "mimemail" : [] },
        { "drupal_message" : { "message" : "test email sent to admin" } }
      ]
    }
  }');
  return $items;
}
