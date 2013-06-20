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
            'source' => 'Report ID',
            'target' => 'field_report_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'start',
            'target' => 'field_reporting_period:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'end',
            'target' => 'field_reporting_period:end',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Epic ID#',
            'target' => 'field_epic_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Practice ID',
            'target' => 'og_group_ref',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => '# Visits',
            'target' => 'field_visits',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Influenza',
            'target' => 'field_influenza',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Pneumo',
            'target' => 'field_pneumo',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'TDAP',
            'target' => 'field_tdap',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'TD',
            'target' => 'field_td',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Total',
            'target' => 'field_total',
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

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'user_import_form';
  $feeds_importer->config = array(
    'name' => 'User import form',
    'description' => 'User import feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml',
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          5 => 0,
          6 => 0,
          7 => 0,
          4 => 0,
          8 => 0,
          3 => 0,
        ),
        'update_existing' => '2',
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'mail',
            'target' => 'mail',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Salutation',
            'target' => 'field_salutations',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'First Name',
            'target' => 'field_first_names',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Last Name',
            'target' => 'field_last_names',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'practice job',
            'target' => 'field_practice_jobs',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          7 => array(
            'source' => 'special practice role',
            'target' => 'field_responsible_role',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'defuse_mail' => 0,
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['user_import_form'] = $feeds_importer;

  return $export;
}
