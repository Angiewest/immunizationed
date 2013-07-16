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
  $view->name = 'influenza_progress_charts_by_practice';
  $view->description = 'Produces chart from EMR data feed';
  $view->tag = 'charts';
  $view->base_table = 'node';
  $view->human_name = 'Influenza Progress charts by practice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cummulative Doses vs Target';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'unsubscribe';
  $handler->display->display_options['access']['group_id_arg'] = '1';
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
  $handler->display->display_options['style_options']['title'] = 'Vaccinations by period for %';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_influenza']['group_columns'] = array(
    'bundle' => 'bundle',
  );
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
  $handler->display->display_options['filters']['field_reporting_period_value']['default_date'] = 'now - 1 year';
  $handler->display->display_options['filters']['field_reporting_period_value']['default_to_date'] = 'now+1 week';
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['title'] = 'Cummulative Vaccinations vs Target';
  $handler->display->display_options['style_options']['vaxis_title'] = 'Doses';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
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
  $handler->display->display_options['filters']['field_reporting_period_value']['default_date'] = 'now - 1 year';
  $handler->display->display_options['filters']['field_reporting_period_value']['default_to_date'] = 'now + 1 week';
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';
  $handler->display->display_options['path'] = 'node/%/charts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Charts';
  $handler->display->display_options['menu']['description'] = 'Vaccination charts for your practice';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Line Chart pane */
  $handler = $view->new_display('panel_pane', 'Line Chart pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: All practices all vaccines';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '350';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
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
  $handler->display->display_options['filters']['field_reporting_period_value']['default_date'] = 'now - 1 year';
  $handler->display->display_options['filters']['field_reporting_period_value']['default_to_date'] = 'now + 1 week';
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';
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

  /* Display: Column Chart pane */
  $handler = $view->new_display('panel_pane', 'Column Chart pane', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Column Chart: All practices all vaccines';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Table Attachment */
  $handler = $view->new_display('attachment', 'Table Attachment', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Table of values feeding chart';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_visits' => 'field_visits',
    'field_influenza' => 'field_influenza',
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
    'field_visits' => array(
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'panel_pane_2' => 'panel_pane_2',
    'panel_pane_3' => 'panel_pane_3',
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Table pane */
  $handler = $view->new_display('panel_pane', 'Table pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Table of chart data';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reporting_period' => 'field_reporting_period',
    'field_influenza' => 'field_influenza',
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
    'field_influenza' => array(
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
  $export['influenza_progress_charts_by_practice'] = $view;

  $view = new view();
  $view->name = 'practice_vaccination_rate_emr_chart';
  $view->description = 'Produces chart from EMR data feed';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Practice vaccination rate EMR chart';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Practices: All Vaccinations from EMR';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
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
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period']['group_columns'] = array(
    'value2' => 'value2',
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
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: TD) */
  $handler->display->display_options['fields']['field_td']['id'] = 'field_td';
  $handler->display->display_options['fields']['field_td']['table'] = 'field_data_field_td';
  $handler->display->display_options['fields']['field_td']['field'] = 'field_td';
  $handler->display->display_options['fields']['field_td']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_td']['settings'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'practice-vaccination-rate-emr-chart';

  /* Display: Table pane */
  $handler = $view->new_display('panel_pane', 'Table pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'table of chart data';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_influenza' => 'field_influenza',
    'field_pneumo' => 'field_pneumo',
    'field_td' => 'field_td',
    'field_tdap' => 'field_tdap',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_influenza' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_td' => array(
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

  /* Display: Line Chart pane */
  $handler = $view->new_display('panel_pane', 'Line Chart pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: All practices all vaccines';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Column Chart pane */
  $handler = $view->new_display('panel_pane', 'Column Chart pane', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Column Chart: All practices all vaccines';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['practice_vaccination_rate_emr_chart'] = $view;

  $view = new view();
  $view->name = 'vaccination_charts_by_practice';
  $view->description = 'Produces chart from EMR data feed';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vaccination charts by practice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vaccination History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'unsubscribe';
  $handler->display->display_options['access']['group_id_arg'] = '1';
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
  $handler->display->display_options['style_options']['title'] = 'Vaccinations by period for %';
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
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period']['group_columns'] = array(
    'value2' => 'value2',
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
  /* Field: SUM(Content: Influenza) */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: SUM(Content: Pneumo) */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
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
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
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
  $handler->display->display_options['filters']['field_reporting_period_value']['default_date'] = 'now - 1 year';
  $handler->display->display_options['filters']['field_reporting_period_value']['default_to_date'] = 'now+1 week';
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vaccination Charts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Vaccination History';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
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
  $handler->display->display_options['filters']['field_reporting_period_value']['default_date'] = 'now - 1 year';
  $handler->display->display_options['filters']['field_reporting_period_value']['default_to_date'] = 'now + 1 week';
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';
  $handler->display->display_options['path'] = 'node/%/charts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Charts';
  $handler->display->display_options['menu']['description'] = 'Vaccination charts for your practice';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Table pane */
  $handler = $view->new_display('panel_pane', 'Table pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'table of chart data';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_influenza' => 'field_influenza',
    'field_pneumo' => 'field_pneumo',
    'field_td' => 'field_td',
    'field_tdap' => 'field_tdap',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_influenza' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pneumo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_td' => array(
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

  /* Display: Line Chart pane */
  $handler = $view->new_display('panel_pane', 'Line Chart pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Line Chart: All practices all vaccines';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['width'] = '640';
  $handler->display->display_options['style_options']['height'] = '350';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
  /* Filter criterion: Content: Reporting period -  start date (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_value']['id'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_value']['field'] = 'field_reporting_period_value';
  $handler->display->display_options['filters']['field_reporting_period_value']['operator'] = 'between';
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
  $handler->display->display_options['filters']['field_reporting_period_value']['default_date'] = 'now - 1 year';
  $handler->display->display_options['filters']['field_reporting_period_value']['default_to_date'] = 'now + 1 week';
  $handler->display->display_options['filters']['field_reporting_period_value']['year_range'] = '-2:+1';
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

  /* Display: Column Chart pane */
  $handler = $view->new_display('panel_pane', 'Column Chart pane', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Column Chart: All practices all vaccines';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'ColumnChart';
  $handler->display->display_options['style_options']['width'] = '400';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 1;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Attachment 2 */
  $handler = $view->new_display('attachment', 'Attachment 2', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Vaccinations by period for %';
  $handler->display->display_options['style_options']['type'] = 'BarChart';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['isstacked'] = 0;
  $handler->display->display_options['style_options']['pointsize'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
    'panel_pane_3' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Flu progress pane */
  $handler = $view->new_display('panel_pane', 'Flu progress pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Line Chart: Cummulative flu doses vs target';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'google_chart_tools_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_reporting_period',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['title'] = 'Cummulative Influenza Doses vs Target';
  $handler->display->display_options['style_options']['vaxis_title'] = 'Doses';
  $handler->display->display_options['style_options']['width'] = '820';
  $handler->display->display_options['style_options']['height'] = '300';
  $handler->display->display_options['style_options']['isstacked'] = 1;
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
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_reporting_period']['group_columns'] = array(
    'value2' => 'value2',
  );
  /* Field: Content: Influenza */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $export['vaccination_charts_by_practice'] = $view;

  return $export;
}
