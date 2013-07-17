<?php
/**
 * @file
 * immunizationed_emr_importer.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_emr_importer_default_rules_configuration() {
  $items = array();
  $items['rules_actions_on_feed_import'] = entity_import('rules_config', '{ "rules_actions_on_feed_import" : {
      "LABEL" : "Actions on feed import",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "views_bulk_operations", "feeds" ],
      "ON" : [ "feeds_import_emr_importer" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "data_is_empty" : { "data" : [ "node:og-group-ref" ] } }
      ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : { "view" : "practices|default" },
            "PROVIDE" : { "entity_list" : { "practice_entity_list" : "A list of practice entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "practice-entity-list" ] },
            "ITEM" : { "current_practice_list_item" : "Current practice item" },
            "DO" : [
              { "component_rules_add_emr_item_to_practice" : {
                  "current_practice_list_item" : [ "current_practice_list_item" ],
                  "feed_item" : [ "node" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_add_emr_item_to_practice'] = entity_import('rules_config', '{ "rules_add_emr_item_to_practice" : {
      "LABEL" : "add emr item to practice",
      "PLUGIN" : "rule set",
      "TAGS" : [ "emr" ],
      "REQUIRES" : [ "rules", "og" ],
      "USES VARIABLES" : {
        "current_practice_list_item" : { "label" : "current practice item", "type" : "entity" },
        "feed_item" : { "label" : "current feed item", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "current-practice-list-item" ], "field" : "field_epic_id" } },
              { "entity_has_field" : { "entity" : [ "feed-item" ], "field" : "field_epic_id" } },
              { "data_is" : {
                  "data" : [ "current-practice-list-item:field-epic-id" ],
                  "value" : [ "feed-item:field-epic-id" ]
                }
              },
              { "entity_is_of_type" : { "entity" : [ "current-practice-list-item" ], "type" : "node" } }
            ],
            "DO" : [
              { "og_group_content_add" : { "entity" : [ "feed-item" ], "group" : [ "current-practice-list-item" ] } },
              { "drupal_message" : { "message" : "[feed-item:title] added to [current-practice-list-item:title]" } },
              { "entity_save" : { "data" : [ "feed-item" ], "immediate" : 1 } }
            ],
            "LABEL" : "iterate through practices and add item"
          }
        }
      ]
    }
  }');
  return $items;
}
