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
  $feeds_importer->id = 'baseline_rate_importer';
  $feeds_importer->config = array(
    'name' => 'Baseline rate importer',
    'description' => 'Import baseline rates for practices',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
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
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Practice',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'epic_id',
            'target' => 'field_epic_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'period_eligible_flu_vax_rate',
            'target' => 'field_baseline_flu_vax_rate',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'period_eligible_pneumo_vax_rate',
            'target' => 'field_baseline_pneumo_vax_rate',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'period_eligible_tdap_vax_rate',
            'target' => 'field_baseline_tdap_vax_rate',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'practice_group',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['baseline_rate_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'emr_baseline_import';
  $feeds_importer->config = array(
    'name' => 'Baylor progress importer',
    'description' => 'importer for Baylor progress data from emr',
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
            'source' => 'date',
            'target' => 'field_visit_date:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'epic_id',
            'target' => 'field_epic_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'practice',
            'target' => 'field_practice',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'quarter',
            'target' => 'field_quarter',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'month',
            'target' => 'field_month',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'week',
            'target' => 'field_week',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jday',
            'target' => 'field_day_of_year',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'mday',
            'target' => 'field_day_of_month',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'year',
            'target' => 'field_year',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'biweek',
            'target' => 'field_biweek_number',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'daily_visits',
            'target' => 'field_visits',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'report_id',
            'target' => 'field_report_id',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          13 => array(
            'source' => 'baseline',
            'target' => 'field_baseline_indicator',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'reporting_period_start_biweekly',
            'target' => 'field_reporting_period_start_biw:start',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'daily_flu_indicated_sum',
            'target' => 'field_flu_vaccine_indicated_',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'daily_flu_eligible_at_visit_sum',
            'target' => 'field_all_flu_eligible_est_visit',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'daily_influenza',
            'target' => 'field_influenza',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'daily_tdap_indicated_sum',
            'target' => 'field_tdap_vaccine_indicated',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'daily_TDAP_eligible_at_visit_sum',
            'target' => 'field_tdap_eligible_estimated_vi',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'daily_TDAP',
            'target' => 'field_tdap',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'daily_pneumo_indicated_sum',
            'target' => 'field_pneumo_vaccine_indicated',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'daily_pneumo_eligible_at_visit_sum',
            'target' => 'field_pneumo_eligible_est_visits',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'daily_pneumo',
            'target' => 'field_pneumo',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'daily_reporting_period_start',
            'target' => 'field_reporting_period:start',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'daily_reporting_period_end',
            'target' => 'field_reporting_period:end',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'biweekly_reporting_period_start',
            'target' => 'field_reporting_period_start_biw:start',
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
  $export['emr_baseline_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pitt_progress_emr_importer';
  $feeds_importer->config = array(
    'name' => 'Pitt progress emr importer',
    'description' => 'importer for Pitt progress data from emr',
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
            'source' => 'date',
            'target' => 'field_visit_date:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'epic_id',
            'target' => 'field_epic_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'week',
            'target' => 'field_week',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'weekly_reporting_period_start',
            'target' => 'field_visit_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'practice',
            'target' => 'field_practice',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'quarter',
            'target' => 'field_quarter',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'month',
            'target' => 'field_month',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'year',
            'target' => 'field_year',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'biweek',
            'target' => 'field_biweek_number',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'baseline',
            'target' => 'field_baseline_indicator',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'weekly_flu_indicated',
            'target' => 'field_flu_vaccine_indicated_',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'weekly_flu_eligible',
            'target' => 'field_all_flu_eligible_est_visit',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          13 => array(
            'source' => 'report_id',
            'target' => 'field_report_id',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'biweekly_reporting_period_start',
            'target' => 'field_reporting_period_start_biw:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'weekly_visits',
            'target' => 'field_visits',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'weekly_influenza',
            'target' => 'field_influenza',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'weekly_pneumo',
            'target' => 'field_pneumo',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'weekly_tdap',
            'target' => 'field_tdap',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'weekly_tdap_eligible',
            'target' => 'field_tdap_eligible_estimated_vi',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'weekly_pneumo_indicated',
            'target' => 'field_pneumo_vaccine_indicated',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'weekly_pneumo_eligible',
            'target' => 'field_pneumo_eligible_est_visits',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'weekly_TDAP_indicated',
            'target' => 'field_tdap_vaccine_indicated',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'data',
            'target' => 'field_data_type',
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
  $export['pitt_progress_emr_importer'] = $feeds_importer;

  return $export;
}
