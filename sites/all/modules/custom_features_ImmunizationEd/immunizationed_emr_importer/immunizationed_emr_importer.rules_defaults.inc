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
  $items['rules_delete_empty_emr_import_records'] = entity_import('rules_config', '{ "rules_delete_empty_emr_import_records" : {
      "LABEL" : "Delete empty emr import records",
      "PLUGIN" : "reaction rule",
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
