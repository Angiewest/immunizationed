<?php
/**
 * @file
 * exporter_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exporter_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'article_exporter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Article exporter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Published articles exporter';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
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
    'article' => 'article',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'exporters/articles';
  $export['article_exporter'] = $view;

  $view = new view();
  $view->name = 'export_assembly_instructions';
  $view->description = '';
  $view->tag = 'Export';
  $view->base_table = 'node';
  $view->human_name = 'Export: Assembly Instructions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assembly Instructions Export';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Due date day offset from enrollment */
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['id'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['table'] = 'field_data_field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['field'] = 'field_due_day_offset_enrollment';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['label'] = 'Due date offset';
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_due_day_offset_enrollment']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Expected time to complete */
  $handler->display->display_options['fields']['field_expected_time_to_complete']['id'] = 'field_expected_time_to_complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['table'] = 'field_data_field_expected_time_to_complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['field'] = 'field_expected_time_to_complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['label'] = 'time to complete';
  $handler->display->display_options['fields']['field_expected_time_to_complete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expected_time_to_complete']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Fixed due date */
  $handler->display->display_options['fields']['field_fixed_due_date']['id'] = 'field_fixed_due_date';
  $handler->display->display_options['fields']['field_fixed_due_date']['table'] = 'field_data_field_fixed_due_date';
  $handler->display->display_options['fields']['field_fixed_due_date']['field'] = 'field_fixed_due_date';
  $handler->display->display_options['fields']['field_fixed_due_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fixed_due_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Fixed start date */
  $handler->display->display_options['fields']['field_fixed_start_date']['id'] = 'field_fixed_start_date';
  $handler->display->display_options['fields']['field_fixed_start_date']['table'] = 'field_data_field_fixed_start_date';
  $handler->display->display_options['fields']['field_fixed_start_date']['field'] = 'field_fixed_start_date';
  $handler->display->display_options['fields']['field_fixed_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fixed_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Resource links */
  $handler->display->display_options['fields']['field_resource_links']['id'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['table'] = 'field_data_field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['field'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links']['label'] = 'links-url';
  $handler->display->display_options['fields']['field_resource_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_resource_links']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_resource_links']['delta_offset'] = '0';
  /* Field: Content: Start date day offset from enrollment */
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['id'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['table'] = 'field_data_field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['field'] = 'field_start_day_offset_enrollmen';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['label'] = 'Start date offset';
  $handler->display->display_options['fields']['field_start_day_offset_enrollmen']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Content: Resource links */
  $handler->display->display_options['fields']['field_resource_links_1']['id'] = 'field_resource_links_1';
  $handler->display->display_options['fields']['field_resource_links_1']['table'] = 'field_data_field_resource_links';
  $handler->display->display_options['fields']['field_resource_links_1']['field'] = 'field_resource_links';
  $handler->display->display_options['fields']['field_resource_links_1']['label'] = 'links-title';
  $handler->display->display_options['fields']['field_resource_links_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_resource_links_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_resource_links_1']['delta_offset'] = '0';
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
    'roadmap_waypoint' => 'roadmap_waypoint',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'exporters/instructions';
  $handler->display->display_options['sitename_title'] = 0;
  $export['export_assembly_instructions'] = $view;

  $view = new view();
  $view->name = 'export_building_blocks_documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export: building blocks - documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Building block exporter';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Document */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'field_data_field_document';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_document']['delta_offset'] = '0';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Field: Content: Pillar tags */
  $handler->display->display_options['fields']['field_pillar_tags']['id'] = 'field_pillar_tags';
  $handler->display->display_options['fields']['field_pillar_tags']['table'] = 'field_data_field_pillar_tags';
  $handler->display->display_options['fields']['field_pillar_tags']['field'] = 'field_pillar_tags';
  $handler->display->display_options['fields']['field_pillar_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pillar_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_pillar_tags']['delta_offset'] = '0';
  /* Field: Content: Video link */
  $handler->display->display_options['fields']['field_internal_video_url']['id'] = 'field_internal_video_url';
  $handler->display->display_options['fields']['field_internal_video_url']['table'] = 'field_data_field_internal_video_url';
  $handler->display->display_options['fields']['field_internal_video_url']['field'] = 'field_internal_video_url';
  $handler->display->display_options['fields']['field_internal_video_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_internal_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_internal_video_url']['type'] = 'link_title_plain';
  /* Field: Content: Video link */
  $handler->display->display_options['fields']['field_internal_video_url_1']['id'] = 'field_internal_video_url_1';
  $handler->display->display_options['fields']['field_internal_video_url_1']['table'] = 'field_data_field_internal_video_url';
  $handler->display->display_options['fields']['field_internal_video_url_1']['field'] = 'field_internal_video_url';
  $handler->display->display_options['fields']['field_internal_video_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_internal_video_url_1']['type'] = 'link_plain';
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'GUID';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
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
    'document' => 'document',
    'offsite_resource' => 'offsite_resource',
    'video' => 'video',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'exporters/building-blocks';
  $handler->display->display_options['sitename_title'] = 0;
  $export['export_building_blocks_documents'] = $view;

  $view = new view();
  $view->name = 'export_practices';
  $view->description = '';
  $view->tag = 'export';
  $view->base_table = 'node';
  $view->human_name = 'Export: Practices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'practice exporter';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Baseline Influenza immunization rate */
  $handler->display->display_options['fields']['field_baseline_flu_vax_rate']['id'] = 'field_baseline_flu_vax_rate';
  $handler->display->display_options['fields']['field_baseline_flu_vax_rate']['table'] = 'field_data_field_baseline_flu_vax_rate';
  $handler->display->display_options['fields']['field_baseline_flu_vax_rate']['field'] = 'field_baseline_flu_vax_rate';
  $handler->display->display_options['fields']['field_baseline_flu_vax_rate']['label'] = 'Baseline flu rate';
  $handler->display->display_options['fields']['field_baseline_flu_vax_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baseline_flu_vax_rate']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Baseline Pneumo immunization rate */
  $handler->display->display_options['fields']['field_baseline_pneumo_vax_rate']['id'] = 'field_baseline_pneumo_vax_rate';
  $handler->display->display_options['fields']['field_baseline_pneumo_vax_rate']['table'] = 'field_data_field_baseline_pneumo_vax_rate';
  $handler->display->display_options['fields']['field_baseline_pneumo_vax_rate']['field'] = 'field_baseline_pneumo_vax_rate';
  $handler->display->display_options['fields']['field_baseline_pneumo_vax_rate']['label'] = 'Baseline Pneumo rate';
  $handler->display->display_options['fields']['field_baseline_pneumo_vax_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baseline_pneumo_vax_rate']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Baseline TDAP immunization rate */
  $handler->display->display_options['fields']['field_baseline_tdap_vax_rate']['id'] = 'field_baseline_tdap_vax_rate';
  $handler->display->display_options['fields']['field_baseline_tdap_vax_rate']['table'] = 'field_data_field_baseline_tdap_vax_rate';
  $handler->display->display_options['fields']['field_baseline_tdap_vax_rate']['field'] = 'field_baseline_tdap_vax_rate';
  $handler->display->display_options['fields']['field_baseline_tdap_vax_rate']['label'] = 'Baseline TDAP rate';
  $handler->display->display_options['fields']['field_baseline_tdap_vax_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baseline_tdap_vax_rate']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Epic ID */
  $handler->display->display_options['fields']['field_epic_id']['id'] = 'field_epic_id';
  $handler->display->display_options['fields']['field_epic_id']['table'] = 'field_data_field_epic_id';
  $handler->display->display_options['fields']['field_epic_id']['field'] = 'field_epic_id';
  $handler->display->display_options['fields']['field_epic_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_epic_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Practice Address */
  $handler->display->display_options['fields']['field_practice_address']['id'] = 'field_practice_address';
  $handler->display->display_options['fields']['field_practice_address']['table'] = 'field_data_field_practice_address';
  $handler->display->display_options['fields']['field_practice_address']['field'] = 'field_practice_address';
  $handler->display->display_options['fields']['field_practice_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_practice_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_practice_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Practice Phone */
  $handler->display->display_options['fields']['field_practice_phone']['id'] = 'field_practice_phone';
  $handler->display->display_options['fields']['field_practice_phone']['table'] = 'field_data_field_practice_phone';
  $handler->display->display_options['fields']['field_practice_phone']['field'] = 'field_practice_phone';
  $handler->display->display_options['fields']['field_practice_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Practice photo */
  $handler->display->display_options['fields']['field_practice_photo']['id'] = 'field_practice_photo';
  $handler->display->display_options['fields']['field_practice_photo']['table'] = 'field_data_field_practice_photo';
  $handler->display->display_options['fields']['field_practice_photo']['field'] = 'field_practice_photo';
  $handler->display->display_options['fields']['field_practice_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_practice_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_practice_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Practice Website */
  $handler->display->display_options['fields']['field_practice_website']['id'] = 'field_practice_website';
  $handler->display->display_options['fields']['field_practice_website']['table'] = 'field_data_field_practice_website';
  $handler->display->display_options['fields']['field_practice_website']['field'] = 'field_practice_website';
  $handler->display->display_options['fields']['field_practice_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_practice_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_practice_website']['type'] = 'link_title_plain';
  /* Field: Content: Target influenza immunization rate */
  $handler->display->display_options['fields']['field_target_flu_percent']['id'] = 'field_target_flu_percent';
  $handler->display->display_options['fields']['field_target_flu_percent']['table'] = 'field_data_field_target_flu_percent';
  $handler->display->display_options['fields']['field_target_flu_percent']['field'] = 'field_target_flu_percent';
  $handler->display->display_options['fields']['field_target_flu_percent']['label'] = 'Target flu rate';
  $handler->display->display_options['fields']['field_target_flu_percent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_flu_percent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Target Pneumo immunization rate */
  $handler->display->display_options['fields']['field_target_pneumo_percent']['id'] = 'field_target_pneumo_percent';
  $handler->display->display_options['fields']['field_target_pneumo_percent']['table'] = 'field_data_field_target_pneumo_percent';
  $handler->display->display_options['fields']['field_target_pneumo_percent']['field'] = 'field_target_pneumo_percent';
  $handler->display->display_options['fields']['field_target_pneumo_percent']['label'] = 'Target Pneumo rate';
  $handler->display->display_options['fields']['field_target_pneumo_percent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_pneumo_percent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Target TDAP immunization rate */
  $handler->display->display_options['fields']['field_target_tdap_percent']['id'] = 'field_target_tdap_percent';
  $handler->display->display_options['fields']['field_target_tdap_percent']['table'] = 'field_data_field_target_tdap_percent';
  $handler->display->display_options['fields']['field_target_tdap_percent']['field'] = 'field_target_tdap_percent';
  $handler->display->display_options['fields']['field_target_tdap_percent']['label'] = 'Target TDAP rate';
  $handler->display->display_options['fields']['field_target_tdap_percent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_tdap_percent']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Practice Website */
  $handler->display->display_options['fields']['field_practice_website_1']['id'] = 'field_practice_website_1';
  $handler->display->display_options['fields']['field_practice_website_1']['table'] = 'field_data_field_practice_website';
  $handler->display->display_options['fields']['field_practice_website_1']['field'] = 'field_practice_website';
  $handler->display->display_options['fields']['field_practice_website_1']['label'] = 'Practice Website - url';
  $handler->display->display_options['fields']['field_practice_website_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_practice_website_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_practice_website_1']['type'] = 'link_plain';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
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

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'exporters/practices';
  $handler->display->display_options['sitename_title'] = 0;
  $export['export_practices'] = $view;

  return $export;
}
