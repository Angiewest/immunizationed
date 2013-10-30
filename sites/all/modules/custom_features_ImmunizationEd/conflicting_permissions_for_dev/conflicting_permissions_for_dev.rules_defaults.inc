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
      "LABEL" : "Email on\\u002Foff test",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [  ] },
      "DO" : [
        { "drupal_message" : { "message" : "test email sent to admin" } },
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "email is active",
            "message" : "email is active",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
