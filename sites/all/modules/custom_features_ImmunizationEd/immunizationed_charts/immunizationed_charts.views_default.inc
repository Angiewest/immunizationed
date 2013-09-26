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
  $view->name = 'influenza_vaccination_charts_by_practice';
  $view->description = 'Produces influenza baseline charts from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Influenza Vaccination charts';
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
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Baseline doses of influenza vaccine and eligible visits';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
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
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: All Flu eligible estimated visits */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['label'] = 'Estimated Flu eligible visits';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Influenza */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Influenza doses';
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_value']['value']['min'] = '2012-08-15';
  $handler->display->display_options['filters']['field_reporting_period_value']['value']['max'] = '2013-02-01';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['operator_id'] = 'field_reporting_period_value_op';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['label'] = 'Reporting period';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['description'] = 'The start date of the reporting period';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['operator'] = 'field_reporting_period_value_op';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['identifier'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';

  /* Display: Practice/Line/eligible/doses */
  $handler = $view->new_display('panel_pane', 'Practice/Line/eligible/doses', 'panel_pane_2');
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

  /* Display: All sites/line/eligible/doses */
  $handler = $view->new_display('panel_pane', 'All sites/line/eligible/doses', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'Line Chart-All sites: Flu eligible visits & doses';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
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
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Visits) */
  $handler->display->display_options['fields']['field_visits_1']['id'] = 'field_visits_1';
  $handler->display->display_options['fields']['field_visits_1']['table'] = 'field_data_field_visits';
  $handler->display->display_options['fields']['field_visits_1']['field'] = 'field_visits';
  $handler->display->display_options['fields']['field_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_visits_1']['label'] = 'All Visits';
  $handler->display->display_options['fields']['field_visits_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visits_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: All Flu eligible estimated visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['label'] = 'Estimated Flu eligible visits';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Influenza doses';
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

  /* Display: All sites flu table */
  $handler = $view->new_display('panel_pane', 'All sites flu table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data for all sites flu baseline chart';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
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
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Visits) */
  $handler->display->display_options['fields']['field_visits_1']['id'] = 'field_visits_1';
  $handler->display->display_options['fields']['field_visits_1']['table'] = 'field_data_field_visits';
  $handler->display->display_options['fields']['field_visits_1']['field'] = 'field_visits';
  $handler->display->display_options['fields']['field_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_visits_1']['label'] = 'All Visits';
  $handler->display->display_options['fields']['field_visits_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visits_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: All Flu eligible estimated visits) */
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['id'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['table'] = 'field_data_field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['field'] = 'field_all_flu_eligible_est_visit';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['label'] = 'Estimated Flu eligible visits';
  $handler->display->display_options['fields']['field_all_flu_eligible_est_visit']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza_1']['id'] = 'field_influenza_1';
  $handler->display->display_options['fields']['field_influenza_1']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza_1']['label'] = 'Influenza doses';
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
  $export['influenza_vaccination_charts_by_practice'] = $view;

  $view = new view();
  $view->name = 'pneumo_vaccination_charts_by_practice';
  $view->description = 'Produces pneumo baseline charts from EMR data feed by practice';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline Pneumo Vaccination Charts';
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
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Estimated Pneumo eligible visits';
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_value']['value']['min'] = '2012-02-01';
  $handler->display->display_options['filters']['field_reporting_period_value']['value']['max'] = '2013-02-01';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['operator_id'] = 'field_reporting_period_value_op';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['label'] = 'Reporting period';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['description'] = 'The start date of the reporting period';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['operator'] = 'field_reporting_period_value_op';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['identifier'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';

  /* Display: Practice/Line/eligible/doses */
  $handler = $view->new_display('panel_pane', 'Practice/Line/eligible/doses', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo eligible visits & doses';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
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
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Estimated Pneumo eligible visits';
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

  /* Display: All sites line chart eligible */
  $handler = $view->new_display('panel_pane', 'All sites line chart eligible', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'Line Chart: Pneumo eligible visits & doses for all sites';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
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
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Estimated Pneumo eligible visits';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Estimated Pneumo eligible visits';
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

  /* Display: All sites pneumo table */
  $handler = $view->new_display('panel_pane', 'All sites pneumo table', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Data table for all sites pneumo eligilble';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit users with role CoIadmin';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Pneumo eligible estimated visits) */
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['id'] = 'field_pneumo_eligible_est_visits_1';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['table'] = 'field_data_field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['field'] = 'field_pneumo_eligible_est_visits';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo_eligible_est_visits_1']['label'] = 'Estimated Pneumo eligible visits';
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
  $export['pneumo_vaccination_charts_by_practice'] = $view;

  $view = new view();
  $view->name = 'tdap_vaccination_charts_by_practice';
  $view->description = 'Produces TDAP practice baseline charts from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Baseline TDAP Vaccination charts';
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
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_reporting_period_value']['value']['min'] = '2012-01-01';
  $handler->display->display_options['filters']['field_reporting_period_value']['value']['max'] = '2013-02-01';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['operator_id'] = 'field_reporting_period_value_op';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['label'] = 'Reporting period';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['description'] = 'The start date of the reporting period';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['operator'] = 'field_reporting_period_value_op';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['identifier'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';

  /* Display: Practice/Line/eligible/doses */
  $handler = $view->new_display('panel_pane', 'Practice/Line/eligible/doses', 'panel_pane_1');
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
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

  /* Display: All sites/line/eligible/doses */
  $handler = $view->new_display('panel_pane', 'All sites/line/eligible/doses', 'panel_pane_5');
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Reporting period start biweekly */
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['id'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['table'] = 'field_data_field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['field'] = 'field_reporting_period_start_biw';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['label'] = 'Reporting period start';
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period_start_biw']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: TDAP eligible estimated visits) */
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['id'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['table'] = 'field_data_field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['field'] = 'field_tdap_eligible_estimated_vi';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_tdap_eligible_estimated_vi']['label'] = 'Estimated TDAP eligible visits';
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
  $export['tdap_vaccination_charts_by_practice'] = $view;

  return $export;
}
