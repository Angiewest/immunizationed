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
      "WEIGHT" : "-10",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "node_view" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "task" : "task" } }
          }
        },
        { "og_user_has_permission" : {
            "permission" : "update any task content",
            "group" : [ "node:og-group-ref:0" ],
            "account" : [ "site:current-user" ]
          }
        },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "node:field-date-task-completed" ] } },
            { "data_is_empty" : { "data" : [ "node:field-date-started" ] } }
          ]
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:edit-url" ] } } ]
    }
  }');
  return $items;
}
