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
      "LABEL" : "Actions on EMR feed import",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : [ "feeds_import_emr_importer" ],
      "IF" : [
        { "component_rules_check_feed_item_for_practice_assignment" : { "unsaved_feed_item" : [ "node" ] } }
      ],
      "DO" : [
        { "component_rules_skip_import_of_empty_feed_items" : { "unsaved_feed_item" : [ "node" ] } },
        { "component_rules_loop_through_list_of_practices" : {
            "USING" : { "unsaved_feed_item" : [ "node" ] },
            "PROVIDE" : { "practice_list_item" : { "practice_list_item" : "practice list item" } }
          }
        },
        { "component_rules_calculate_vaccination_goal" : { "imported_feed_item" : [ "node" ] } }
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
        { "entity_save" : { "data" : [ "unsaved-feed-item" ], "immediate" : 1 } },
        { "drupal_message" : { "message" : "[unsaved-feed-item:title]\\t" } }
      ]
    }
  }');
  $items['rules_calculate_vaccination_goal'] = entity_import('rules_config', '{ "rules_calculate_vaccination_goal" : {
      "LABEL" : "calculate vaccination goals",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "imported_feed_item" : { "label" : "imported feed item", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_fetched" : { "practice_fetched" : "Fetched practice" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "imported-feed-item" ], "field" : "og_group_ref" } },
              { "NOT data_is_empty" : { "data" : [ "imported-feed-item:og-group-ref" ] } }
            ],
            "DO" : [
              { "entity_fetch" : {
                  "USING" : {
                    "type" : "node",
                    "id" : [ "imported-feed-item:og-group-ref:0:nid" ],
                    "revision_id" : [ "" ]
                  },
                  "PROVIDE" : { "entity_fetched" : { "practice_fetched" : "Fetched practice" } }
                }
              }
            ],
            "LABEL" : "get practice"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "result" : {
                "flu_ratio" : "flu ratio",
                "flu_target" : "flu target",
                "pneumo_ratio" : "pneumo ratio",
                "pneumo_doses" : "pneumo doses",
                "tdap_ratio" : "tdap ratio",
                "tdap_doses" : "tdap doses"
              }
            },
            "IF" : [
              { "entity_has_field" : {
                  "entity" : [ "practice-fetched" ],
                  "field" : "field_target_flu_percent"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "imported-feed-item" ],
                  "field" : "field_target_flu_doses"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "imported-feed-item" ],
                  "field" : "field_all_flu_eligible_est_visit"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "practice-fetched" ],
                  "field" : "field_target_pneumo_percent"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "practice-fetched" ],
                  "field" : "field_target_tdap_percent"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "imported-feed-item" ],
                  "field" : "field_target_pneumo_doses"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "imported-feed-item" ],
                  "field" : "field_target_tdap_doses"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "imported-feed-item" ],
                  "field" : "field_pneumo_eligible_est_visits"
                }
              },
              { "entity_has_field" : {
                  "entity" : [ "imported-feed-item" ],
                  "field" : "field_tdap_eligible_estimated_vi"
                }
              }
            ],
            "DO" : [
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "practice-fetched:field-target-flu-percent" ],
                    "op" : "\\u002F",
                    "input_2" : "100"
                  },
                  "PROVIDE" : { "result" : { "flu_ratio" : "flu ratio" } }
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "imported-feed-item:field-all-flu-eligible-est-visit" ],
                    "op" : "*",
                    "input_2" : [ "flu-ratio" ]
                  },
                  "PROVIDE" : { "result" : { "flu_target" : "flu target" } }
                }
              },
              { "data_set" : {
                  "data" : [ "imported-feed-item:field-target-flu-doses" ],
                  "value" : [ "flu-target" ]
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "practice-fetched:field-target-pneumo-percent" ],
                    "op" : "\\u002F",
                    "input_2" : "100"
                  },
                  "PROVIDE" : { "result" : { "pneumo_ratio" : "pneumo ratio" } }
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "pneumo-ratio" ],
                    "op" : "*",
                    "input_2" : [ "imported-feed-item:field-pneumo-eligible-est-visits" ]
                  },
                  "PROVIDE" : { "result" : { "pneumo_doses" : "pneumo doses" } }
                }
              },
              { "data_set" : {
                  "data" : [ "imported-feed-item:field-target-pneumo-doses" ],
                  "value" : [ "pneumo-doses" ]
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "practice-fetched:field-target-tdap-percent" ],
                    "op" : "\\u002F",
                    "input_2" : "100"
                  },
                  "PROVIDE" : { "result" : { "tdap_ratio" : "tdap ratio" } }
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "imported-feed-item:field-tdap-eligible-estimated-vi" ],
                    "op" : "*",
                    "input_2" : [ "tdap-ratio" ]
                  },
                  "PROVIDE" : { "result" : { "tdap_doses" : "tdap doses" } }
                }
              },
              { "data_set" : {
                  "data" : [ "imported-feed-item:field-target-tdap-doses" ],
                  "value" : [ "tdap-doses" ]
                }
              },
              { "entity_save" : { "data" : [ "imported-feed-item" ], "immediate" : 1 } }
            ],
            "LABEL" : "calculate dose goals2"
          }
        }
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
      "LABEL" : "loop through list of practices",
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
