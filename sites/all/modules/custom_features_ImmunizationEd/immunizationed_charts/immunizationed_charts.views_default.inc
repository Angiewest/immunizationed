<?php
/**
 * @file
 * immunizationed_charts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function immunizationed_charts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'baseline_charts_all_sites';
  $view->description = 'Produces influenza baseline charts from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Flu Charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of influenza vaccine and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  $handler->display->display_options['fields']['field_visits']['label'] = 'All Visits';
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu vaccine indicated ) */
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['id'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['table'] = 'field_data_field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['field'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['label'] = 'Flu indicated ';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu eligible visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['label'] = 'Flu eligible';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Flu doses';
  $handler->display->display_options['fields']['field_influenza_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['min'] = '2012-08-12';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['max'] = '2013-02-10';

  /* Display: All sites flu chart */
  $handler = $view->new_display('panel_pane', 'All sites flu chart', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'All sites flu baseline chart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of influenza vaccine and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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

  /* Display: All sites flu table */
  $handler = $view->new_display('panel_pane', 'All sites flu table', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'All sites flu baseline table';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_visit_date' => 'field_visit_date',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_visits' => 'field_visits',
    'field_flu_vaccine_indicated_' => 'field_flu_vaccine_indicated_',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_flu_vaccine_indicated_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu vaccine indicated ) */
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['id'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['table'] = 'field_data_field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['field'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['label'] = 'Flu indicated ';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu eligible visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Flu doses';
  $handler->display->display_options['fields']['field_influenza_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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

  /* Display: All sites all visits table */
  $handler = $view->new_display('panel_pane', 'All sites all visits table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'All sites flu baseline table';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_visit_date' => 'field_visit_date',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_visits' => 'field_visits',
    'field_flu_vaccine_indicated_' => 'field_flu_vaccine_indicated_',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_flu_vaccine_indicated_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu vaccine indicated ) */
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['id'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['table'] = 'field_data_field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['field'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['label'] = 'Flu indicated ';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Flu eligible visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Flu doses';
  $handler->display->display_options['fields']['field_influenza_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $export['baseline_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'baseline_charts_captions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Charts Captions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'caption' => 'caption',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';

  /* Display: Baseline flu caption */
  $handler = $view->new_display('panel_pane', 'Baseline flu caption', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'caption' => 'caption',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Baseline doses of influenza vaccine and eligible visits';

  /* Display: Baseline charts header */
  $handler = $view->new_display('panel_pane', 'Baseline charts header', 'panel_pane_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'caption' => 'caption',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'About your baseline data';

  /* Display: Baseline pneumo caption */
  $handler = $view->new_display('panel_pane', 'Baseline pneumo caption', 'panel_pane_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'caption' => 'caption',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Baseline doses of Pneumo and eligible visits';

  /* Display: Baseline TDAP caption */
  $handler = $view->new_display('panel_pane', 'Baseline TDAP caption', 'panel_pane_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'caption' => 'caption',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Baseline doses of TDAP and eligible visits';
  $export['baseline_charts_captions'] = $view;

  $view = new view();
  $view->name = 'baseline_pneumo_charts_all_sites';
  $view->description = 'Produces pneumo baseline charts from EMR data feed by practice';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Pneumo Charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of Pneumo and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['label'] = 'Pneumo indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Pneumo eligible';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo_1']['id'] = 'field_pneumo_1';
  $handler->display->display_options['fields']['field_pneumo_1']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo_1']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_1']['label'] = 'Pneumo Doses';
  $handler->display->display_options['fields']['field_pneumo_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['min'] = '2012-02-26';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['max'] = '2013-02-10';

  /* Display: Baseline pneumo */
  $handler = $view->new_display('panel_pane', 'Baseline pneumo', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo eligible visits & doses for all sites';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
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

  /* Display: baseline pneumo table */
  $handler = $view->new_display('panel_pane', 'baseline pneumo table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data table for all sites pneumo eligilble';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_pneumo_vaccine_indicated' => 'field_pneumo_vaccine_indicated',
    'field_pneumo_eligible_est_visits_1' => 'field_pneumo_eligible_est_visits_1',
    'field_pneumo_1' => 'field_pneumo_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo_vaccine_indicated' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo_eligible_est_visits_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $export['baseline_pneumo_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'baseline_tdap_charts_all_sites';
  $view->description = 'Produces TDAP practice baseline charts from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline TDAP charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of TDAP and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['label'] = 'TDAP indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'TDAP eligible';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'TDAP doses';
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['min'] = '2012-02-26';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['max'] = '2013-02-10';

  /* Display: baseline tdap charts */
  $handler = $view->new_display('panel_pane', 'baseline tdap charts', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'Line Chart: TDAP eligible visits & doses for all sites';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of TDAP and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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

  /* Display: All sites TDAP table */
  $handler = $view->new_display('panel_pane', 'All sites TDAP table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data table for all sites TDAP eligible and doses';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_reporting_period' => 'field_reporting_period',
    'field_tdap_eligible_estimated_vi' => 'field_tdap_eligible_estimated_vi',
    'field_tdap' => 'field_tdap',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tdap_eligible_estimated_vi' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tdap' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $export['baseline_tdap_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'clone_of_baseline_tdap_vaccination_charts';
  $view->description = 'Produces TDAP practice baseline charts from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline TDAP charts - practices';
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
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of TDAP and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['label'] = 'TDAP indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'TDAP eligible visits';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['min'] = '2012-02-26';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['max'] = '2013-02-10';

  /* Display: Baseline Tdap charts */
  $handler = $view->new_display('panel_pane', 'Baseline Tdap charts', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Line Chart: TDAP eligible visits & doses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of TDAP and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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

  /* Display: Practice TDAP table */
  $handler = $view->new_display('panel_pane', 'Practice TDAP table', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Data table for practice TDAP eligible and doses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_reporting_period' => 'field_reporting_period',
    'field_tdap_eligible_estimated_vi' => 'field_tdap_eligible_estimated_vi',
    'field_tdap' => 'field_tdap',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tdap_eligible_estimated_vi' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tdap' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $export['clone_of_baseline_tdap_vaccination_charts'] = $view;

  $view = new view();
  $view->name = 'flu_progress_charts_all_sites';
  $view->description = 'Produces influenza progress charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress flu charts - all sites';
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
  $handler->display->display_options['style_options']['pointsize'] = '5';
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

  /* Display: Flu progress chart */
  $handler = $view->new_display('panel_pane', 'Flu progress chart', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'Line Chart-All sites: Flu eligible visits & doses';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
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
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative flu target';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
if(isset($data->field_field_target_flu_doses[0][\'raw\'][\'value\'])){
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'];
}
else{
$static = $static;
}
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_2']['label'] = 'Cumulative flu doses';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
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

  /* Display: All sites flu table */
  $handler = $view->new_display('panel_pane', 'All sites flu table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data for all sites flu baseline chart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_visit_date' => 'field_visit_date',
    'field_visits' => 'field_visits',
    'field_flu_vaccine_indicated_' => 'field_flu_vaccine_indicated_',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_target_flu_doses' => 'field_target_flu_doses',
    'field_influenza' => 'field_influenza',
    'php_2' => 'php_2',
    'php_4' => 'php_4',
    'php_3' => 'php_3',
    'php_1' => 'php_1',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_flu_vaccine_indicated_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target_flu_doses' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
if(isset($data->field_field_target_flu_doses[0][\'raw\'][\'value\'])){
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'];
}
else{
$static = $static;
}
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
if(isset($data->field_field_influenza[0][\'raw\'][\'value\'])){
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'];
}
else{
$static = $static;
}
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
  $export['flu_progress_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'influenza_vaccination_charts_by_practice';
  $view->description = 'Produces influenza baseline charts from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Flu Charts - practices';
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
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of influenza vaccine and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  $handler->display->display_options['fields']['field_visits']['label'] = 'All Visits';
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Content: Flu vaccine indicated ) */
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['id'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['table'] = 'field_data_field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['field'] = 'field_flu_vaccine_indicated_';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_flu_vaccine_indicated_']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: SUM(Content: Flu eligible visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Flu doses';
  $handler->display->display_options['fields']['field_influenza_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['min'] = '2012-08-26';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['max'] = '2013-02-10';

  /* Display: Practice flu baseline chart */
  $handler = $view->new_display('panel_pane', 'Practice flu baseline chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Flu eligible visits & doses';
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

  /* Display: Practice Flu table */
  $handler = $view->new_display('panel_pane', 'Practice Flu table', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'data for flu eligible and visits';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $export['influenza_vaccination_charts_by_practice'] = $view;

  $view = new view();
  $view->name = 'pneumo_vaccination_charts_by_practice';
  $view->description = 'Produces pneumo baseline charts from EMR data feed by practice';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Pneumo Charts - practices';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period_start_biw',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of Pneumo and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['label'] = 'Pneumo indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Pneumo eligible';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo_1']['id'] = 'field_pneumo_1';
  $handler->display->display_options['fields']['field_pneumo_1']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo_1']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_1']['label'] = 'Pneumo Doses';
  $handler->display->display_options['fields']['field_pneumo_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['min'] = '2012-02-01';
  $handler->display->display_options['filters']['field_reporting_period_start_biw_value']['value']['max'] = '2013-02-28';

  /* Display: Pneumo charts */
  $handler = $view->new_display('panel_pane', 'Pneumo charts', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo eligible visits & doses';
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

  /* Display: Practice pneumo table */
  $handler = $view->new_display('panel_pane', 'Practice pneumo table', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Data table for practice pneumo eligible and visits';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_reporting_period' => 'field_reporting_period',
    'field_pneumo_eligible_est_visits_1' => 'field_pneumo_eligible_est_visits_1',
    'field_pneumo_1' => 'field_pneumo_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo_eligible_est_visits_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  $export['pneumo_vaccination_charts_by_practice'] = $view;

  $view = new view();
  $view->name = 'progress_combined_charts_all_sites';
  $view->description = 'Produces influenza progress charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress combined charts - all sites';
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

  /* Display: Combined table */
  $handler = $view->new_display('panel_pane', 'Combined table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data for all sites combined baseline chart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_visit_date' => 'field_visit_date',
    'field_visits' => 'field_visits',
    'field_flu_vaccine_indicated_' => 'field_flu_vaccine_indicated_',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_target_flu_doses' => 'field_target_flu_doses',
    'field_influenza' => 'field_influenza',
    'php_2' => 'php_2',
    'php_4' => 'php_4',
    'php_3' => 'php_3',
    'php_1' => 'php_1',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visit_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_flu_vaccine_indicated_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target_flu_doses' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['label'] = 'Pneumo indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
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
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['label'] = 'TDAP indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'TDAP eligible';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
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
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'] +
$data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'] +
$data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'] +
$data->field_field_tdap[0][\'raw\'][\'value\'] +
$data->field_field_pneumo[0][\'raw\'][\'value\'];
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

  /* Display: Combined charts */
  $handler = $view->new_display('panel_pane', 'Combined charts', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'All sites combined progress chart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['title'] = 'Vaccinations vs Goal';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['label'] = 'Pneumo indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
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
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['label'] = 'TDAP indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'TDAP eligible';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
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
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Vaccination Goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'] +
$data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'] +
$data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Vaccines';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'] +
$data->field_field_tdap[0][\'raw\'][\'value\'] +
$data->field_field_pneumo[0][\'raw\'][\'value\'];
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
  $export['progress_combined_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'progress_combined_charts_practices';
  $view->description = 'Produces progress cumulative line charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress combined cumulative line charts - practices';
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
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  $export['progress_combined_charts_practices'] = $view;

  $view = new view();
  $view->name = 'progress_flu_charts_practices';
  $view->description = 'Produces influenza progress charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress flu charts - practices';
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
  $handler->display->display_options['style_options']['title'] = 'Flu Vaccinations vs Goal';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '5';
  /* Relationship: OG membership: Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node']['id'] = 'og_membership_related_node';
  $handler->display->display_options['relationships']['og_membership_related_node']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node']['field'] = 'og_membership_related_node';
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
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['fail'] = 'access denied';
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

  /* Display: Flu progress chart */
  $handler = $view->new_display('panel_pane', 'Flu progress chart', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'Line Chart-All sites: Flu eligible visits & doses';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['php_1']['label'] = 'Goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
if(isset($data->field_field_target_flu_doses[0][\'raw\'][\'value\'])){
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'];
}
else{
$static = $static;
}
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
if(isset($data->field_field_influenza[0][\'raw\'][\'value\'])){
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'];
}
else{
$static = $static;
}
print $static;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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

  /* Display: progress flu table */
  $handler = $view->new_display('panel_pane', 'progress flu table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data for all sites flu baseline chart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_visits_1' => 'field_visits_1',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visits_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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

  /* Display: Flu chart small */
  $handler = $view->new_display('panel_pane', 'Flu chart small', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Line Chart-All sites: Flu eligible visits & doses';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['title'] = 'Flu vaccinations vs goal';
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '250';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  $handler->display->display_options['fields']['php_2']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['php_1']['label'] = 'Goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static + $data->field_field_target_flu_doses[0][\'raw\'][\'value\'];
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
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  $export['progress_flu_charts_practices'] = $view;

  $view = new view();
  $view->name = 'progress_gauges_practices';
  $view->description = 'Produces progress guages from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Gauges - practices';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'php' => 'php',
    'php_1' => 'php_1',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_visits' => 'field_visits',
    'field_flu_vaccine_indicated_' => 'field_flu_vaccine_indicated_',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_target_flu_doses' => 'field_target_flu_doses',
    'field_influenza' => 'field_influenza',
    'php_2' => 'php_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_visits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_flu_vaccine_indicated_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target_flu_doses' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative flu doses';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
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

  /* Display: Table */
  $handler = $view->new_display('panel_pane', 'Table', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'All sites combined progress gauges data table';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Given';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_influenza[0][\'raw\'][\'value\'] +
$data->field_field_tdap[0][\'raw\'][\'value\'] +
$data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_flu_doses[0][\'raw\'][\'value\'] +
$data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'] +
$data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['label'] = 'Pneumo indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
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
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['label'] = 'TDAP indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'TDAP eligible';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
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
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.og-membership',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Guages */
  $handler = $view->new_display('panel_pane', 'Guages', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['type'] = 'Gauge';
  $handler->display->display_options['style_options']['width'] = '800';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['progress_gauges_practices'] = $view;

  $view = new view();
  $view->name = 'progress_pneumo_charts_all_sites';
  $view->description = 'Produces pneumo progress bar charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Pneumo bar charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'Pneumo Vaccinations & Eligible Patients';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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

  /* Display: pneumo progress chart */
  $handler = $view->new_display('panel_pane', 'pneumo progress chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo doses vs target';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Eligible Patients';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Vaccinated Patients';
  $handler->display->display_options['fields']['field_pneumo']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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
  $export['progress_pneumo_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'progress_pneumo_charts_practices';
  $view->description = 'Produces pneumo cumulative line progress charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Pneumo charts - practices Cumulative Line';
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
  $handler->display->display_options['style_options']['title'] = 'Cumulative Doses of Pneumo vaccine vs goal';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['type'] = 'og';
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

  /* Display: pneumo progress chart */
  $handler = $view->new_display('panel_pane', 'pneumo progress chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo doses vs target';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
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
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['empty'] = '0';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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

  /* Display: Practice Pneumo table */
  $handler = $view->new_display('panel_pane', 'Practice Pneumo table', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'data for pneumo doses vs target';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  $export['progress_pneumo_charts_practices'] = $view;

  $view = new view();
  $view->name = 'progress_pneumo_charts_practices_cumulative_line';
  $view->description = 'Produces pneumo progress bar charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Pneumo bar chart - practices';
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
  $handler->display->display_options['style_options']['title'] = 'Pneumo Vaccinations & Eligible Patients';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['type'] = 'og';
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

  /* Display: pneumo progress chart */
  $handler = $view->new_display('panel_pane', 'pneumo progress chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo doses vs target';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
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
  $handler->display->display_options['fields']['field_visits']['empty'] = '0';
  $handler->display->display_options['fields']['field_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['label'] = 'Pneumo indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Eligible patients';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['empty'] = '0';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Vaccinated patients';
  $handler->display->display_options['fields']['field_pneumo']['empty'] = '0';
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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

  /* Display: Practice Pneumo table */
  $handler = $view->new_display('panel_pane', 'Practice Pneumo table', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'data for pneumo doses vs target';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  $export['progress_pneumo_charts_practices_cumulative_line'] = $view;

  $view = new view();
  $view->name = 'progress_pneumo_cumulative_line_charts_all_sites';
  $view->description = 'Produces pneumo cumulative line progress charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Pneumo cumulative line charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'Cumulative Doses of Pneumo vaccine vs goal';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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

  /* Display: pneumo progress chart */
  $handler = $view->new_display('panel_pane', 'pneumo progress chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo doses vs target';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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

  /* Display: Practice Pneumo table */
  $handler = $view->new_display('panel_pane', 'Practice Pneumo table', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'data for pneumo doses vs target';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  /* Field: SUM(Content: Pneumo vaccine indicated) */
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['id'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['table'] = 'field_data_field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['field'] = 'field_pneumo_vaccine_indicated';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['id'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['label'] = 'Estimated Pneumo eligible visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target pneumo doses) */
  $handler->display->display_options['fields']['field_target_pneumo_doses']['id'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['table'] = 'field_data_field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['field'] = 'field_target_pneumo_doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['label'] = 'Target Pneumo doses';
  $handler->display->display_options['fields']['field_target_pneumo_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_pneumo_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['label'] = 'Pneumo doses';
  $handler->display->display_options['fields']['field_pneumo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative Pneumo indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative Pneumo eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo_eligible_est_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative Pneumo goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_pneumo_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative Pneumo doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_pneumo[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $export['progress_pneumo_cumulative_line_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'progress_tdap_charts_all_sites';
  $view->description = 'Produces TDAP progress bar charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Tdap bar charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'TDAP Vaccinations & Eligible Patients';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated Patients';
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
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'Vaccinated Patients';
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
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

  /* Display: progress tdap chart */
  $handler = $view->new_display('panel_pane', 'progress tdap chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Flu doses vs target';
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
  $export['progress_tdap_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'progress_tdap_charts_practices';
  $view->description = 'Produces TDAP progress bar charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Tdap bar charts - practices';
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
  $handler->display->display_options['style_options']['title'] = 'TDAP Vaccinations & Eligible Patients';
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
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
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Eligible Patients';
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
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'TDAP doses';
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['type'] = 'og';
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

  /* Display: progress tdap chart */
  $handler = $view->new_display('panel_pane', 'progress tdap chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Flu doses vs target';
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
  $export['progress_tdap_charts_practices'] = $view;

  $view = new view();
  $view->name = 'progress_tdap_cumulative_line_charts_all_sites';
  $view->description = 'Produces TDAP cumulative line progress charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Tdap cumulative line charts - all sites';
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
  $handler->display->display_options['style_options']['title'] = 'Doses of TDAP vaccine vs goal';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
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
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target TDAP doses) */
  $handler->display->display_options['fields']['field_target_tdap_doses']['id'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['table'] = 'field_data_field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['field'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_tdap_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'TDAP doses';
  $handler->display->display_options['fields']['field_tdap']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => ' ',
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
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative TDAP eligible';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap_eligible_estimated_vi[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative TDAP goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative TDAP doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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

  /* Display: progress tdap chart */
  $handler = $view->new_display('panel_pane', 'progress tdap chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Flu doses vs target';
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

  /* Display: progress TDAP table */
  $handler = $view->new_display('panel_pane', 'progress TDAP table', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'data for TDAP doses vs target';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'us_short_date',
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
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target TDAP doses) */
  $handler->display->display_options['fields']['field_target_tdap_doses']['id'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['table'] = 'field_data_field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['field'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_tdap_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'TDAP doses';
  $handler->display->display_options['fields']['field_tdap']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative TDAP indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative TDAP eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap_eligible_estimated_vi[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative TDAP goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative TDAP doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  $export['progress_tdap_cumulative_line_charts_all_sites'] = $view;

  $view = new view();
  $view->name = 'progress_tdap_cumulative_line_charts_practices';
  $view->description = 'Produces TDAP progress cumulative line charts from EMR data feed';
  $view->tag = 'progress charts';
  $view->base_table = 'node';
  $view->human_name = 'Progress Tdap cumulative line charts - practices';
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
  $handler->display->display_options['style_options']['title'] = 'Cumulative doses of TDAP vaccine vs goal';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Visit date */
  $handler->display->display_options['fields']['field_visit_date']['id'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['table'] = 'field_data_field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['field'] = 'field_visit_date';
  $handler->display->display_options['fields']['field_visit_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_visit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
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
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target TDAP doses) */
  $handler->display->display_options['fields']['field_target_tdap_doses']['id'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['table'] = 'field_data_field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['field'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_tdap_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'TDAP doses';
  $handler->display->display_options['fields']['field_tdap']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => ' ',
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
$static = $static+ $data->field_field_visits[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative TDAP eligible';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap_eligible_estimated_vi[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative TDAP goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative TDAP doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref_target_id']['validate']['type'] = 'og';
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

  /* Display: progress tdap chart */
  $handler = $view->new_display('panel_pane', 'progress tdap chart', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: Flu doses vs target';
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

  /* Display: progress TDAP table */
  $handler = $view->new_display('panel_pane', 'progress TDAP table', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'data for TDAP doses vs target';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_reporting_period_start_biw' => 'field_reporting_period_start_biw',
    'field_all_flu_eligible_est_visit' => 'field_all_flu_eligible_est_visit',
    'field_influenza_1' => 'field_influenza_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period_start_biw' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_all_flu_eligible_est_visit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_influenza_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: SUM(Content: TDAP vaccine indicated) */
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['id'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['table'] = 'field_data_field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['field'] = 'field_tdap_vaccine_indicated';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_vaccine_indicated']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Target TDAP doses) */
  $handler->display->display_options['fields']['field_target_tdap_doses']['id'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['table'] = 'field_data_field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['field'] = 'field_target_tdap_doses';
  $handler->display->display_options['fields']['field_target_tdap_doses']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_target_tdap_doses']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_tdap_doses']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TDAP) */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap']['label'] = 'TDAP doses';
  $handler->display->display_options['fields']['field_tdap']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
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
  $handler->display->display_options['fields']['php_4']['label'] = 'Cumulative TDAP indicated';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap_vaccine_indicated[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_3']['label'] = 'Cumulative TDAP eligible';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap_eligible_estimated_vi[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php_1']['label'] = 'Cumulative TDAP goal';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$static = $static+ $data->field_field_target_tdap_doses[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: SUM(Global: PHP) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['group_type'] = 'sum';
  $handler->display->display_options['fields']['php']['label'] = 'Cumulative TDAP doses';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$static = $static+ $data->field_field_tdap[0][\'raw\'][\'value\'];
print $static; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  $export['progress_tdap_cumulative_line_charts_practices'] = $view;

  return $export;
}
