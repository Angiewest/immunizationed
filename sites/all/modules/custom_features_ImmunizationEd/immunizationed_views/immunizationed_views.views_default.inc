<?php
/**
 * @file
 * immunizationed_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function immunizationed_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_practices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Public groups page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Practices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Practice';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['label'] = 'Join Practice';
  $handler->display->display_options['fields']['group_group']['type'] = 'og_group_subscribe';
  $handler->display->display_options['fields']['group_group']['settings'] = array(
    'field_name' => 'og_user_node',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Team';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'practice_group' => 'practice_group',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'practices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Practices';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $export['all_practices'] = $view;

  $view = new view();
  $view->name = 'assembly_step_progress_by_practice';
  $view->description = 'view of assembly step progress by practice';
  $view->tag = 'practice managment';
  $view->base_table = 'node';
  $view->human_name = 'Overdue assembly steps by practice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'og_user_node_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'gid_1' => 'gid_1',
    'og_group_ref' => 'og_group_ref',
    'field_date_task_completed' => 'field_date_task_completed',
    'field_task_start_date' => 'field_task_start_date',
    'field_date_started' => 'field_date_started',
    'field_task_due_date' => 'field_task_due_date',
  );
  $handler->display->display_options['style_options']['default'] = 'field_task_due_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_task_completed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_started' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task_due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid_1']['id'] = 'gid_1';
  $handler->display->display_options['fields']['gid_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid_1']['field'] = 'gid';
  $handler->display->display_options['fields']['gid_1']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid_1']['label'] = 'Practice ID';
  $handler->display->display_options['fields']['gid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid_1']['separator'] = '';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Practice';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Date Task Completed */
  $handler->display->display_options['fields']['field_date_task_completed']['id'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['field'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['label'] = 'Date Completed';
  $handler->display->display_options['fields']['field_date_task_completed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_task_completed']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Task start date */
  $handler->display->display_options['fields']['field_task_start_date']['id'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['field'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['field_task_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_task_start_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_task_start_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Task started date */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Task due date */
  $handler->display->display_options['fields']['field_task_due_date']['id'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['field'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Task start date (field_task_start_date) */
  $handler->display->display_options['filters']['field_task_start_date_value']['id'] = 'field_task_start_date_value';
  $handler->display->display_options['filters']['field_task_start_date_value']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['filters']['field_task_start_date_value']['field'] = 'field_task_start_date_value';
  $handler->display->display_options['filters']['field_task_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_task_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_task_start_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_task_start_date_value']['default_date'] = 'now';
  /* Filter criterion: due date filter */
  $handler->display->display_options['filters']['field_task_due_date_value']['id'] = 'field_task_due_date_value';
  $handler->display->display_options['filters']['field_task_due_date_value']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['filters']['field_task_due_date_value']['field'] = 'field_task_due_date_value';
  $handler->display->display_options['filters']['field_task_due_date_value']['ui_name'] = 'due date filter';
  $handler->display->display_options['filters']['field_task_due_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_task_due_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['operator_id'] = 'field_task_due_date_value_op';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['description'] = 'View all incomplete tasks with a due date prior to:';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['operator'] = 'field_task_due_date_value_op';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['identifier'] = 'due_date_filter';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_task_due_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_task_due_date_value']['year_range'] = '-1:+1';
  /* Filter criterion: User: Group membership (og_user_node) */
  $handler->display->display_options['filters']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator_id'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['identifier'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'practice-admin/overdue-tasks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Overdue tasks';
  $handler->display->display_options['menu']['description'] = 'overdue assembly steps';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-views';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: VBO for rules */
  $handler = $view->new_display('panel_pane', 'VBO for rules', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'View of overdue tasks for rules';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_tasks_from_assembly_instructions' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_check_instruction_fields' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_send_task_email' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid_1']['id'] = 'gid_1';
  $handler->display->display_options['fields']['gid_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid_1']['field'] = 'gid';
  $handler->display->display_options['fields']['gid_1']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid_1']['label'] = 'Practice ID';
  $handler->display->display_options['fields']['gid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid_1']['separator'] = '';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Practice';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Date Task Completed */
  $handler->display->display_options['fields']['field_date_task_completed']['id'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['field'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['label'] = 'Date Completed';
  $handler->display->display_options['fields']['field_date_task_completed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_task_completed']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Task start date */
  $handler->display->display_options['fields']['field_task_start_date']['id'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['field'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['label'] = 'Start date';
  $handler->display->display_options['fields']['field_task_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_task_start_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_task_start_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Task started date */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Task due date */
  $handler->display->display_options['fields']['field_task_due_date']['id'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['field'] = 'field_task_due_date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
    'task' => 'task',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Task start date (field_task_start_date) */
  $handler->display->display_options['filters']['field_task_start_date_value']['id'] = 'field_task_start_date_value';
  $handler->display->display_options['filters']['field_task_start_date_value']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['filters']['field_task_start_date_value']['field'] = 'field_task_start_date_value';
  $handler->display->display_options['filters']['field_task_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_task_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_task_start_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_task_start_date_value']['default_date'] = 'now';
  /* Filter criterion: due date filter */
  $handler->display->display_options['filters']['field_task_due_date_value']['id'] = 'field_task_due_date_value';
  $handler->display->display_options['filters']['field_task_due_date_value']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['filters']['field_task_due_date_value']['field'] = 'field_task_due_date_value';
  $handler->display->display_options['filters']['field_task_due_date_value']['ui_name'] = 'due date filter';
  $handler->display->display_options['filters']['field_task_due_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_task_due_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['operator_id'] = 'field_task_due_date_value_op';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['label'] = 'Due date';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['description'] = 'View all incomplete tasks with a due date prior to:';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['operator'] = 'field_task_due_date_value_op';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['identifier'] = 'due_date_filter';
  $handler->display->display_options['filters']['field_task_due_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_task_due_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_task_due_date_value']['year_range'] = '-1:+1';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['assembly_step_progress_by_practice'] = $view;

  $view = new view();
  $view->name = 'assembly_steps_by_practice';
  $view->description = 'table of all assembly steps grouped by practice';
  $view->tag = 'practice managment';
  $view->base_table = 'node';
  $view->human_name = 'All assembly steps by practice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All practice tasks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_date_task_completed_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'gid' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'og_group_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'gid' => 'gid',
    'og_group_ref' => 'og_group_ref',
    'field_task_start_date' => 'field_task_start_date',
    'field_date_started' => 'field_date_started',
    'field_task_due_date' => 'field_task_due_date',
    'field_date_task_completed' => 'field_date_task_completed',
  );
  $handler->display->display_options['style_options']['default'] = 'field_task_start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_started' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task_due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_task_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: OG membership: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['gid']['label'] = 'Practice ID';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['gid']['separator'] = '';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Name';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Task start date */
  $handler->display->display_options['fields']['field_task_start_date']['id'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['field'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['label'] = 'Begin';
  $handler->display->display_options['fields']['field_task_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Task started date */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['label'] = 'Started';
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'format_type' => 'short',
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
  $handler->display->display_options['fields']['field_task_due_date']['label'] = 'Due';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date Task Completed */
  $handler->display->display_options['fields']['field_date_task_completed']['id'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['field'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['label'] = 'Completed';
  $handler->display->display_options['fields']['field_date_task_completed']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Task due date (field_task_due_date) */
  $handler->display->display_options['sorts']['field_task_due_date_value']['id'] = 'field_task_due_date_value';
  $handler->display->display_options['sorts']['field_task_due_date_value']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['sorts']['field_task_due_date_value']['field'] = 'field_task_due_date_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: User: Group membership (og_user_node) */
  $handler->display->display_options['filters']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator_id'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['label'] = 'Group membership (og_user_node)';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['identifier'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'practice-admin/practice-tasks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Practice tasks';
  $handler->display->display_options['menu']['description'] = 'all practice assembly steps';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-views';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['assembly_steps_by_practice'] = $view;

  $view = new view();
  $view->name = 'building_blocks';
  $view->description = 'View of resources for the main menu';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Building Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Building Blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'building-blocks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Building Blocks';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['building_blocks'] = $view;

  $view = new view();
  $view->name = 'clone_of_og_user_groups';
  $view->description = 'Show practices of a user.';
  $view->tag = 'practice';
  $view->base_table = 'og_membership';
  $view->human_name = 'My Practice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'add practice link';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<a href="/node/add/practice-group" title="Enroll a new practice in the immunization improvement progam">Create New Practice</a>';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: Passes User ID to Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'Passes User ID to Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['etid']['title'] = '%1 groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );

  /* Display: member Block */
  $handler = $view->new_display('block', 'member Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['block_description'] = 'My Practice';
  $export['clone_of_og_user_groups'] = $view;

  $view = new view();
  $view->name = 'comparison_report2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Comparison Report2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comparison Report2';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view advanced help topic';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first_name';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'PI: First name';
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last_name';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'PI: Last name';
  /* Field: Profile: Personal information: Salutation */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_value_profile_salutation';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'PI: Salut';
  /* Field: Profile: Practice job: Job-other */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_value_profile_job_other';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'PrJb: J-Oth';
  /* Field: Profile: Practice job: Just a visitor */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_visitor';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'PrJb: Visit';
  $handler->display->display_options['fields']['value_4']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_4']['not'] = 0;
  /* Field: Profile: Practice job: Practice job */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_practice_job';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'PrJb: Prjb';
  /* Field: Profile: Special practice role: Architect */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'profile_value_profile_architect';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = 'SpcRle: Arc';
  $handler->display->display_options['fields']['value_6']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_6']['not'] = 0;
  /* Field: Profile: Special practice role: Foreman */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'profile_value_profile_foreman';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = 'SPCRLE: FM';
  $handler->display->display_options['fields']['value_7']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_7']['not'] = 0;
  /* Field: Profile: Special practice role: Manager */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'profile_value_profile_manager';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = 'SPCRLE: MGR';
  $handler->display->display_options['fields']['value_8']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_8']['not'] = 0;
  /* Field: Profile: Special practice role: Project manager */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'profile_value_profile_project_manager';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = 'SPCRLE: PMGR';
  $handler->display->display_options['fields']['value_9']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_9']['not'] = 0;
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['label'] = 'Resp Role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_names']['id'] = 'field_first_names';
  $handler->display->display_options['fields']['field_first_names']['table'] = 'field_data_field_first_names';
  $handler->display->display_options['fields']['field_first_names']['field'] = 'field_first_names';
  /* Field: User: Job Other */
  $handler->display->display_options['fields']['field_job_other']['id'] = 'field_job_other';
  $handler->display->display_options['fields']['field_job_other']['table'] = 'field_data_field_job_other';
  $handler->display->display_options['fields']['field_job_other']['field'] = 'field_job_other';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_names']['id'] = 'field_last_names';
  $handler->display->display_options['fields']['field_last_names']['table'] = 'field_data_field_last_names';
  $handler->display->display_options['fields']['field_last_names']['field'] = 'field_last_names';
  /* Field: User: Practice Job */
  $handler->display->display_options['fields']['field_practice_jobs']['id'] = 'field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['table'] = 'field_data_field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['field'] = 'field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['label'] = 'PracJob';
  /* Field: User: Salutation */
  $handler->display->display_options['fields']['field_salutations']['id'] = 'field_salutations';
  $handler->display->display_options['fields']['field_salutations']['table'] = 'field_data_field_salutations';
  $handler->display->display_options['fields']['field_salutations']['field'] = 'field_salutations';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first_name';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'PI: First name';
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last_name';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'PI: Last name';
  /* Field: Profile: Personal information: Salutation */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_value_profile_salutation';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'PI: Salut';
  /* Field: Profile: Practice job: Job-other */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_value_profile_job_other';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'PrJb: J-Oth';
  /* Field: Profile: Practice job: Just a visitor */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_visitor';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'PrJb: Visit';
  $handler->display->display_options['fields']['value_4']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_4']['not'] = 0;
  /* Field: Profile: Practice job: Practice job */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_practice_job';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'PrJb: Prjb';
  /* Field: Profile: Special practice role: Architect */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'profile_value_profile_architect';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = 'SpcRle: Arc';
  $handler->display->display_options['fields']['value_6']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_6']['not'] = 0;
  /* Field: Profile: Special practice role: Foreman */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'profile_value_profile_foreman';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = 'SPCRLE: FM';
  $handler->display->display_options['fields']['value_7']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_7']['not'] = 0;
  /* Field: Profile: Special practice role: Manager */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'profile_value_profile_manager';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = 'SPCRLE: MGR';
  $handler->display->display_options['fields']['value_8']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_8']['not'] = 0;
  /* Field: Profile: Special practice role: Project manager */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'profile_value_profile_project_manager';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = 'SPCRLE: PMGR';
  $handler->display->display_options['fields']['value_9']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_9']['not'] = 0;
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['label'] = 'special practice role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_names']['id'] = 'field_first_names';
  $handler->display->display_options['fields']['field_first_names']['table'] = 'field_data_field_first_names';
  $handler->display->display_options['fields']['field_first_names']['field'] = 'field_first_names';
  /* Field: User: Job Other */
  $handler->display->display_options['fields']['field_job_other']['id'] = 'field_job_other';
  $handler->display->display_options['fields']['field_job_other']['table'] = 'field_data_field_job_other';
  $handler->display->display_options['fields']['field_job_other']['field'] = 'field_job_other';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_names']['id'] = 'field_last_names';
  $handler->display->display_options['fields']['field_last_names']['table'] = 'field_data_field_last_names';
  $handler->display->display_options['fields']['field_last_names']['field'] = 'field_last_names';
  /* Field: User: Practice Job */
  $handler->display->display_options['fields']['field_practice_jobs']['id'] = 'field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['table'] = 'field_data_field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['field'] = 'field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['label'] = 'practice job';
  /* Field: User: Salutation */
  $handler->display->display_options['fields']['field_salutations']['id'] = 'field_salutations';
  $handler->display->display_options['fields']['field_salutations']['table'] = 'field_data_field_salutations';
  $handler->display->display_options['fields']['field_salutations']['field'] = 'field_salutations';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'mail';
  $handler->display->display_options['path'] = 'comparison-report2';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first_name';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'PI: First name';
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last_name';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'PI: Last name';
  /* Field: Profile: Personal information: Salutation */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_value_profile_salutation';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'PI: Salut';
  /* Field: Profile: Practice job: Job-other */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_value_profile_job_other';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'PrJb: J-Oth';
  /* Field: Profile: Practice job: Just a visitor */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_visitor';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'PrJb: Visit';
  $handler->display->display_options['fields']['value_4']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_4']['not'] = 0;
  /* Field: Profile: Practice job: Practice job */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_practice_job';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'PrJb: Prjb';
  /* Field: Profile: Special practice role: Architect */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'profile_value_profile_architect';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = 'SpcRle: Arc';
  $handler->display->display_options['fields']['value_6']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_6']['not'] = 0;
  /* Field: Profile: Special practice role: Foreman */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'profile_value_profile_foreman';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = 'SPCRLE: FM';
  $handler->display->display_options['fields']['value_7']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_7']['not'] = 0;
  /* Field: Profile: Special practice role: Manager */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'profile_value_profile_manager';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = 'SPCRLE: MGR';
  $handler->display->display_options['fields']['value_8']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_8']['not'] = 0;
  /* Field: Profile: Special practice role: Project manager */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'profile_value_profile_project_manager';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = 'SPCRLE: PMGR';
  $handler->display->display_options['fields']['value_9']['type'] = 'boolean';
  $handler->display->display_options['fields']['value_9']['not'] = 0;
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['label'] = 'special practice role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_names']['id'] = 'field_first_names';
  $handler->display->display_options['fields']['field_first_names']['table'] = 'field_data_field_first_names';
  $handler->display->display_options['fields']['field_first_names']['field'] = 'field_first_names';
  /* Field: User: Job Other */
  $handler->display->display_options['fields']['field_job_other']['id'] = 'field_job_other';
  $handler->display->display_options['fields']['field_job_other']['table'] = 'field_data_field_job_other';
  $handler->display->display_options['fields']['field_job_other']['field'] = 'field_job_other';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_names']['id'] = 'field_last_names';
  $handler->display->display_options['fields']['field_last_names']['table'] = 'field_data_field_last_names';
  $handler->display->display_options['fields']['field_last_names']['field'] = 'field_last_names';
  /* Field: User: Practice Job */
  $handler->display->display_options['fields']['field_practice_jobs']['id'] = 'field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['table'] = 'field_data_field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['field'] = 'field_practice_jobs';
  $handler->display->display_options['fields']['field_practice_jobs']['label'] = 'practice job';
  /* Field: User: Salutation */
  $handler->display->display_options['fields']['field_salutations']['id'] = 'field_salutations';
  $handler->display->display_options['fields']['field_salutations']['table'] = 'field_data_field_salutations';
  $handler->display->display_options['fields']['field_salutations']['field'] = 'field_salutations';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'mail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'name';
  $handler->display->display_options['path'] = 'user-export';
  $export['comparison_report2'] = $view;

  $view = new view();
  $view->name = 'other_additions_to_views';
  $view->description = 'This view will be additions for various things';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Additions to Views';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Convenience Pane */
  $handler = $view->new_display('panel_pane', 'Convenience Pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'view of text content to display on convenience form';
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    35 => '35',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Notification pane */
  $handler = $view->new_display('panel_pane', 'Notification pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'view of text content to display on convenience form';
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Motivation pane */
  $handler = $view->new_display('panel_pane', 'Motivation pane', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'view of text content to display on convenience form';
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    38 => '38',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Meeting agenda pane */
  $handler = $view->new_display('panel_pane', 'Meeting agenda pane', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'view of text content to display on convenience form';
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    37 => '37',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Enhance pane */
  $handler = $view->new_display('panel_pane', 'Enhance pane', 'panel_pane_5');
  $handler->display->display_options['display_description'] = 'view of text content to display on convenience form';
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    36 => '36',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Assembly step pane */
  $handler = $view->new_display('panel_pane', 'Assembly step pane', 'panel_pane_6');
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    45 => '45',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Project update pane */
  $handler = $view->new_display('panel_pane', 'Project update pane', 'panel_pane_7');
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
    'other_additions_to_views' => 'other_additions_to_views',
  );
  /* Filter criterion: Content: Content type reference for views filter (field_content_type_reference_for) */
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['id'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['table'] = 'field_data_field_content_type_reference_for';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['field'] = 'field_content_type_reference_for_tid';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['value'] = array(
    46 => '46',
  );
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_content_type_reference_for_tid']['vocabulary'] = 'form_relationships';

  /* Display: Create practice pane */
  $handler = $view->new_display('panel_pane', 'Create practice pane', 'panel_pane_8');
  $export['other_additions_to_views'] = $view;

  $view = new view();
  $view->name = 'people';
  $view->description = 'view of site members';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access administration menu';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 1,
      'secondary_label' => 'Practice role',
    ),
    'gid' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'value' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'value_1' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'value_2' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'value_3' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'uid' => 'uid',
    'picture' => 'picture',
    'name' => 'name',
    'value_2' => 'value_2',
    'value' => 'value',
    'value_1' => 'value_1',
    'rid' => 'rid',
    'status' => 'status',
    'contact' => 'contact',
    'og_user_node' => 'og_user_node',
    'value_3' => 'value_3',
    'value_4' => 'value_4',
    'value_5' => 'value_5',
    'value_6' => 'value_6',
    'value_7' => 'value_7',
    'access' => 'access',
    'mail' => 'mail',
    'status_1' => 'status_1',
  );
  $handler->display->display_options['style_options']['default'] = 'value_1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'value_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'contact' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'og_user_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'value_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'tiny';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Personal information: Salutation */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_value_profile_salutation';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = '';
  $handler->display->display_options['fields']['value_2']['element_label_colon'] = FALSE;
  /* Field: Profile: Personal information: First name */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_value_profile_first_name';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'First name';
  $handler->display->display_options['fields']['value']['link_to_user'] = FALSE;
  /* Field: Profile: Personal information: Last name */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_value_profile_last_name';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Last name';
  $handler->display->display_options['fields']['value_1']['link_to_user'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Link to contact page */
  $handler->display->display_options['fields']['contact']['id'] = 'contact';
  $handler->display->display_options['fields']['contact']['table'] = 'users';
  $handler->display->display_options['fields']['contact']['field'] = 'contact';
  $handler->display->display_options['fields']['contact']['label'] = 'Contact';
  /* Field: User: Group membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['label'] = 'Practice';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: Profile: Practice job: Practice job */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_value_profile_practice_job';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Practice job';
  $handler->display->display_options['fields']['value_3']['empty_zero'] = TRUE;
  /* Field: Profile: Special practice role: Architect */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'profile_value_profile_architect';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'Architect';
  $handler->display->display_options['fields']['value_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_4']['type'] = 'true-false';
  $handler->display->display_options['fields']['value_4']['not'] = 0;
  /* Field: Profile: Special practice role: Foreman */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'profile_value_profile_foreman';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = 'Foreman';
  $handler->display->display_options['fields']['value_5']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_5']['type'] = 'true-false';
  $handler->display->display_options['fields']['value_5']['not'] = 0;
  /* Field: Profile: Special practice role: Manager */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'profile_value_profile_manager';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = 'Manager';
  $handler->display->display_options['fields']['value_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_6']['type'] = 'true-false';
  $handler->display->display_options['fields']['value_6']['not'] = 0;
  /* Field: Profile: Special practice role: Project manager */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'profile_value_profile_project_manager';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = 'Project manager';
  $handler->display->display_options['fields']['value_7']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_7']['type'] = 'true-false';
  $handler->display->display_options['fields']['value_7']['not'] = 0;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'time ago';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'users';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
  $handler->display->display_options['fields']['status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status_1']['type'] = 'active-blocked';
  $handler->display->display_options['fields']['status_1']['not'] = 0;
  /* Filter criterion: Profile: Special practice role: Architect */
  $handler->display->display_options['filters']['value']['id'] = 'value';
  $handler->display->display_options['filters']['value']['table'] = 'profile_value_profile_architect';
  $handler->display->display_options['filters']['value']['field'] = 'value';
  $handler->display->display_options['filters']['value']['value'] = 'All';
  $handler->display->display_options['filters']['value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['value']['expose']['label'] = 'Architect';
  $handler->display->display_options['filters']['value']['expose']['description'] = 'Lead physician';
  $handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
  $handler->display->display_options['filters']['value']['expose']['identifier'] = 'architect';
  $handler->display->display_options['filters']['value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Profile: Special practice role: Foreman */
  $handler->display->display_options['filters']['value_1']['id'] = 'value_1';
  $handler->display->display_options['filters']['value_1']['table'] = 'profile_value_profile_foreman';
  $handler->display->display_options['filters']['value_1']['field'] = 'value';
  $handler->display->display_options['filters']['value_1']['value'] = 'All';
  $handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['value_1']['expose']['label'] = 'Foreman';
  $handler->display->display_options['filters']['value_1']['expose']['description'] = 'Lead nurse';
  $handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
  $handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'foreman';
  $handler->display->display_options['filters']['value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Profile: Special practice role: Manager */
  $handler->display->display_options['filters']['value_2']['id'] = 'value_2';
  $handler->display->display_options['filters']['value_2']['table'] = 'profile_value_profile_manager';
  $handler->display->display_options['filters']['value_2']['field'] = 'value';
  $handler->display->display_options['filters']['value_2']['value'] = 'All';
  $handler->display->display_options['filters']['value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['value_2']['expose']['label'] = 'Manager';
  $handler->display->display_options['filters']['value_2']['expose']['description'] = 'lead administrator';
  $handler->display->display_options['filters']['value_2']['expose']['operator'] = 'value_2_op';
  $handler->display->display_options['filters']['value_2']['expose']['identifier'] = 'manager';
  $handler->display->display_options['filters']['value_2']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['value_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Profile: Special practice role: Project manager */
  $handler->display->display_options['filters']['value_3']['id'] = 'value_3';
  $handler->display->display_options['filters']['value_3']['table'] = 'profile_value_profile_project_manager';
  $handler->display->display_options['filters']['value_3']['field'] = 'value';
  $handler->display->display_options['filters']['value_3']['value'] = 'All';
  $handler->display->display_options['filters']['value_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['value_3']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['value_3']['expose']['label'] = 'Project manager';
  $handler->display->display_options['filters']['value_3']['expose']['description'] = 'Immunization champion';
  $handler->display->display_options['filters']['value_3']['expose']['operator'] = 'value_3_op';
  $handler->display->display_options['filters']['value_3']['expose']['identifier'] = 'project_manager';
  $handler->display->display_options['filters']['value_3']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['value_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Group membership (og_user_node) */
  $handler->display->display_options['filters']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator_id'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['label'] = 'Practice';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['identifier'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['label'] = 'Group membership (og_user_node)';
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['identifier'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status_1']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status_1']['expose']['description'] = 'status of user';
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
  $handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/people-details';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People details';
  $handler->display->display_options['menu']['description'] = 'Site user details';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-editing';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['people'] = $view;

  $view = new view();
  $view->name = 'pitt_required_disclosures_view';
  $view->description = 'Required disclosures on pages with Pitt CME material';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pitt required disclosures view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'University of Pittsburgh Required Disclosures for CME Students';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'required_disclosure' => 'required_disclosure',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '8',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'certification_entities';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['pitt_required_disclosures_view'] = $view;

  $view = new view();
  $view->name = 'practice_announcements_content';
  $view->description = 'Show all announcements of a group.';
  $view->tag = 'Practice';
  $view->base_table = 'node';
  $view->human_name = 'Practice announcements content';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'update group';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
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
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'announcement' => 'announcement',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'node/%/feed';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'entity_view_1' => 'entity_view_1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'update group';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Admin Content pane */
  $handler = $view->new_display('panel_pane', 'Admin Content pane', 'panel_pane_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Admin view of practice announcement feed';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer users';
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );
  $export['practice_announcements_content'] = $view;

  $view = new view();
  $view->name = 'practice_selected_strategies';
  $view->description = 'View of intervention strategies selected by a practice';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Practice selected strategies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our selected strategies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_node'] = TRUE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['type'] = 'ul';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'certification_entities' => 0,
    'convenient_vaccination_services_strategies' => 0,
    'patient_notification_strategies' => 0,
    'enhanced_office_vaccination_systems_strategies' => 0,
    'practice_jobs' => 0,
    'special_practice_role' => 0,
    'tags' => 0,
    'convenient_vaccination_services_other' => 0,
    'enhanced_vaccination_systems_other' => 0,
    'motivation' => 0,
    'motivation_strategies_' => 0,
    'patient_notification_other' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_site_permissions_to_practice_creator' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_tasks_from_assembly_instructions' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_check_instruction_fields' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_send_email_when_practice_is_created' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_send_task_email' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_unpublish_old_strategies_guts' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
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
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'convenient_vaccination_services' => 'convenient_vaccination_services',
    'enhanced_vaccination_systems' => 'enhanced_vaccination_systems',
    'motivation' => 'motivation',
    'patient_notification' => 'patient_notification',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_node'] = TRUE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['type'] = 'ul';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'certification_entities' => 0,
    'convenient_vaccination_services_strategies' => 0,
    'patient_notification_strategies' => 0,
    'enhanced_office_vaccination_systems_strategies' => 0,
    'practice_jobs' => 0,
    'special_practice_role' => 0,
    'tags' => 0,
    'convenient_vaccination_services_other' => 0,
    'enhanced_vaccination_systems_other' => 0,
    'motivation' => 0,
    'motivation_strategies_' => 0,
    'patient_notification_other' => 0,
  );

  /* Display: VBO pane for rules */
  $handler = $view->new_display('panel_pane', 'VBO pane for rules', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $export['practice_selected_strategies'] = $view;

  $view = new view();
  $view->name = 'practice_task_content';
  $view->description = 'Show all tasks of a group.';
  $view->tag = 'Practice';
  $view->base_table = 'node';
  $view->human_name = 'Practice Improvement Dashboard';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Project Blueprints';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'update group';
  $handler->display->display_options['access']['group_id_arg'] = '1';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_task_start_date' => 'field_task_start_date',
    'field_date_started' => 'field_date_started',
    'field_date_task_completed' => 'field_date_task_completed',
    'field_task_due_date' => 'field_task_due_date',
    'field_responsible_role' => 'field_responsible_role',
  );
  $handler->display->display_options['style_options']['default'] = 'field_task_due_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_started' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_task_completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_task_due_date' => array(
      'sortable' => 1,
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
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '!2/[edit_node]';
  /* Field: Content: Task started date */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'format_type' => 'us_short',
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
  $handler->display->display_options['fields']['field_task_due_date']['label'] = 'Due date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'us_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date Task Completed */
  $handler->display->display_options['fields']['field_date_task_completed']['id'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['field'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['label'] = 'Date Completed';
  $handler->display->display_options['fields']['field_date_task_completed']['settings'] = array(
    'format_type' => 'us_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  /* Sort criterion: Content: Due date day offset from enrollment (field_due_day_offset_enrollment) */
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['id'] = 'field_due_day_offset_enrollment_value';
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['field'] = 'field_due_day_offset_enrollment_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'task' => 'task',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '!2/[edit_node]';
  /* Field: Content: Task start date */
  $handler->display->display_options['fields']['field_task_start_date']['id'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['field'] = 'field_task_start_date';
  $handler->display->display_options['fields']['field_task_start_date']['label'] = 'Suggested Start Date';
  $handler->display->display_options['fields']['field_task_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Task started date */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['label'] = 'Task Started Date';
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date Task Completed */
  $handler->display->display_options['fields']['field_date_task_completed']['id'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['field'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['label'] = 'Date Completed';
  $handler->display->display_options['fields']['field_date_task_completed']['settings'] = array(
    'format_type' => 'us_short',
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
  $handler->display->display_options['fields']['field_task_due_date']['label'] = 'Due date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'us_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Task start date (field_task_start_date) */
  $handler->display->display_options['sorts']['field_task_start_date_value']['id'] = 'field_task_start_date_value';
  $handler->display->display_options['sorts']['field_task_start_date_value']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['sorts']['field_task_start_date_value']['field'] = 'field_task_start_date_value';
  /* Sort criterion: Content: Task due date (field_task_due_date) */
  $handler->display->display_options['sorts']['field_task_due_date_value']['id'] = 'field_task_due_date_value';
  $handler->display->display_options['sorts']['field_task_due_date_value']['table'] = 'field_data_field_task_due_date';
  $handler->display->display_options['sorts']['field_task_due_date_value']['field'] = 'field_task_due_date_value';
  $handler->display->display_options['path'] = 'node/%/blueprints';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Our Blueprints';
  $handler->display->display_options['menu']['description'] = 'Your customized blueprints';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Task';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '!2/[edit_node]';
  /* Field: Content: Task started date */
  $handler->display->display_options['fields']['field_date_started']['id'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['table'] = 'field_data_field_date_started';
  $handler->display->display_options['fields']['field_date_started']['field'] = 'field_date_started';
  $handler->display->display_options['fields']['field_date_started']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_date_started']['settings'] = array(
    'format_type' => 'us_short',
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
  $handler->display->display_options['fields']['field_task_due_date']['label'] = 'Due date';
  $handler->display->display_options['fields']['field_task_due_date']['settings'] = array(
    'format_type' => 'us_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Date Task Completed */
  $handler->display->display_options['fields']['field_date_task_completed']['id'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['field'] = 'field_date_task_completed';
  $handler->display->display_options['fields']['field_date_task_completed']['label'] = 'Date Completed';
  $handler->display->display_options['fields']['field_date_task_completed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_task_completed']['settings'] = array(
    'format_type' => 'us_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Task start date (field_task_start_date) */
  $handler->display->display_options['sorts']['field_task_start_date_value']['id'] = 'field_task_start_date_value';
  $handler->display->display_options['sorts']['field_task_start_date_value']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['sorts']['field_task_start_date_value']['field'] = 'field_task_start_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['default_argument_options']['argument'] = 'Task';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: OG membership: Entity id */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Date Task Completed (field_date_task_completed) */
  $handler->display->display_options['filters']['field_date_task_completed_value']['id'] = 'field_date_task_completed_value';
  $handler->display->display_options['filters']['field_date_task_completed_value']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['filters']['field_date_task_completed_value']['field'] = 'field_date_task_completed_value';
  $handler->display->display_options['filters']['field_date_task_completed_value']['operator'] = 'empty';
  /* Filter criterion: Content: Task start date (field_task_start_date) */
  $handler->display->display_options['filters']['field_task_start_date_value']['id'] = 'field_task_start_date_value';
  $handler->display->display_options['filters']['field_task_start_date_value']['table'] = 'field_data_field_task_start_date';
  $handler->display->display_options['filters']['field_task_start_date_value']['field'] = 'field_task_start_date_value';
  $handler->display->display_options['filters']['field_task_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_task_start_date_value']['default_date'] = 'now';
  $export['practice_task_content'] = $view;

  $view = new view();
  $view->name = 'practices';
  $view->description = 'List of practices for rules';
  $view->tag = 'rules';
  $view->base_table = 'node';
  $view->human_name = 'Practices';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_tasks_from_assembly_instructions' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_check_instruction_fields' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_send_task_email' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
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
    'practice_group' => 'practice_group',
  );
  $export['practices'] = $view;

  $view = new view();
  $view->name = 'roadmap_waypoints';
  $view->description = 'list of assembly instructions for the main menu';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Blueprints';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blueprints';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access content overview';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Blueprints text';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'This page is a customized list of assembly steps to help guide your crew in building the 4 pillars of successful immunization practice. <a href=node/add/practice-group>Enroll your practice</a> to generate your practice\'s customized blueprints.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Due date day offset from enrollment (field_due_day_offset_enrollment) */
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['id'] = 'field_due_day_offset_enrollment_value';
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['field'] = 'field_due_day_offset_enrollment_value';
  /* Sort criterion: Content: Date Task Completed (field_date_task_completed) */
  $handler->display->display_options['sorts']['field_date_task_completed_value']['id'] = 'field_date_task_completed_value';
  $handler->display->display_options['sorts']['field_date_task_completed_value']['table'] = 'field_data_field_date_task_completed';
  $handler->display->display_options['sorts']['field_date_task_completed_value']['field'] = 'field_date_task_completed_value';
  $handler->display->display_options['sorts']['field_date_task_completed_value']['expose']['label'] = 'Date Task Completed (field_date_task_completed)';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Start date day offset from enrollment (field_start_day_offset_enrollmen) */
  $handler->display->display_options['sorts']['field_start_day_offset_enrollmen_value']['id'] = 'field_start_day_offset_enrollmen_value';
  $handler->display->display_options['sorts']['field_start_day_offset_enrollmen_value']['table'] = 'field_data_field_start_day_offset_enrollmen';
  $handler->display->display_options['sorts']['field_start_day_offset_enrollmen_value']['field'] = 'field_start_day_offset_enrollmen_value';
  /* Sort criterion: Content: Due date day offset from enrollment (field_due_day_offset_enrollment) */
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['id'] = 'field_due_day_offset_enrollment_value';
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['sorts']['field_due_day_offset_enrollment_value']['field'] = 'field_due_day_offset_enrollment_value';
  $handler->display->display_options['path'] = 'blueprints';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blueprints';
  $handler->display->display_options['menu']['description'] = 'The blueprint to building the 4 Pillars of immunization success';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Blueprints';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'blueprints_block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start date day offset from enrollment */
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['id'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['table'] = 'field_data_field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['field'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Due date day offset from enrollment */
  $handler->display->display_options['fields']['field_due_day_offset_enrollment_1']['id'] = 'field_due_day_offset_enrollment_1';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment_1']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment_1']['field'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  /* Field: Field: Responsible role (field_responsible_role:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  /* Field: Content: Due date day offset from enrollment */
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['id'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['field'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Resource links */
  $handler->display->display_options['fields']['field_resource_links']['id'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['table'] = 'field_data_field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['field'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_resource_links']['delta_offset'] = '0';
  /* Field: Content: Resource links (field_resource_links:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_resource_links';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['block_description'] = 'Blueprints';

  /* Display: AdminPage */
  $handler = $view->new_display('page', 'AdminPage', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_1']['delta_offset'] = '0';
  /* Field: Content: Expected time to complete */
  $handler->display->display_options['fields']['field_expected_time_to_complete']['id'] = 'field_expected_time_to_complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['table'] = 'field_data_field_expected_time_to_complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['field'] = 'field_expected_time_to_complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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
  /* Field: Content: Fixed start date */
  $handler->display->display_options['fields']['field_fixed_start_date']['id'] = 'field_fixed_start_date';
  $handler->display->display_options['fields']['field_fixed_start_date']['table'] = 'field_data_field_fixed_start_date';
  $handler->display->display_options['fields']['field_fixed_start_date']['field'] = 'field_fixed_start_date';
  $handler->display->display_options['fields']['field_fixed_start_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Fixed due date */
  $handler->display->display_options['fields']['field_fixed_due_date']['id'] = 'field_fixed_due_date';
  $handler->display->display_options['fields']['field_fixed_due_date']['table'] = 'field_data_field_fixed_due_date';
  $handler->display->display_options['fields']['field_fixed_due_date']['field'] = 'field_fixed_due_date';
  $handler->display->display_options['fields']['field_fixed_due_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Resource links */
  $handler->display->display_options['fields']['field_resource_links']['id'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['table'] = 'field_data_field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['field'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_resource_links']['delta_offset'] = '0';
  /* Field: Field: Responsible role */
  $handler->display->display_options['fields']['field_responsible_role']['id'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['table'] = 'field_data_field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['field'] = 'field_responsible_role';
  $handler->display->display_options['fields']['field_responsible_role']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'adminpage';
  $export['roadmap_waypoints'] = $view;

  $view = new view();
  $view->name = 'test_view';
  $view->description = 'table of assembly instructions';
  $view->tag = 'views';
  $view->base_table = 'node';
  $view->human_name = 'Assembly instructions list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_start_day_offset_enrollmen' => 'field_start_day_offset_enrollmen',
    'field_due_day_offset_enrollment' => 'field_due_day_offset_enrollment',
  );
  $handler->display->display_options['style_options']['default'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_day_offset_enrollmen' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_due_day_offset_enrollment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Start date day offset from enrollment */
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['id'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['table'] = 'field_data_field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['field'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['label'] = 'Start offset';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Due date day offset from enrollment */
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['id'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['field'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['label'] = 'Due offset';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_site_permissions_to_practice_creator' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_create_tasks_from_assembly_instructions' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_check_instruction_fields' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_send_email_when_practice_is_created' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_send_task_email' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_unpublish_old_strategies_guts' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Assembly instructions';
  $handler->display->display_options['menu']['description'] = 'table of asembly instructions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-views';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['test_view'] = $view;

  $view = new view();
  $view->name = 'viewer_discretion_view';
  $view->description = 'List of all viewer nuts & bolts content for CME compliance and technology info';
  $view->tag = 'views';
  $view->base_table = 'node';
  $view->human_name = 'Nuts & Bolts view';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
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
    'nuts_bolts' => 'nuts_bolts',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'nuts-and-bolts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Nuts & Bolts';
  $handler->display->display_options['menu']['description'] = 'Technical information about the website';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['viewer_discretion_view'] = $view;

  return $export;
}
