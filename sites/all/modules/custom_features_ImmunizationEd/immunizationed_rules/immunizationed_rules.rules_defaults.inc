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
  $items['rules_actions_on_practice_creation'] = entity_import('rules_config', '{ "rules_actions_on_practice_creation" : {
      "LABEL" : "Actions on practice creation",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "practice", "task" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "practice_group" : "practice_group" } }
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
  $items['rules_actions_on_strategy_selection_save'] = entity_import('rules_config', '{ "rules_actions_on_strategy_selection_save" : {
      "LABEL" : "Actions on strategy selection save",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "autofill" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : [ "node_insert" ],
      "IF" : [
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
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } }
      ],
      "DO" : [
        { "og_group_content_add" : { "entity" : [ "node" ], "group" : [ "node:author:og-user-node:0" ] } }
      ]
    }
  }');
  $items['rules_add_practice_admin_role_to_special_roles'] = entity_import('rules_config', '{ "rules_add_practice_admin_role_to_special_roles" : {
      "LABEL" : "Add group member and practice admin role to practice admins on login",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "practice", "users" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
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
  $items['rules_check_instruction_fields'] = entity_import('rules_config', '{ "rules_check_instruction_fields" : {
      "LABEL" : "Fill assembly step fields",
      "PLUGIN" : "rule set",
      "TAGS" : [ "task" ],
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
                  { "node_is_of_type" : { "node" : [ "new-step" ], "type" : { "value" : { "task" : "task" } } } },
                  { "node_is_of_type" : {
                      "node" : [ "fetched-instruction" ],
                      "type" : { "value" : { "roadmap_waypoint" : "roadmap_waypoint" } }
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
      "TAGS" : [ "content" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
        { "AND" : [
            { "OR" : [
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
      "TAGS" : [ "task" ],
      "REQUIRES" : [ "rules", "views_bulk_operations" ],
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
                  "USING" : {
                    "type" : "node",
                    "property" : "nid",
                    "value" : [ "new-practice:nid" ],
                    "limit" : "1"
                  },
                  "PROVIDE" : { "entity_fetched" : { "fetched_new_practice_nid" : "Fetched practice NID" } }
                }
              },
              { "views_bulk_operations_action_load_list" : {
                  "USING" : { "view" : "assembly_instructions_list|default" },
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
                    { "data_set" : {
                        "data" : [ "created-assembly-step:og-group-ref" ],
                        "value" : [ "fetched-new-practice-nid" ]
                      }
                    },
                    { "component_rules_check_instruction_fields" : {
                        "fetched_instruction" : [ "list-item" ],
                        "new_step" : [ "created-assembly-step" ]
                      }
                    }
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
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : [ "og_user_insert" ],
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
            "message" : "[account:name],\\u000D\\u000A\\u000D\\u000AYou are now a member in the group \\u0027[group:title]\\u0027 located at [group:url]",
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
      "TAGS" : [ "practice" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : [ "og_user_delete" ],
      "IF" : [ { "data_is_empty" : { "data" : [ "account:og-membership" ] } } ],
      "DO" : [
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } },
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ]
    }
  }');
  $items['rules_send_email_for_article_posted_to_practice_page'] = entity_import('rules_config', '{ "rules_send_email_for_article_posted_to_practice_page" : {
      "LABEL" : "send email for article posted to practice page",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "notifications" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "article" : "article" } } } }
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
  $items['rules_send_task_email'] = entity_import('rules_config', '{ "rules_send_task_email" : {
      "LABEL" : "Send task email",
      "PLUGIN" : "rule set",
      "TAGS" : [ "task" ],
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
              { "node_is_of_type" : {
                  "node" : [ "assembly-step" ],
                  "type" : { "value" : { "task" : "task" } }
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
  return $items;
}
