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
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => -1,
        'author' => 0,
        'authorize' => TRUE,
        'mappings' => array(),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => NULL,
      ),
    ),
    'content_type' => 'vaccination_data_from_emr',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['emr_importer'] = $feeds_importer;

  return $export;
}
