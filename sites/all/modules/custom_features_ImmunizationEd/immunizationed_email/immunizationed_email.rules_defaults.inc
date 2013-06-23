<?php
/**
 * @file
 * immunizationed_email.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_email_default_rules_configuration() {
  $items = array();
  $items['rules_test_email_rule'] = entity_import('rules_config', '{ "rules_test_email_rule" : {
      "LABEL" : "test email rule",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "test" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : [ "user_login" ],
      "DO" : [
        { "drupal_message" : { "message" : "sending test email to SU" } },
        { "mail" : {
            "to" : "raviottaj@upmc.edu",
            "subject" : "login from [site:current-user]",
            "message" : "[site:current-user] just logged in.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "to" : "raviottaj@upmc.edu",
            "subject" : "[site:current-user] logged in",
            "body" : "[site:current-user] logged in",
            "plaintext" : "[site:current-user] logged in plain text"
          }
        }
      ]
    }
  }');
  return $items;
}
