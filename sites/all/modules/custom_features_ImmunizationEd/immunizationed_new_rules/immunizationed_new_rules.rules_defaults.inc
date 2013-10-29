<?php
/**
 * @file
 * immunizationed_new_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_new_rules_default_rules_configuration() {
  $items = array();
  $items['rules_actions_on_save_strategy_selection'] = entity_import('rules_config', '{ "rules_actions_on_save_strategy_selection" : {
      "LABEL" : "Actions on strategy selection save",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-2",
      "TAGS" : [ "autofill" ],
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
  $items['rules_redirect_practice_admins_to_edit_tab'] = entity_import('rules_config', '{ "rules_redirect_practice_admins_to_edit_tab" : {
      "LABEL" : "Redirect practice admins to edit tab",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_view--task" : { "bundle" : "task" } },
      "IF" : [
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
  $items['rules_redirect_to_group_home_after_group_content_addition'] = entity_import('rules_config', '{ "rules_redirect_to_group_home_after_group_content_addition" : {
      "LABEL" : "Redirect to group home after group content addition",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [  ], "node_update" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "task" : "task",
                "meeting_agenda" : "meeting_agenda",
                "convenient_vaccination_services" : "convenient_vaccination_services",
                "patient_notification" : "patient_notification",
                "enhanced_vaccination_systems" : "enhanced_vaccination_systems",
                "motivation" : "motivation",
                "announcement" : "announcement"
              }
            }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:og-group-ref:0:url" ] } } ]
    }
  }');
  $items['rules_redirect_to_practice_home'] = entity_import('rules_config', '{ "rules_redirect_to_practice_home" : {
      "LABEL" : "Redirect to practice home after group content addition",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [  ], "node_update" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "task" : "task",
                "meeting_agenda" : "meeting_agenda",
                "convenient_vaccination_services" : "convenient_vaccination_services",
                "patient_notification" : "patient_notification",
                "enhanced_vaccination_systems" : "enhanced_vaccination_systems",
                "motivation" : "motivation",
                "announcement" : "announcement",
                "vaccination_data_from_emr" : "vaccination_data_from_emr"
              }
            }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:og-group-ref:0:url" ] } } ]
    }
  }');
  $items['rules_redirect_to_practice_home_after_group_content_addition'] = entity_import('rules_config', '{ "rules_redirect_to_practice_home_after_group_content_addition" : {
      "LABEL" : "Redirect to practice home after group content addition",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [  ], "node_update" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : {
                "task" : "task",
                "meeting_agenda" : "meeting_agenda",
                "convenient_vaccination_services" : "convenient_vaccination_services",
                "patient_notification" : "patient_notification",
                "enhanced_vaccination_systems" : "enhanced_vaccination_systems",
                "motivation" : "motivation",
                "announcement" : "announcement",
                "vaccination_data_from_emr" : "vaccination_data_from_emr"
              }
            }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : [ "node:og-group-ref:0:url" ] } } ]
    }
  }');
  $items['rules_send_email_for_article_posted_on_practice_page'] = entity_import('rules_config', '{ "rules_send_email_for_article_posted_on_practice_page" : {
      "LABEL" : "send email for article posted to practice page",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "node_insert" : [  ] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "article" : "article" } }
          }
        },
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } }
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
  return $items;
}
