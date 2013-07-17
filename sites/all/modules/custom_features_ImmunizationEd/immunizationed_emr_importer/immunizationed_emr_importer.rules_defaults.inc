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
  $items['rules_actions_on_emr_import'] = entity_import('rules_config', '{ "rules_actions_on_emr_import" : {
      "LABEL" : "Actions on EMR import",
      "PLUGIN" : "rule set",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "feed_item_list" : {
          "label" : "list of feed items",
          "type" : "list\\u003Cfeeds_source\\u003E"
        },
        "current_feed_item" : { "label" : "current feed item", "type" : "node" },
        "practice_list" : { "label" : "list of practices", "type" : "list\\u003Cnode\\u003E" },
        "current_practice" : { "label" : "current practice", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : {
                  "node" : [ "current-feed-item" ],
                  "type" : { "value" : { "vaccination_data_from_emr" : "vaccination_data_from_emr" } }
                }
              },
              { "data_is_empty" : { "data" : [ "current-feed-item:og-group-ref" ] } }
            ],
            "DO" : [  ],
            "LABEL" : "fill audience field"
          }
        },
        { "RULE" : { "DO" : [  ], "LABEL" : "create list of practices" } }
      ]
    }
  }');
  $items['rules_actions_on_feed_import'] = entity_import('rules_config', '{ "rules_actions_on_feed_import" : {
      "LABEL" : "Actions on feed import",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "ACTIVE" : false,
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "views_bulk_operations", "feeds" ],
      "ON" : [ "feeds_import_emr_importer" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_practice" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_epic_id" } }
      ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : { "view" : "practices|default" },
            "PROVIDE" : { "entity_list" : { "practice_entity_list" : "A list of practice entities" } }
          }
        }
      ]
    }
  }');
  $items['rules_assign_practice_to_emr_import_record'] = entity_import('rules_config', '{ "rules_assign_practice_to_emr_import_record" : {
      "LABEL" : "Assign practice to EMR import record",
      "PLUGIN" : "rule set",
      "TAGS" : [ "emr", "import" ],
      "REQUIRES" : [ "rules", "og" ],
      "USES VARIABLES" : {
        "current_feed_item_node" : { "label" : "current feed item node", "type" : "node" },
        "practice_node_fetched" : { "label" : "practice node fetched", "type" : "node" },
        "practice_list" : { "label" : "practice list", "type" : "list" }
      },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "current-feed-item-node" ], "field" : "og_group_ref" } }
            ],
            "DO" : [
              { "LOOP" : {
                  "USING" : { "list" : [ "practice-list" ] },
                  "ITEM" : { "list_item" : "Current list item" },
                  "DO" : [  ]
                }
              }
            ],
            "LABEL" : "loop"
          }
        },
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "current-feed-item-node" ], "field" : "og_group_ref" } },
              { "entity_has_field" : { "entity" : [ "current-feed-item-node" ], "field" : "field_epic_id" } },
              { "entity_has_field" : { "entity" : [ "practice-node-fetched" ], "field" : "field_epic_id" } },
              { "data_is" : {
                  "data" : [ "current-feed-item-node:field-epic-id" ],
                  "value" : [ "practice-node-fetched:field-epic-id" ]
                }
              }
            ],
            "DO" : [
              { "og_group_content_add" : {
                  "entity" : [ "current-feed-item-node" ],
                  "group" : [ "practice-node-fetched" ]
                }
              },
              { "entity_save" : { "data" : [ "current-feed-item-node" ], "immediate" : 1 } }
            ],
            "LABEL" : "fill audience field"
          }
        }
      ]
    }
  }');
  return $items;
}
