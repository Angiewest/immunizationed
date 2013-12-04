<?php
/**
 * @file
 * immunizationed_cdc_charts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function immunizationed_cdc_charts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'progress_combined_cumulative_line_charts_all_sites';
  $view->description = 'Produces progress cumulative line charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress combined cumulative line charts - all sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['title'] = 'Cummulative doses of influenza vaccine vs goal';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visit_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Visits) */
  $handler->display->display_options['fields']['field_visits']['id'] = 'field_visits';
  $handler->display->display_options['fields']['field_visits']['table'] = 'field_data_field_visits';
  $handler->display->display_options['fields']['field_visits']['field'] = 'field_visits';
  $handler->display->display_options['fields']['field_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu vaccine indicated ) */
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['id'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['table'] = 'field_data_field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['field'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu eligible visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['label'] = 'All Flu eligible estimated visits';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target influenza doses) */
  $handler->display->display_options['fields']['field_target_flu_doses']['id'] = 'field_target_flu_doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['table'] = 'field_data_field_target_flu_doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['field'] = 'field_target_flu_doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_flu_doses']['label'] = 'Target flu doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_flu_doses']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza']['label'] = 'Flu doses';
  $handler->display->display_options['fields']['field_influenza']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_2']['label'] = 'Cumulative visits';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative flu indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_flu_vaccine_indicated_[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative flu eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_all_flu_eligible_est_visit[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative flu goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative flu doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vaccination_data_from_emr' => 'vaccination_data_from_emr',
  );
  /* Filter criterion: Content: Reporting period start biweekly (field_reporting_period_start_biw) */
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['id'] = 'field_reporting_period_start_biw_value';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['field'] = 'field_reporting_period_start_biw_value';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['value'] = '2013-08-25';

  /* Display: Combined charts */
  $handler = $view->new_display('panel_pane', 'Combined charts', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Combined progress charts';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['title'] = 'All Vaccines vs Goal';
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '250';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Visits) */
  $handler->display->display_options['fields']['field_visits']['id'] = 'field_visits';
  $handler->display->display_options['fields']['field_visits']['table'] = 'field_data_field_visits';
  $handler->display->display_options['fields']['field_visits']['field'] = 'field_visits';
  $handler->display->display_options['fields']['field_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu eligible visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['label'] = 'All Flu eligible estimated visits';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['empty'] = '0';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target influenza doses) */
  $handler->display->display_options['fields']['field_target_flu_doses']['id'] = 'field_target_flu_doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['table'] = 'field_data_field_target_flu_doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['field'] = 'field_target_flu_doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_flu_doses']['label'] = 'Target flu doses';
  $handler->display->display_options['fields']['field_target_flu_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_flu_doses']['empty'] = '0';
  $handler->display->display_options['fields']['field_target_flu_doses']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_target_flu_doses']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza']['label'] = 'Flu doses';
  $handler->display->display_options['fields']['field_influenza']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_influenza']['empty'] = '0';
  $handler->display->display_options['fields']['field_influenza']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Pneumo eligible';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['empty'] = '0';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'TDAP eligible';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['empty'] = '0';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target TDAP doses) */
  $handler->display->display_options['fields']['field_target_tdap_doses']['id'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['table'] = 'field_data_field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['field'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_tdap_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_tdap_doses']['empty'] = '0';
  $handler->display->display_options['fields']['field_target_tdap_doses']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_2']['label'] = 'Cumulative visits';
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if (isset( $data->field_field_visits[0])){
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
}
else{
$static = $static;
}
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if(isset($data->field_field_target_flu_doses[0])){
  $flu = $data->field_field_target_flu_doses[0][\'raw\'][\'value\'];
}
else
  {
    $flu = 0;
  }
if(isset($data->field_field_target_tdap_doses[0])){
  $tdap = $data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
}
else{
  $tdap = 0;
}
if(isset($data->field_field_target_pneumo_doses[0])){
$pneumo = $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
}
else{
$pneumo = 0;
}
$static = $static + $pneumo + $flu + $tdap;
  print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Given';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if(isset($data->field_field_influenza[0])){
  $flu = $data->field_field_influenza[0][\'raw\'][\'value\'];
}
else
  {
    $flu = 0;
  }
if(isset($data->field_field_tdap[0])){
  $tdap = $data->field_field_tdap[0][\'raw\'][\'value\'];
}
else{
  $tdap = 0;
}
if(isset($data->field_field_pneumo[0])){
$pneumo = $data->field_field_pneumo[0][\'raw\'][\'value\'];
}
else{
$pneumo = 0;
}
$static = $static + $pneumo + $flu + $tdap;
  print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'user',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $export['progress_combined_cumulative_line_charts_all_sites'] = $view;

  return $export;
}
