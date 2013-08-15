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
        { "og_user_has_role" : {
            "account" : [ "site:current-user" ],
            "group" : [ "node:og-group-ref:0" ],
            "roles" : { "value" : { "14" : "14" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:edit-url" ] } } ]
    }
  }');
  return $items;
}
