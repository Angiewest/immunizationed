<?php
/**
 * @file
 * immunizationed_emr_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function immunizationed_emr_importer_feeds_importer_default() {
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
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'private://emr_reports',
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
        'bundle' => 'vaccination_data_from_emr',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'end',
            'target' => 'field_reporting_period:end',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'week',
            'target' => 'field_week',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Influenza',
            'target' => 'field_influenza',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'visits',
            'target' => 'field_visits',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'flu_rate',
            'target' => 'field_influenza_vax_rate',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Pneumo',
            'target' => 'field_pneumo',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'TDAP',
            'target' => 'field_tdap',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Tdap_rate',
            'target' => 'field_tdap_vax_rate',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'epic_id',
            'target' => 'field_epic_id',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Total',
            'target' => 'field_total',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'report_id',
            'target' => 'field_report_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'reporting_period_start',
            'target' => 'field_reporting_period:start',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          14 => array(
            'source' => 'og_group_ref',
            'target' => 'og_group_ref',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'pneum_rate',
            'target' => 'field_pneumo_vax_rate',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 0,
        'skip_hash_check' => 0,
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
