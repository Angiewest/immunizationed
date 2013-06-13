<?php
/**
 * @file
 * immunizationed_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function immunizationed_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'emr_importer';
  $feeds_importer->config = array(
    'name' => 'EMR importer',
    'description' => 'Importer for CaRe data',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Report ID',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Report ID',
            'target' => 'field_report_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Start',
            'target' => 'field_reporting_period:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'end',
            'target' => 'field_reporting_period:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Epic ID#',
            'target' => 'field_epic_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Practice ID',
            'target' => 'og_group_ref',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => '# Visits',
            'target' => 'field_visits',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Influenza',
            'target' => 'field_influenza',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Pneumo',
            'target' => 'field_pneumo',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'TDAP',
            'target' => 'field_tdap',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'TD',
            'target' => 'field_td',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Total',
            'target' => 'field_total',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'vaccination_data_from_emr',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['emr_importer'] = $feeds_importer;

  return $export;
}
