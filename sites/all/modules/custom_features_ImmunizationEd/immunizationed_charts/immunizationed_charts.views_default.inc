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
  $handler->display->display_options['title'] = 'Practice vaccination rate EMR chart';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart_views';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_report_id',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_influenza',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'p';
  $handler->display->display_options['style_options']['width'] = '600';
  $handler->display->display_options['style_options']['height'] = '400';
  $handler->display->display_options['style_options']['label_append_value'] = 0;
  /* Field: Content: Influenza */
  $handler->display->display_options['fields']['field_influenza']['id'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['table'] = 'field_data_field_influenza';
  $handler->display->display_options['fields']['field_influenza']['field'] = 'field_influenza';
  $handler->display->display_options['fields']['field_influenza']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Pneumo */
  $handler->display->display_options['fields']['field_pneumo']['id'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['table'] = 'field_data_field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['field'] = 'field_pneumo';
  $handler->display->display_options['fields']['field_pneumo']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: TD */
  $handler->display->display_options['fields']['field_td']['id'] = 'field_td';
  $handler->display->display_options['fields']['field_td']['table'] = 'field_data_field_td';
  $handler->display->display_options['fields']['field_td']['field'] = 'field_td';
  $handler->display->display_options['fields']['field_td']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: TDAP */
  $handler->display->display_options['fields']['field_tdap']['id'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['table'] = 'field_data_field_tdap';
  $handler->display->display_options['fields']['field_tdap']['field'] = 'field_tdap';
  $handler->display->display_options['fields']['field_tdap']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
    'vaccination_data_from_emr' => 'vaccination_data_from_emr',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'practice-vaccination-rate-emr-chart';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['practice_vaccination_rate_emr_chart'] = $view;

  return $export;
}
