<?php
/**
 * @file
 * immunizationed_practice.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_practice_default_rules_configuration() {
  $items = array();
  $items['rules_practice_member_subscribe_pending_'] = entity_import('rules_config', '{ "rules_practice_member_subscribe_pending_" : {
      "LABEL" : "Practice member subscribe (Pending)",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "Your membership request for \\u0027[group:title]\\u0027",
            "message" : "[account:name],\\r\\n\\r\\nYour membership to group \\u0027[group:title]\\u0027 located at [group:url] is pending approval."
          }
        },
        { "og_get_managers" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_managers" : { "group_managers" : "List of group managers" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-managers" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:mail" ],
                  "subject" : "[account:name] membership request [group:title]",
                  "message" : "[group:author:name],\\r\\n\\r\\n[account:name] requests membership for group \\u0027[group:title]\\u0027 in [group:url].\\r\\n\\r\\n[og_membership:og-membership-request]",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
