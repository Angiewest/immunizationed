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
  $items['immunizationed_emr_importer_fetch_practice_nodes_from_list'] = entity_import('rules_config', '{ "immunizationed_emr_importer_fetch_practice_nodes_from_list" : {
      "LABEL" : "fetch practice nodes from VBO list",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "views_bulk_operations", "rules" ],
      "USES VARIABLES" : {
        "fetched_practice_node" : {
          "label" : "fetched practice node",
          "type" : "entity",
          "parameter" : false
        },
        "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "node" }
      },
      "DO" : [
        { "views_bulk_operations_action_load_id_list" : {
            "USING" : { "view" : "practices|default" },
            "PROVIDE" : { "entity_id_list" : { "practice_entity_id_list" : "A list of practice entity ids" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "practice-entity-id-list" ] },
            "ITEM" : { "current_practice_entity_id" : "Current practice entity list id" },
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "current-practice-entity-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "practice_node_fetched" : "Fetched practice node" } }
                }
              },
              { "component_rules_assign_practice_to_emr_import_record" : {
                  "practice_list_item" : [ "practice-node-fetched" ],
                  "unsaved_feed_item" : [ "unsaved_feed_item" ]
                }
              }
            ]
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "fetched_practice_node", "unsaved_feed_item" ]
    }
  }');
  $items['rules_actions_on_feed_import'] = entity_import('rules_config', '{ "rules_actions_on_feed_import" : {
      "LABEL" : "Add practice to EMR feed import item",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : {
        "feeds_import_emr_baseline_import" : [],
        "feeds_import_pitt_progress_emr_importer" : []
      },
      "IF" : [
        { "component_rules_check_feed_item_for_practice_assignment" : { "unsaved_feed_item" : [ "node" ] } }
      ],
      "DO" : [
        { "component_rules_skip_import_of_empty_feed_items" : { "unsaved_feed_item" : [ "node" ] } },
        { "component_immunizationed_emr_importer_fetch_practice_nodes_from_list" : {
            "USING" : { "unsaved_feed_item" : [ "node" ] },
            "PROVIDE" : {
              "fetched_practice_node" : { "fetched_practice_node" : "fetched practice node" },
              "unsaved_feed_item" : { "unsaved_feed_item" : "unsaved feed item" }
            }
          }
        }
      ]
    }
  }');
  $items['rules_assign_practice_to_emr_import_record'] = entity_import('rules_config', '{ "rules_assign_practice_to_emr_import_record" : {
      "LABEL" : "Assign practice and calculate targets for EMR import record",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "practice_list_item" : { "label" : "practice list item", "type" : "node" },
        "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "node" }
      },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "unsaved-feed-item" ],
            "field" : "field_tdap_eligible_estimated_vi"
          }
        },
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "field_target_flu_doses" } },
        { "entity_has_field" : {
            "entity" : [ "unsaved-feed-item" ],
            "field" : "field_target_pneumo_doses"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "unsaved-feed-item" ],
            "field" : "field_target_tdap_doses"
          }
        },
        { "entity_has_field" : { "entity" : [ "practice-list-item" ], "field" : "field_epic_id" } },
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "field_epic_id" } },
        { "data_is" : {
            "data" : [ "practice-list-item:field-epic-id" ],
            "value" : [ "unsaved-feed-item:field-epic-id" ]
          }
        },
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "og_group_ref" } },
        { "entity_is_of_type" : { "entity" : [ "practice-list-item" ], "type" : "node" } },
        { "entity_is_of_bundle" : {
            "entity" : [ "practice-list-item" ],
            "type" : "node",
            "bundle" : { "value" : { "practice_group" : "practice_group" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "unsaved-feed-item" ],
            "field" : "field_all_flu_eligible_est_visit"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "unsaved-feed-item" ],
            "field" : "field_pneumo_eligible_est_visits"
          }
        },
        { "entity_is_of_type" : { "entity" : [ "practice-list-item" ], "type" : "node" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "practice-list-item:nid" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "practice-list-item:field-target-flu-percent" ],
              "op" : "\\/",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "flu_rate_decimal" : "flu rate decimal" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "unsaved-feed-item:field-all-flu-eligible-est-visit" ],
              "op" : "*",
              "input_2" : [ "flu-rate-decimal" ]
            },
            "PROVIDE" : { "result" : { "target_flu_doses" : "target flu doses" } }
          }
        },
        { "data_set" : {
            "data" : [ "unsaved-feed-item:field-target-flu-doses" ],
            "value" : [ "target-flu-doses" ]
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "practice-list-item:field-target-pneumo-percent" ],
              "op" : "\\/",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "pneumo_target_decimal" : "pneumo target decimal" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "practice-list-item:field-target-tdap-percent" ],
              "op" : "\\/",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "tdap_target_decimal" : "tdap target decimal" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "unsaved-feed-item:field-pneumo-eligible-est-visits" ],
              "op" : "*",
              "input_2" : [ "pneumo-target-decimal" ]
            },
            "PROVIDE" : { "result" : { "target_pneumo_doses" : "target pneumo doses" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "unsaved-feed-item:field-tdap-eligible-estimated-vi" ],
              "op" : "*",
              "input_2" : [ "tdap-target-decimal" ]
            },
            "PROVIDE" : { "result" : { "tdap_target_doses" : "tdap target doses" } }
          }
        },
        { "data_set" : {
            "data" : [ "unsaved-feed-item:field-target-tdap-doses" ],
            "value" : [ "tdap-target-doses" ]
          }
        },
        { "data_set" : {
            "data" : [ "unsaved-feed-item:field-target-pneumo-doses" ],
            "value" : [ "target-pneumo-doses" ]
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
  $items['rules_check_feed_item_for_practice_assignment'] = entity_import('rules_config', '{ "rules_check_feed_item_for_practice_assignment" : {
      "LABEL" : "check feed item for practice assignment",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "entity" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "unsaved-feed-item" ], "field" : "og_group_ref" } },
        { "data_is_empty" : { "data" : [ "unsaved-feed-item:og-group-ref" ] } }
      ]
    }
  }');
  $items['rules_skip_import_of_empty_feed_items'] = entity_import('rules_config', '{ "rules_skip_import_of_empty_feed_items" : {
      "LABEL" : "skip import of empty feed items",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "USES VARIABLES" : { "unsaved_feed_item" : { "label" : "unsaved feed item", "type" : "node" } },
      "IF" : [ { "data_is_empty" : { "data" : [ "unsaved-feed-item:title" ] } } ],
      "DO" : [ { "feeds_skip_item" : { "entity" : [ "unsaved-feed-item" ] } } ]
    }
  }');
  return $items;
}
