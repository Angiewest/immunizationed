<?php
/**
 * @file
 * immunizationed_feeds.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function immunizationed_feeds_default_rules_configuration() {
  $items = array();
  $items['rules_delete_empty_emr_import_records'] = entity_import('rules_config', '{ "rules_delete_empty_emr_import_records" : {
      "LABEL" : "Delete empty emr import records",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "import" ],
      "REQUIRES" : [ "rules", "feeds" ],
      "ON" : [ "feeds_import_emr_importer" ],
      "IF" : [
        { "data_is_empty" : { "data" : [ "node:title" ] } },
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "vaccination_data_from_emr" : "vaccination_data_from_emr" } }
          }
        }
      ],
      "DO" : [ { "feeds_skip_item" : { "entity" : [ "node" ] } } ]
    }
  }');
  return $items;
}
