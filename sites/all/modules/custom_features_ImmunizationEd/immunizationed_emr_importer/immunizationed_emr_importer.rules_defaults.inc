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
      "LABEL" : "Add practice to EMR feed import item",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : { "feeds_import_emr_baseline_import" : [] },
      "IF" : [
        { "component_rules_check_feed_item_for_practice_assignment" : { "unsaved_feed_item" : [ "node" ] } }
      ],
      "DO" : [
        { "component_rules_skip_import_of_empty_feed_items" : { "unsaved_feed_item" : [ "node" ] } },
        { "component_rules_loop_through_list_of_practices" : {
            "USING" : { "unsaved_feed_item" : [ "node" ] },
            "PROVIDE" : { "practice_list_item" : { "practice_list_item" : "practice list item" } }
          }
        }
      ]
    }
  }');
  $items['rules_assign_practice_to_emr_import_record'] = entity_import('rules_config', '{ "rules_assign_practice_to_emr_import_record" : {
      "LABEL" : "Assign practice to EMR import record",
      "PLUGIN" : "rule",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "practice_list_item" : { "label" : "practice list item", "type" : "node" },
        "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "practice-list-item" ], "field" : "field_epic_id" } },
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "field_epic_id" } },
        { "data_is" : {
            "data" : [ "practice-list-item:field-epic-id" ],
            "value" : [ "unsaved-feed-item:field-epic-id" ]
          }
        },
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "og_group_ref" } },
        { "entity_is_of_type" : { "entity" : [ "practice-list-item" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "practice-list-item" ],
            "type" : { "value" : { "practice_group" : "practice_group" } }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "practice-list-item:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "unsaved-feed-item:og-group-ref:0" ],
            "value" : [ "practice-list-item" ]
          }
        },
        { "entity_save" : { "data" : [ "unsaved-feed-item" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_calculate_vaccination_goals'] = entity_import('rules_config', '{ "rules_calculate_vaccination_goals" : {
      "LABEL" : "calculate vaccination goals for practices on baseline import",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : { "feeds_import_baseline_rate_importer" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "practice_group" : "practice_group" } }
          }
        },
        { "OR" : [
            { "NOT data_is_empty" : { "data" : [ "node:field-baseline-flu-vax-rate" ] } },
            { "NOT data_is_empty" : { "data" : [ "node:field-baseline-pneumo-vax-rate" ] } },
            { "NOT data_is_empty" : { "data" : [ "node:field-baseline-tdap-vax-rate" ] } }
          ]
        },
        { "AND" : [
            { "data_is_empty" : { "data" : [ "node:field-target-flu-percent" ] } },
            { "data_is_empty" : { "data" : [ "node:field-target-pneumo-percent" ] } },
            { "data_is_empty" : { "data" : [ "node:field-target-tdap-percent" ] } }
          ]
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-baseline-flu-vax-rate" ],
              "op" : "+",
              "input_2" : "20"
            },
            "PROVIDE" : { "result" : { "flu_result" : "flu result" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-baseline-pneumo-vax-rate" ],
              "op" : "+",
              "input_2" : "20"
            },
            "PROVIDE" : { "result" : { "pneumo_result" : "pneumo result" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-baseline-tdap-vax-rate" ],
              "op" : "+",
              "input_2" : "20"
            },
            "PROVIDE" : { "result" : { "tdap_result" : "tdap result" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-target-flu-percent" ],
            "value" : [ "flu-result" ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-target-pneumo-percent" ],
            "value" : [ "pneumo-result" ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-target-tdap-percent" ],
            "value" : [ "tdap-result" ]
          }
        },
        { "drupal_message" : { "message" : "The baseline vaccination rates of eligible patients are as follows:\\u003Cbr\\u003E\\r\\nInfluenza: [node:field-baseline-flu-vax-rate]\\u003Cbr\\u003E\\r\\nPneumo: [node:field-baseline-pneumo-vax-rate]\\u003Cbr\\u003E\\r\\nTdap: [node:field-baseline-tdap-vax-rate]\\u003Cbr\\u003E\\r\\nThe goals have been calculated as:\\u003Cbr\\u003E\\r\\nInfluenza: [node:field-target-flu-percent]\\t\\u003Cbr\\u003E\\r\\nPneumo: [node:field-target-pneumo-percent]\\u003Cbr\\u003E\\r\\nTdap: [node:field-target-tdap-percent]\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nGood luck!" } }
      ]
    }
  }');
  $items['rules_check_feed_item_for_practice_assignment'] = entity_import('rules_config', '{ "rules_check_feed_item_for_practice_assignment" : {
      "LABEL" : "check feed item for practice assignment",
      "PLUGIN" : "and",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "entity" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "og_group_ref" } },
        { "data_is_empty" : { "data" : [ "unsaved-feed-item:og-group-ref" ] } }
      ]
    }
  }');
  $items['rules_loop_through_list_of_practices'] = entity_import('rules_config', '{ "rules_loop_through_list_of_practices" : {
      "LABEL" : "find group from epic id and assign to emr item",
      "PLUGIN" : "rule",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "views_bulk_operations" ],
      "USES VARIABLES" : {
        "practice_list_item" : { "label" : "practice list item", "type" : "entity", "parameter" : false },
        "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "field_epic_id" } }
      ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : {
              "view" : "practices|default",
              "args" : [ "unsaved-feed-item:field-epic-id" ]
            },
            "PROVIDE" : { "entity_list" : { "practice_entity_list" : "A list of practice entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "practice-entity-list" ] },
            "ITEM" : { "current_practice_list_item" : "Current practice list item" },
            "DO" : [
              { "component_rules_assign_practice_to_emr_import_record" : {
                  "practice_list_item" : [ "current-practice-list-item" ],
                  "unsaved_feed_item" : [ "unsaved_feed_item" ]
                }
              }
            ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "practice_list_item" ]
    }
  }');
  $items['rules_skip_import_of_empty_feed_items'] = entity_import('rules_config', '{ "rules_skip_import_of_empty_feed_items" : {
      "LABEL" : "skip import of empty feed items",
      "PLUGIN" : "rule",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "USES VARIABLES" : { "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "node" } },
      "IF" : [ { "data_is_empty" : { "data" : [ "unsaved-feed-item:title" ] } } ],
      "DO" : [ { "feeds_skip_item" : { "entity" : [ "unsaved-feed-item" ] } } ]
    }
  }');
  return $items;
}
