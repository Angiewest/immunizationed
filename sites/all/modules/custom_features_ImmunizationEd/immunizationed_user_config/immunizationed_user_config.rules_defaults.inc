<?php
/**
 * @file
 * immunizationed_user_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_user_config_default_rules_configuration() {
  $items = array();
  $items['rules_actions_on_special_role_removal'] = entity_import('rules_config', '{ "rules_actions_on_special_role_removal" : {
      "LABEL" : "Actions on special role removal",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "role", "users" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "user_presave" : [  ] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "account-unchanged:field-responsible-role" ] } },
        { "data_is_empty" : { "data" : [ "account:field-responsible-role" ] } },
        { "og_user_in_group" : {
            "account" : [ "account" ],
            "group" : [ "site:og-context--node" ],
            "states" : { "value" : { "1" : "1" } }
          }
        }
      ],
      "DO" : [
        { "og_revoke_og_role" : {
            "account" : [ "account" ],
            "group" : [ "site:og-context--node" ],
            "roles" : { "value" : { "14" : "14" } }
          }
        },
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  return $items;
}
