<?php
/**
 * @file
 * immunizationed_practice.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function immunizationed_practice_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'practice_crew';
  $view->description = 'views of the practices users with special roles';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Practice Crew';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'unsubscribe';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'field_salutations' => 'field_salutations',
    'field_last_names' => 'field_last_names',
    'field_responsible_role' => 'field_responsible_role',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_salutations' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_names' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsible_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'itty-bitty';
  /* Field: User: Salutation */
  $handler->display->display_options['fields']['field_salutations']['id'] = 'field_salutations';
  $handler->display->display_options['fields']['field_salutations']['table'] = 'field_data_field_salutations';
  $handler->display->display_options['fields']['field_salutations']['field'] = 'field_salutations';
  $handler->display->display_options['fields']['field_salutations']['label'] = '';
  $handler->display->display_options['fields']['field_salutations']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_names']['id'] = 'field_last_names';
  $handler->display->display_options['fields']['field_last_names']['table'] = 'field_data_field_last_names';
  $handler->display->display_options['fields']['field_last_names']['field'] = 'field_last_names';
  $handler->display->display_options['fields']['field_last_names']['label'] = '';
  $handler->display->display_options['fields']['field_last_names']['element_label_colon'] = FALSE;
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['label'] = '';
  $handler->display->display_options['fields']['field_responsible_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
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
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Responsible role (field_responsible_role) */
  $handler->display->display_options['filters']['field_responsible_role_tid']['id'] = 'field_responsible_role_tid';
  $handler->display->display_options['filters']['field_responsible_role_tid']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['filters']['field_responsible_role_tid']['field'] = 'field_responsible_role_tid';
  $handler->display->display_options['filters']['field_responsible_role_tid']['value'] = array(
    6 => '6',
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_responsible_role_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_responsible_role_tid']['vocabulary'] = 'special_practice_role';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['practice_crew'] = $view;

  return $export;
}
