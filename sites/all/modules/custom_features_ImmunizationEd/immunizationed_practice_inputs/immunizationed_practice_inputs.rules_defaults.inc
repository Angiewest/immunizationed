<?php
/**
 * @file
 * immunizationed_practice_inputs.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_practice_inputs_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_practice_admins_to_edit_task_tab'] = entity_import('rules_config', '{ "rules_redirect_practice_admins_to_edit_task_tab" : {
      "LABEL" : "Redirect practice admins to edit task tab",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : [ "node_view" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "task" : "task" } } } },
        { "AND" : [
            { "og_user_has_permission" : {
                "permission" : "administer group",
                "group" : [ "node:og-group-ref:0" ],
                "account" : [ "site:current-user" ]
              }
            },
            { "NOT entity_field_access" : {
                "entity" : [ "node" ],
                "field" : "og_group_ref",
                "op" : "edit",
                "account" : [ "site:current-user" ]
              }
            }
          ]
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:edit-url" ] } } ]
    }
  }');
  return $items;
}
