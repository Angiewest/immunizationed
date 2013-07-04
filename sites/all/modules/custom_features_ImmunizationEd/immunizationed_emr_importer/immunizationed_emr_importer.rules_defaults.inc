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
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "php", "feeds" ],
      "ON" : [ "feeds_import_emr_importer" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_practice" } }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "title",
              "value" : [ "node:field-practice" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "drupal_message" : { "message" : "fetched nid [node:nid] or maybe [entity-fetched:0]" } },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : [ "entity-fetched:0:nid" ] },
            "PROVIDE" : { "variable_added" : { "variable_added" : "Added variable" } }
          }
        },
        { "php_eval" : { "code" : "  \\u002F\\u002FSet the values\\u000D\\u000A  $values = array(\\u000D\\u000A    \\u0027entity_type\\u0027 =\\u003E \\u0027node\\u0027,\\u000D\\u000A    \\u0027entity\\u0027 =\\u003E $node,\\u000D\\u000A    \\u0027state\\u0027 =\\u003E OG_STATE_ACTIVE,\\u000D\\u000A  );\\u000D\\u000A \\u000D\\u000A  \\u002F\\u002FAdd this node to the group\\u000D\\u000A  $result = og_group(\\u0027node\\u0027, $variable_added, $values);\\u000D\\u000A" } },
        { "entity_save" : { "data" : [ "node" ], "immediate" : 1 } }
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
  $items['rules_delete_empty_emr_import_records'] = entity_import('rules_config', '{ "rules_delete_empty_emr_import_records" : {
      "LABEL" : "Delete empty emr import records",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : [ "feeds_import_emr_importer" ],
      "IF" : [
        { "data_is_empty" : { "data" : [ "node:title" ] } },
        { "data_is_empty" : { "data" : [ "node:field-epic-id" ] } },
        { "data_is_empty" : { "data" : [ "node:field-visits" ] } }
      ],
      "DO" : [ { "feeds_skip_item" : { "entity" : [ "node" ] } } ]
    }
  }');
  return $items;
}
