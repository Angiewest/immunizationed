<?php
/**
 * @file
 * immunizationed_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_rules_default_rules_configuration() {
  $items = array();
  $items['rules_actions_on_login'] = entity_import('rules_config', '{ "rules_actions_on_login" : {
      "LABEL" : "Actions on login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "login" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [  ] },
      "DO" : [ { "component_rules_rules_on_login" : { "user" : [ "account" ] } } ]
    }
  }');
  $items['rules_actions_on_practice_creation'] = entity_import('rules_config', '{ "rules_actions_on_practice_creation" : {
      "LABEL" : "Actions on practice creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "practice_group" : "practice_group" } }
          }
        },
        { "og_user_in_group" : {
            "account" : [ "node:author" ],
            "group" : [ "node" ],
            "states" : { "value" : { "1" : "1", "2" : "2" } }
          }
        },
        { "og_entity_is_group" : { "entity" : [ "node" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "node:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "practice_author" : "practice author" } }
          }
        },
        { "component_rules_add_site_permissions_to_practice_creator" : { "new_practice" : [ "node" ], "practice_author" : [ "practice_author" ] } },
        { "component_rules_send_email_when_practice_is_created" : { "practice" : [ "node" ], "practice_author" : [ "practice_author" ] } },
        { "component_rules_create_tasks_from_assembly_instructions" : {
            "USING" : { "new_practice" : [ "node" ] },
            "PROVIDE" : {
              "list_of_assembly_instructions" : { "list_of_assembly_instructions" : "list of assembly instructions" },
              "list_of_assembly_steps" : { "list_of_assembly_steps" : "list of assembly steps" }
            }
          }
        }
      ]
    }
  }');
  $items['rules_actions_on_role_change'] = entity_import('rules_config', '{ "rules_actions_on_role_change" : {
      "LABEL" : "Actions on special role selection",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "role", "users" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "user_presave" : [  ] },
      "IF" : [
        { "data_is_empty" : { "data" : [ "account-unchanged:field-responsible-role" ] } },
        { "NOT data_is_empty" : { "data" : [ "account:field-responsible-role" ] } },
        { "NOT data_is_empty" : { "data" : [ "account:og-user-node" ] } },
        { "og_user_in_group" : {
            "account" : [ "account" ],
            "group" : [ "site:og-context--node" ],
            "states" : { "value" : { "1" : "1" } }
          }
        }
      ],
      "DO" : [
        { "component_rules_send_emails" : {
            "USING" : {
              "user_changed" : [ "account" ],
              "original_user" : [ "account-unchanged" ]
            },
            "PROVIDE" : { "user_changed" : { "user_changed" : "user changed" } }
          }
        },
        { "og_grant_og_role" : {
            "account" : [ "user-changed" ],
            "group" : [ "site:og-context--node" ],
            "roles" : { "value" : { "14" : "14" } }
          }
        },
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_actions_on_strategy_selection_save'] = entity_import('rules_config', '{ "rules_actions_on_strategy_selection_save" : {
      "LABEL" : "Actions on strategy selection save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_bulk_operations" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "convenient_vaccination_services" : "convenient_vaccination_services",
                "patient_notification" : "patient_notification",
                "enhanced_vaccination_systems" : "enhanced_vaccination_systems",
                "motivation" : "motivation"
              }
            }
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } }
      ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : {
              "view" : "practice_selected_strategies|panel_pane_2",
              "args" : [ "node:type" ]
            },
            "PROVIDE" : { "entity_list" : { "entity_list" : "A list of entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "entity-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "component_rules_unpublish_old_strategy" : {
                  "new_node" : [ "node" ],
                  "entity_list" : [ "entity-list" ],
                  "current_item" : [ "list-item" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_add_practice_admin_role_to_special_roles'] = entity_import('rules_config', '{ "rules_add_practice_admin_role_to_special_roles" : {
      "LABEL" : "Add group member and practice admin role to practice admins on login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "practice", "users" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "user_login" : [  ] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "account:og-membership" ] } },
        { "OR" : [
            { "og_user_has_permission" : {
                "permission" : "approve and deny subscription",
                "group" : [ "site:current-user:og-user-node:0" ],
                "account" : [ "account" ]
              }
            },
            { "user_has_role" : {
                "account" : [ "account" ],
                "roles" : { "value" : { "4" : "4", "3" : "3" } },
                "operation" : "OR"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "user_add_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "5" : "5", "6" : "6" } }
          }
        }
      ]
    }
  }');
  $items['rules_add_site_permissions_to_practice_creator'] = entity_import('rules_config', '{ "rules_add_site_permissions_to_practice_creator" : {
      "LABEL" : "Add site permissions to practice creator",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "new_practice" : { "label" : "New practice", "type" : "node" },
        "practice_author" : { "label" : "practice author", "type" : "user" }
      },
      "DO" : [
        { "user_add_role" : {
            "account" : [ "practice-author" ],
            "roles" : { "value" : { "5" : "5", "6" : "6" } }
          }
        }
      ]
    }
  }');
  $items['rules_calculate_vaccination_goals'] = entity_import('rules_config', '{ "rules_calculate_vaccination_goals" : {
      "LABEL" : "calculate vaccination goals for practices on baseline import",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : { "feeds_import_baseline_rate_importer" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "practice_group" : "practice_group" } }
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
        { "drupal_message" : { "message" : "The baseline vaccination rates of eligible patients at [node:title] are as follows:\\u003Cbr\\u003E\\u000D\\u000AInfluenza: [node:field-baseline-flu-vax-rate]\\u003Cbr\\u003E\\u000D\\u000APneumo: [node:field-baseline-pneumo-vax-rate]\\u003Cbr\\u003E\\u000D\\u000ATdap: [node:field-baseline-tdap-vax-rate]\\u003Cbr\\u003E\\u000D\\u000AThe goals have been calculated as:\\u003Cbr\\u003E\\u000D\\u000AInfluenza: [node:field-target-flu-percent]\\u0009\\u003Cbr\\u003E\\u000D\\u000APneumo: [node:field-target-pneumo-percent]\\u003Cbr\\u003E\\u000D\\u000ATdap: [node:field-target-tdap-percent]\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AGood luck!" } }
      ]
    }
  }');
  $items['rules_check_instruction_fields'] = entity_import('rules_config', '{ "rules_check_instruction_fields" : {
      "LABEL" : "Fill assembly step fields",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "date_conversions" ],
      "USES VARIABLES" : {
        "fetched_instruction" : { "label" : "fetched instruction", "type" : "node" },
        "new_step" : { "label" : "fetched step", "type" : "node" }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "duration" : {
                "start_date_offset_duration" : "Start date offset duration",
                "due_date_offset_duration" : "Due date offset duration"
              },
              "variable_added" : { "now_added" : "Added variable" },
              "result" : {
                "start_date_result" : "Start date result",
                "due_date_result" : "Due date result"
              }
            },
            "IF" : [
              { "OR" : [
                  { "entity_is_of_bundle" : {
                      "entity" : [ "new-step" ],
                      "type" : "node",
                      "bundle" : { "value" : { "task" : "task" } }
                    }
                  },
                  { "entity_is_of_bundle" : {
                      "entity" : [ "fetched-instruction" ],
                      "type" : "node",
                      "bundle" : { "value" : { "roadmap_waypoint" : "roadmap_waypoint" } }
                    }
                  }
                ]
              }
            ],
            "DO" : [
              { "data_set" : {
                  "data" : [ "new-step:title" ],
                  "value" : [ "fetched-instruction:title" ]
                }
              },
              { "data_set" : {
                  "data" : [ "new-step:field-image" ],
                  "value" : [ "fetched-instruction:field-image" ]
                }
              },
              { "data_set" : { "data" : [ "new-step:body" ], "value" : [ "fetched-instruction:body" ] } },
              { "data_set" : {
                  "data" : [ "new-step:field-responsible-role" ],
                  "value" : [ "fetched-instruction:field-responsible-role" ]
                }
              },
              { "data_set" : {
                  "data" : [ "new-step:field-resource-links" ],
                  "value" : [ "fetched-instruction:field-resource-links" ]
                }
              },
              { "date_conversions_create_duration_from_days" : {
                  "USING" : { "number_of_days" : [ "fetched-instruction:field-start-day-offset-enrollmen" ] },
                  "PROVIDE" : { "duration" : { "start_date_offset_duration" : "Start date offset duration" } }
                }
              },
              { "date_conversions_create_duration_from_days" : {
                  "USING" : { "number_of_days" : [ "fetched-instruction:field-due-day-offset-enrollment" ] },
                  "PROVIDE" : { "duration" : { "due_date_offset_duration" : "Due date offset duration" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "date", "value" : "now" },
                  "PROVIDE" : { "variable_added" : { "now_added" : "Added variable" } }
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "now-added" ],
                    "op" : "+",
                    "input_2" : [ "start-date-offset-duration" ]
                  },
                  "PROVIDE" : { "result" : { "start_date_result" : "Start date result" } }
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "now-added" ],
                    "op" : "+",
                    "input_2" : [ "due-date-offset-duration" ]
                  },
                  "PROVIDE" : { "result" : { "due_date_result" : "Due date result" } }
                }
              },
              { "data_set" : {
                  "data" : [ "new-step:field-task-start-date" ],
                  "value" : [ "start-date-result" ]
                }
              },
              { "data_set" : {
                  "data" : [ "new-step:field-task-due-date" ],
                  "value" : [ "due-date-result" ]
                }
              },
              { "entity_save" : { "data" : [ "new-step" ], "immediate" : 1 } }
            ],
            "LABEL" : "fill fields"
          }
        }
      ]
    }
  }');
  $items['rules_content_addition_redirect'] = entity_import('rules_config', '{ "rules_content_addition_redirect" : {
      "LABEL" : "Redirect to group home after group content addition",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "content" ],
      "REQUIRES" : [ "rules", 0 ],
      "ON" : { "node_insert" : [  ], "node_update" : [  ] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "AND" : [
            { "OR" : [
                { "node_is_of_type" : {
                    "node" : [ "node" ],
                    "type" : { "value" : { "meeting_agenda" : "meeting_agenda" } }
                  }
                },
                { "node_is_of_type" : {
                    "node" : [ "node" ],
                    "type" : { "value" : { "announcement" : "announcement" } }
                  }
                },
                { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "task" : "task" } } } },
                { "node_is_of_type" : {
                    "node" : [ "node" ],
                    "type" : { "value" : { "practice_group" : "practice_group" } }
                  }
                },
                { "node_is_of_type" : {
                    "node" : [ "node" ],
                    "type" : { "value" : {
                        "convenient_vaccination_services" : "convenient_vaccination_services",
                        "enhanced_vaccination_systems" : "enhanced_vaccination_systems",
                        "meeting_agenda" : "meeting_agenda",
                        "motivation" : "motivation",
                        "patient_notification" : "patient_notification"
                      }
                    }
                  }
                }
              ]
            }
          ]
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:og-group-ref:0:url" ] } } ]
    }
  }');
  $items['rules_create_tasks_from_assembly_instructions'] = entity_import('rules_config', '{ "rules_create_tasks_from_assembly_instructions" : {
      "LABEL" : "Create tasks from assembly instructions",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "task" ],
      "REQUIRES" : [ "rules", "views_bulk_operations", "og" ],
      "USES VARIABLES" : {
        "new_practice" : { "label" : "New practice", "type" : "node" },
        "list_of_assembly_instructions" : {
          "label" : "list of assembly instructions",
          "type" : "list\\u003Centity\\u003E",
          "parameter" : false
        },
        "list_of_assembly_steps" : {
          "label" : "list of assembly steps",
          "type" : "list\\u003Centity\\u003E",
          "parameter" : false
        }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "entity_fetched" : { "fetched_new_practice_nid" : "Fetched practice NID" },
              "entity_list" : { "list_assembly_instructions" : "A list of assembly instructions" }
            },
            "DO" : [
              { "entity_query" : {
                  "USING" : { "type" : "node", "property" : "nid", "value" : [ "new-practice:nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "fetched_new_practice_nid" : "Fetched practice NID" } }
                }
              },
              { "views_bulk_operations_action_load_list" : {
                  "USING" : { "view" : "test_view|page" },
                  "PROVIDE" : { "entity_list" : { "list_assembly_instructions" : "A list of assembly instructions" } }
                }
              }
            ],
            "LABEL" : "load parameters"
          }
        },
        { "RULE" : {
            "DO" : [
              { "LOOP" : {
                  "USING" : { "list" : [ "list-assembly-instructions" ] },
                  "ITEM" : { "list_item" : "Current list item" },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "node",
                          "param_type" : "task",
                          "param_title" : [ "list-item:title" ],
                          "param_author" : [ "new-practice:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "created_assembly_step" : "Created assembly step" } }
                      }
                    },
                    { "component_rules_check_instruction_fields" : {
                        "fetched_instruction" : [ "list-item" ],
                        "new_step" : [ "created-assembly-step" ]
                      }
                    },
                    { "og_group_content_add" : { "entity" : [ "created-assembly-step" ], "group" : [ "new-practice" ] } }
                  ]
                }
              }
            ],
            "LABEL" : "clone assembly instructions"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "list_of_assembly_instructions", "list_of_assembly_steps" ]
    }
  }');
  $items['rules_practice_member_approved'] = entity_import('rules_config', '{ "rules_practice_member_approved" : {
      "LABEL" : "Practice member approved",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "3",
      "OWNER" : "rules",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [  ] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "1" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "NOT data_is_empty" : { "data" : [ "account:og-membership" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "Your membership request was approved for \\u0027[group:title]\\u0027\\u000D\\u000A",
            "message" : "[account:name],\\u000D\\u000A\\u000D\\u000AYou are now a member in the group \\u0027[group:title]\\u0027 located at [group:url]\\u000D\\u000A\\u000D\\u000APlease spend 10 minutes reviewing the \\u003Ca href=\\u0022[site:url]\\u002F4-pillars-toolkit\\u0022\\u003E4 Pillars Toolkit\\u003C\\u002Fa\\u003E. This toolkit provides you with evidence-based strategies that have proven to be successful in raising adult vaccination rates. \\u000D\\u000A\\u000D\\u000AThe strategies provided in this 4 Pillars Toolkit have been broken out  to create \\u003Ca href=\\u0022[group:url]\\u0022\\u003Eyour practice’s Project Blueprints\\u002FTasks list.\\u003C\\u002Fa\\u003E This page you are now on will serve as your “home” page for all of these Pillar-related project tasks and will therefore guide you successfully through this project.\\u000D\\u000A\\u000D\\u000A--[site:name] team",
            "language" : [ "" ]
          }
        },
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  $items['rules_practice_member_exit'] = entity_import('rules_config', '{ "rules_practice_member_exit" : {
      "LABEL" : "Practice member exit",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_delete" : [  ] },
      "IF" : [ { "data_is_empty" : { "data" : [ "account:og-membership" ] } } ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } },
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_rules_on_login'] = entity_import('rules_config', '{ "rules_rules_on_login" : {
      "LABEL" : "Actions on login",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "login" ],
      "REQUIRES" : [ "rules", "og" ],
      "USES VARIABLES" : { "user" : { "label" : "logging in user", "type" : "user" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "NOT user_has_role" : { "account" : [ "user" ], "roles" : { "value" : { "5" : "5" } } } },
              { "data_is_empty" : { "data" : [ "user:field-visitor" ] } },
              { "data_is_empty" : { "data" : [ "user:og-user-node" ] } }
            ],
            "DO" : [
              { "drupal_message" : { "message" : "\\u003Cb\\u003EWelcome. We noticed that you are not a member of any practices yet.\\u003C\\u002Fb\\u003E\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AYou can join your team at \\u003Ca href=\\u0022[site:url]\\u002Fpractices\\u0022\\u003Ethe construction site.\\u003C\\u002Fa\\u003E Grab you hard hat, follow the link, and click \\u0022subscribe to group.\\u0022\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AAlternatively, if you are just observing the crew, tick the \\u003Ca href=\\u0022[user:edit-url]\\u0022\\u003Ejust a visitor box\\u003C\\u002Fa\\u003E, and we will stop whistling at you when you log in." } }
            ],
            "LABEL" : "Display join practice prompt"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT data_is_empty" : { "data" : [ "user:og-membership" ] } },
              { "OR" : [
                  { "og_user_has_permission" : {
                      "permission" : "approve and deny subscription",
                      "group" : [ "site:current-user:og-user-node:0" ],
                      "account" : [ "user" ]
                    }
                  },
                  { "user_has_role" : {
                      "account" : [ "user" ],
                      "roles" : { "value" : { "4" : "4", "8" : "8", "3" : "3" } },
                      "operation" : "OR"
                    }
                  }
                ]
              }
            ],
            "DO" : [
              { "user_add_role" : {
                  "account" : [ "user" ],
                  "roles" : { "value" : { "5" : "5", "6" : "6" } }
                }
              }
            ],
            "LABEL" : "Add group member and practice admin role to practice admins on login"
          }
        }
      ]
    }
  }');
  $items['rules_send_email_for_article_posted_to_practice_page'] = entity_import('rules_config', '{ "rules_send_email_for_article_posted_to_practice_page" : {
      "LABEL" : "send email for article posted to practice page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "notifications" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "article" : "article" } }
          }
        }
      ],
      "DO" : [
        { "og_get_members" : {
            "USING" : { "group_content" : [ "node" ] },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : "[list-item:mail]",
                  "subject" : "A new article was shared with [list-item:og_user_node]",
                  "message" : "Hello [list-item:profile-salutation] [list-item:profile-last-name],\\u003Cbr\\u003E\\u003Cbr\\u003E\\u000D\\u000A\\u000D\\u000AA new article has been posted to the [list-item:og_user_node] homepage. We thought you might find \\u0022[node:title]\\u0022 interesting.\\u003Cbr\\u003E\\u000D\\u000ALog in an take a look.\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000A\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u003Cbr\\u003E\\u000D\\u000A\\u000D\\u000AIn health,\\u003Cbr\\u003E\\u000D\\u000AThe 4 Pillars Team",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "Email sent to [list-item:mail]." } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_to_article_practice_audience'] = entity_import('rules_config', '{ "rules_send_email_to_article_practice_audience" : {
      "LABEL" : "send email to article practice audience",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert--article" : { "bundle" : "article" } },
      "IF" : [ { "og_entity_is_group_content" : { "entity" : [ "node" ] } } ],
      "DO" : [
        { "og_get_members" : {
            "USING" : { "group_content" : [ "node" ] },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : "[list-item:mail]",
                  "subject" : "A new article was shared with [list-item:og_user_node]",
                  "message" : "Hello [list-item:profile-salutation] [list-item:profile-last-name],\\u003Cbr\\u003E\\u003Cbr\\u003E\\u000D\\u000A\\u000D\\u000AA new article has been posted to the [list-item:og_user_node] homepage. We thought you might find \\u0022[node:title]\\u0022 interesting.\\u003Cbr\\u003E\\u000D\\u000ALog in an take a look.\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000A\\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\u002Fa\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u003Cbr\\u003E\\u000D\\u000A\\u000D\\u000AIn health,\\u003Cbr\\u003E\\u000D\\u000APittVax",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "Email sent to [list-item:mail]." } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_email_when_practice_is_created'] = entity_import('rules_config', '{ "rules_send_email_when_practice_is_created" : {
      "LABEL" : "Send email when practice is created",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "practice" : { "label" : "practice", "type" : "node" },
        "practice_author" : { "label" : "practice author", "type" : "user" }
      },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "practice-author" ],
            "roles" : { "value" : { "7" : "7", "4" : "4", "8" : "8", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "practice-author:mail" ],
            "subject" : "Welcome to [practice:title]",
            "message" : "Hello [practice-author:field-salutations] [practice-author:field-last-names],\\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000AThanks for your commitment to timely vaccinations. By registering [practice:title], you have taken the first step towards building a solid foundation of immunization practice. \\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000AHere are your next steps:\\u003Cbr\\u003E\\u000D\\u000AComplete your profile - [practice-author:edit-url]\\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000AAsk your team to create accounts - mailto:Fill%20in%20your%20Team%20Email%20addresses?subject=sign%20up%20at%20ImmunizationEd\\u0026body=Hello,%20[practice-author:field-salutations]%20[practice-author:field-last-names]%20would%20like%20you%20to%20create%20an%20account%20at%20[site:url].\\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000AEnroll your team - [site:url]group\\u002Fnode\\u002F[practice:nid]\\u002Fadmin\\u002Fpeople\\u002Fadd-user\\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000ATake a look at [site:url].\\u003Cbr\\u003E\\u000D\\u000AYou will find relevant articles about immunization practice, the complete 4-pillars-toolkit, helpful resources that we call building-blocks, and the blueprints for your success. \\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000AWe hope that you find [site:url-brief] useful and look forward to your participation in the 4 Pillars Immunization Program.\\u003Cbr\\u003E\\u000D\\u000A \\u003Cbr\\u003E\\u000D\\u000ASincerely,\\u003Cbr\\u003E\\u000D\\u000AThe [site:name] Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_emails'] = entity_import('rules_config', '{ "rules_send_emails" : {
      "LABEL" : "Send emails",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "email", "users" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "user_changed" : { "label" : "user changed", "type" : "user" },
        "original_user" : { "label" : "original user", "type" : "user" }
      },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } },
            "IF" : [
              { "entity_has_field" : { "entity" : [ "original-user" ], "field" : "og_user_node" } }
            ],
            "DO" : [
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "user-changed:og-user-node:0:nid" ] },
                  "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
                }
              },
              { "mail" : {
                  "to" : [ "user-changed:mail" ],
                  "subject" : "Your new role with [user-changed:og-user-node]",
                  "message" : "Hello [user-changed:field-salutations] [user-changed:field-last-names],\\u003Cbr\\u003E\\u000D\\u000AWe are excited that you have decided to serve as your practice’s [user-changed:field_responsible_role]. Your commitment to implementing the 4 Pillars toolkit through the Practice Transformation Dashboard is a critical factor in maximizing every vaccination opportunity. We have worked hard to compile tools and resources that will help you to train your team in the latest evidence-based immunization practices. \\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AWe have created a personalized Practice Transformation Dashboard for \\u003Ca href=[entity-fetched:url]\\u003E[user-changed:og-user-node]\\u003C\\u002Fa\\u003E. This page is the most important point of contact with the site. You may want to save it as a bookmark for quick reference. You can also navigate to your practice home by clicking the link in the top right corner of the header bar  above the links for your account actions. We have also placed a quick link to \\u003Ca href=”[site:url]contact\\u003Econtact us\\u003C\\u002Fa\\u003E. If you run into trouble using the site, feel free to send us a message.\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AAll of the instructions to build a healthy immunization practice using The 4 Pillars Toolkit appear as a list of simple assembly steps. That list is labeled “Project Blueprints.” Suggested due dates and responsible roles have been assigned to each task for your convenience. Tasks that have been marked as completed will fall off of the list. To find out more information about each task and to update your progress, click the task name. We will monitor your progress through the program and offer support as necessary.\\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AYou can start by taking a look at [site:url]. You will find relevant articles about immunization practice, the complete 4-pillars-toolkit, helpful resources that we call building blocks, and the blueprints for your success. \\u003Cbr\\u003E\\u000D\\u000A\\u003Cbr\\u003E\\u000D\\u000AWe hope that you find [site:url] useful and look forward to your participation in the 4 Pillars Immunization Program.\\u003Cbr\\u003E\\u000D\\u000ASincerely,\\u003Cbr\\u003E\\u000D\\u000AThe [site:name] Team",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "Message sent to [user-changed:name]\\u0009" } }
            ],
            "LABEL" : "Send email on special member role assignment"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "user_changed" ]
    }
  }');
  $items['rules_send_task_email'] = entity_import('rules_config', '{ "rules_send_task_email" : {
      "LABEL" : "Send task email",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "views_bulk_operations", "rules", "og" ],
      "USES VARIABLES" : { "assembly_step" : { "label" : "assembly step", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_list" : { "practice_list" : "A list of practices" } },
            "DO" : [
              { "views_bulk_operations_action_load_list" : {
                  "USING" : { "view" : "practices|default" },
                  "PROVIDE" : { "entity_list" : { "practice_list" : "A list of practices" } }
                }
              }
            ],
            "LABEL" : "get list of practices"
          }
        },
        { "RULE" : {
            "PROVIDE" : { "entity_id_list" : { "steps_eid_list" : "A list of assembly steps" } },
            "IF" : [
              { "entity_is_of_type" : { "entity" : [ "assembly-step" ], "type" : "node" } }
            ],
            "DO" : [
              { "views_bulk_operations_action_load_id_list" : {
                  "USING" : { "view" : "overdue_tasks|default" },
                  "PROVIDE" : { "entity_id_list" : { "steps_eid_list" : "A list of assembly steps" } }
                }
              }
            ],
            "LABEL" : "get list of assembly steps"
          }
        },
        { "RULE" : {
            "PROVIDE" : {
              "group_managers" : { "group_managers" : "List of group managers" },
              "group_members" : { "group_members" : "List of group members" }
            },
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "assembly-step" ],
                  "type" : "node",
                  "bundle" : { "value" : { "task" : "task" } }
                }
              },
              { "entity_has_field" : { "entity" : [ "assembly-step" ], "field" : "og_group_ref" } },
              { "data_is" : {
                  "data" : [ "assembly-step:field-task-due-date" ],
                  "op" : "\\u003C",
                  "value" : { "select" : "site:current-date", "date_offset" : { "value" : 432000 } }
                }
              }
            ],
            "DO" : [
              { "LOOP" : {
                  "USING" : { "list" : [ "steps-eid-list" ] },
                  "ITEM" : { "list_item" : "Current list item" },
                  "DO" : [
                    { "drupal_message" : { "message" : "item is: [list-item:nid], [list-item:title]" } }
                  ]
                }
              },
              { "og_get_managers" : {
                  "USING" : { "group_content" : [ "assembly-step" ] },
                  "PROVIDE" : { "group_managers" : { "group_managers" : "List of group managers" } }
                }
              },
              { "og_get_members" : {
                  "USING" : { "group_content" : [ "assembly-step" ] },
                  "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
                }
              }
            ],
            "LABEL" : "create lists of overdue tasks, managers, and members"
          }
        }
      ]
    }
  }');
  $items['rules_unpublish_old_strategy'] = entity_import('rules_config', '{ "rules_unpublish_old_strategy" : {
      "LABEL" : "Unpublish old strategy",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "new_node" : { "label" : "node", "type" : "node" },
        "entity_list" : { "label" : "List of entity items", "type" : "list" },
        "current_item" : { "label" : "current list item", "type" : "node" }
      },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "current-item" ], "type" : "node" } },
        { "entity_has_field" : { "entity" : [ "current-item" ], "field" : "og_group_ref" } },
        { "entity_has_field" : { "entity" : [ "new-node" ], "field" : "og_group_ref" } },
        { "data_is" : {
            "data" : [ "current-item:og-group-ref" ],
            "value" : [ "new-node:og-group-ref" ]
          }
        }
      ],
      "DO" : [
        { "node_unpublish" : { "node" : [ "current-item" ] } },
        { "entity_save" : { "data" : [ "current-item" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
