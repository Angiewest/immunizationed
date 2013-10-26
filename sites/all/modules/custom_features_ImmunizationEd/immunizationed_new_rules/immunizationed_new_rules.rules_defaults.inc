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
  $items['rules_redirect_to_practice_home_after_group_content_addition'] = entity_import('rules_config', '{ "rules_redirect_to_practice_home_after_group_content_addition" : {
      "LABEL" : "Redirect to practice home after group content addition",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [  ], "node_update" : [  ] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_ref" } },
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
                "practice_group" : "practice_group",
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
  return $items;
}
