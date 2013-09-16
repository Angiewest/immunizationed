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
            'source' => 'visits',
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
            'source' => 'reporting_period_start',
            'target' => 'field_reporting_period:start',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'end',
            'target' => 'field_reporting_period:end',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Influenza',
            'target' => 'field_influenza',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Pneumo',
            'target' => 'field_pneumo',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'TDAP',
            'target' => 'field_tdap',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Total',
            'target' => 'field_total',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'flu_rate',
            'target' => 'field_influenza_vax_rate',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'pneum_rate',
            'target' => 'field_pneumo_vax_rate',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Tdap_rate',
            'target' => 'field_tdap_vax_rate',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'all_flu_rate_estimated_eligible',
            'target' => 'field_all_flu_eligible_estimated',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'pneumo_rate_estimated_eligible',
            'target' => 'field_pneumo_eligible_estimated_',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'tdap_rate_estimated_eligible',
            'target' => 'field_tdap_eligible_estimated_ra',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'tdap_visits_estimated',
            'target' => 'field_tdap_eligible_estimated_vi',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'pneumo_visits_estimated',
            'target' => 'field_pneumo_eligible_est_visits',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'baseline',
            'target' => 'field_baseline_indicator',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'reporting_period_start_biweekly',
            'target' => 'field_reporting_period_start_biw:start',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'all_flu_visits_estimated',
            'target' => 'field_all_flu_eligible_est_visit',
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
