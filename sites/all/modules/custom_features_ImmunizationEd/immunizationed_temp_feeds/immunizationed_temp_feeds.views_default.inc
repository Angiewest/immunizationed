<?php
/**
 * @file
 * immunizationed_temp_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function immunizationed_temp_feeds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'date_changed_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Date Changed View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Date Changed View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
    'task' => 'task',
  );

  /* Display: Date Changed Assembly Step */
  $handler = $view->new_display('page', 'Date Changed Assembly Step', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Date Changed Assembly Step View';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Task start date */
  $handler->display->display_options['fields']['field_task_start_date']['id'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['field'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Task due date */
  $handler->display->display_options['fields']['field_task_due_date']['id'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['field'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['path'] = 'date-changed-view';

  /* Display: Assembly Instructions Date Changed */
  $handler = $view->new_display('page', 'Assembly Instructions Date Changed', 'page_1');
  $handler->display->display_options['display_description'] = 'Assembly instructions changes for dates';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Start date day offset from enrollment */
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['id'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['table'] = 'field_data_field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['field'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Due date day offset from enrollment */
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['id'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['field'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
    'roadmap_waypoint' => 'roadmap_waypoint',
  );
  $handler->display->display_options['path'] = 'date_changed_assembly_instructions';

  /* Display: assembly step export */
  $handler = $view->new_display('views_data_export', 'assembly step export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Task start date */
  $handler->display->display_options['fields']['field_task_start_date']['id'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['field'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Task due date */
  $handler->display->display_options['fields']['field_task_due_date']['id'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['field'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['path'] = 'assembly-step-export';

  /* Display: assembly instructions export */
  $handler = $view->new_display('views_data_export', 'assembly instructions export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Start date day offset from enrollment */
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['id'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['table'] = 'field_data_field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['field'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Due date day offset from enrollment */
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['id'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['field'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
    'roadmap_waypoint' => 'roadmap_waypoint',
  );
  $handler->display->display_options['path'] = 'assembly-instructions-export';
  $export['date_changed_view'] = $view;

  return $export;
}
