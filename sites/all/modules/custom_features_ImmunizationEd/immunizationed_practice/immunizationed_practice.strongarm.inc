<?php
/**
 * @file
 * immunizationed_practice.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function immunizationed_practice_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_practice';
  $strongarm->value = 'edit-og';
  $export['additional_settings__active_tab_practice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_practice_group';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_practice_group';
  $strongarm->value = 0;
  $export['comment_anonymous_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_practice_group';
  $strongarm->value = 1;
  $export['comment_default_mode_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_practice_group';
  $strongarm->value = '50';
  $export['comment_default_per_page_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_practice_group';
  $strongarm->value = 1;
  $export['comment_form_location_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_practice_group';
  $strongarm->value = '0';
  $export['comment_preview_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_practice_group';
  $strongarm->value = 0;
  $export['diff_enable_revisions_page_node_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_practice_group';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_practice_group';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_practice';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_practice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_practice_group';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_practice_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_practice';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_practice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_practice_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_viewer_discretion_';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_viewer_discretion_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_practice_group';
  $strongarm->value = '0';
  $export['node_preview_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_practice';
  $strongarm->value = 0;
  $export['node_submitted_practice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_viewer_discretion_';
  $strongarm->value = 0;
  $export['node_submitted_viewer_discretion_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_context_negotiation_group_context';
  $strongarm->value = array(
    'url' => array(),
    'node' => array(),
    'comment' => array(),
    'user-edit' => array(),
    'user-view' => array(),
  );
  $export['og_context_negotiation_group_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_context_providers_weight_group_context';
  $strongarm->value = array(
    'url' => '-5',
    'node' => '-4',
    'user-edit' => '0',
    'user-view' => '0',
    'comment' => '0',
    'og_extras' => '0',
  );
  $export['og_context_providers_weight_group_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_features_ignore_og_fields';
  $strongarm->value = 0;
  $export['og_features_ignore_og_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_manager_default_rids_node_practice_group';
  $strongarm->value = array(
    14 => '14',
  );
  $export['og_group_manager_default_rids_node_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_manager_full_access';
  $strongarm->value = 0;
  $export['og_group_manager_full_access'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_node_access_strict';
  $strongarm->value = 0;
  $export['og_node_access_strict'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_orphans_delete';
  $strongarm->value = 0;
  $export['og_orphans_delete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_ui_admin_people_view';
  $strongarm->value = 'og_members_admin:default';
  $export['og_ui_admin_people_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_use_queue';
  $strongarm->value = 0;
  $export['og_use_queue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_practice_group';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_practice_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_register_staff';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_index' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_result' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'print' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_register_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_practice_jobs';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_practice_jobs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_special_practice_role';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_special_practice_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:practice_group_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:29:"panelizer_node:practice_group";s:23:"allowed_layout_settings";a:35:{s:8:"flexible";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:20:"omega_24_twocol_6_18";b:1;s:20:"omega_24_twocol_18_6";b:1;s:29:"omega_24_twocol_12_12_stacked";b:1;s:28:"omega_24_twocol_12_12_bricks";b:1;s:21:"omega_24_twocol_12_12";b:1;s:31:"omega_24_threecol_8_8_8_stacked";b:1;s:23:"omega_24_threecol_8_8_8";b:1;s:15:"omega_24_onecol";b:1;s:27:"omega_16_twocol_8_8_stacked";b:1;s:26:"omega_16_twocol_8_8_bricks";b:1;s:19:"omega_16_twocol_8_8";b:1;s:20:"omega_16_twocol_4_12";b:1;s:20:"omega_16_twocol_12_4";b:1;s:31:"omega_16_threecol_5_6_5_stacked";b:1;s:23:"omega_16_threecol_5_6_5";b:1;s:15:"omega_16_onecol";b:1;s:19:"omega_12_twocol_9_3";b:1;s:27:"omega_12_twocol_6_6_stacked";b:1;s:26:"omega_12_twocol_6_6_bricks";b:1;s:19:"omega_12_twocol_6_6";b:1;s:19:"omega_12_twocol_3_9";b:1;s:31:"omega_12_threecol_4_4_4_stacked";b:1;s:23:"omega_12_threecol_4_4_4";b:1;s:15:"omega_12_onecol";b:1;s:27:"flexible:group_panel_layout";b:1;s:28:"flexible:media_teaser_layout";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:practice_group_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:practice_group_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:practice_group_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:practice_group_allowed_types';
  $strongarm->value = array(
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'search_form-search_form' => 'search_form-search_form',
    'search_result-search_result' => 'search_result-search_result',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_help-page_help' => 'page_help-page_help',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_title-page_title' => 'page_title-page_title',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_book-node_form_book' => 'node_form_book-node_form_book',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_comment-node_form_comment' => 'node_form_comment-node_form_comment',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'node_book_children-node_book_children' => 'node_book_children-node_book_children',
    'node_book_nav-node_book_nav' => 'node_book_nav-node_book_nav',
    'node_comments-node_comments' => 'node_comments-node_comments',
    'node_comment_form-node_comment_form' => 'node_comment_form-node_comment_form',
    'node_content-node_content' => 'node_content-node_content',
    'node_created-node_created' => 'node_created-node_created',
    'node_links-node_links' => 'node_links-node_links',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_title-node_title' => 'node_title-node_title',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node-node' => 'node-node',
    'form-form' => 'form-form',
    'contact-contact' => 'contact-contact',
    'user_contact-user_contact' => 'user_contact-user_contact',
    'node_prepopulate-node_prepopulate' => 'node_prepopulate-node_prepopulate',
    'node_create_links-node_create_links' => 'node_create_links-node_create_links',
    'membership_links-membership_links' => 'membership_links-membership_links',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_header-views_header' => 'views_header-views_header',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'views_row-views_row' => 'views_row-views_row',
    'views_view-views_view' => 'views_view-views_view',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:book' => 'token-node:book',
    'token-node:comment-count' => 'token-node:comment-count',
    'token-node:comment-count-new' => 'token-node:comment-count-new',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:total-count' => 'token-node:total-count',
    'token-node:day-count' => 'token-node:day-count',
    'token-node:last-view' => 'token-node:last-view',
    'token-node:original' => 'token-node:original',
    'token-node:is-new' => 'token-node:is-new',
    'token-node:status' => 'token-node:status',
    'token-node:promote' => 'token-node:promote',
    'token-node:sticky' => 'token-node:sticky',
    'token-node:revision' => 'token-node:revision',
    'token-node:comment' => 'token-node:comment',
    'token-node:views' => 'token-node:views',
    'token-node:day-views' => 'token-node:day-views',
    'token-node:field-tags' => 'token-node:field-tags',
    'token-node:field-image' => 'token-node:field-image',
    'token-node:field-link' => 'token-node:field-link',
    'token-node:field-poster-frame' => 'token-node:field-poster-frame',
    'token-node:field-book-page-graphic' => 'token-node:field-book-page-graphic',
    'token-node:field-citations' => 'token-node:field-citations',
    'token-node:field-practice-address' => 'token-node:field-practice-address',
    'token-node:field-practice-phone' => 'token-node:field-practice-phone',
    'token-node:field-practice-website' => 'token-node:field-practice-website',
    'token-node:field-practice-photo' => 'token-node:field-practice-photo',
    'token-node:group-group' => 'token-node:group-group',
    'token-node:group-access' => 'token-node:group-access',
    'token-node:members' => 'token-node:members',
    'token-node:members--1' => 'token-node:members--1',
    'token-node:members--2' => 'token-node:members--2',
    'token-node:members--3' => 'token-node:members--3',
    'token-node:og-group-ref' => 'token-node:og-group-ref',
    'token-node:og-membership' => 'token-node:og-membership',
    'token-node:og-membership--1' => 'token-node:og-membership--1',
    'token-node:og-membership--2' => 'token-node:og-membership--2',
    'token-node:og-membership--3' => 'token-node:og-membership--3',
    'token-node:og-group-ref--og-membership' => 'token-node:og-group-ref--og-membership',
    'token-node:og-group-ref--og-membership--1' => 'token-node:og-group-ref--og-membership--1',
    'token-node:og-group-ref--og-membership--2' => 'token-node:og-group-ref--og-membership--2',
    'token-node:og-group-ref--og-membership--3' => 'token-node:og-group-ref--og-membership--3',
    'token-node:field-doc-image' => 'token-node:field-doc-image',
    'token-node:field-document' => 'token-node:field-document',
    'token-node:field-date-started' => 'token-node:field-date-started',
    'token-node:field-date-task-completed' => 'token-node:field-date-task-completed',
    'token-node:field-person-responsible' => 'token-node:field-person-responsible',
    'token-node:field_tags' => 'token-node:field_tags',
    'token-node:field_image' => 'token-node:field_image',
    'token-node:field_link' => 'token-node:field_link',
    'token-node:field_poster_frame' => 'token-node:field_poster_frame',
    'token-node:field_practice_address' => 'token-node:field_practice_address',
    'token-node:field_practice_phone' => 'token-node:field_practice_phone',
    'token-node:field_practice_website' => 'token-node:field_practice_website',
    'token-node:field_practice_photo' => 'token-node:field_practice_photo',
    'token-node:og_group_ref' => 'token-node:og_group_ref',
    'token-node:group_group' => 'token-node:group_group',
    'token-node:group_access' => 'token-node:group_access',
    'token-node:field_doc_image' => 'token-node:field_doc_image',
    'token-node:field_document' => 'token-node:field_document',
    'token-node:field_book_page_graphic' => 'token-node:field_book_page_graphic',
    'token-node:field_citations' => 'token-node:field_citations',
    'token-node:field_date_started' => 'token-node:field_date_started',
    'token-node:field_date_task_completed' => 'token-node:field_date_task_completed',
    'token-node:field_person_responsible' => 'token-node:field_person_responsible',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:original' => 'token-term:original',
    'token-term:weight' => 'token-term:weight',
    'token-term:parents-all' => 'token-term:parents-all',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:original' => 'token-file:original',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:picture' => 'token-user:picture',
    'token-user:roles' => 'token-user:roles',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:original' => 'token-user:original',
    'token-user:last-access' => 'token-user:last-access',
    'token-user:status' => 'token-user:status',
    'token-user:theme' => 'token-user:theme',
    'token-user:field-first-name' => 'token-user:field-first-name',
    'token-user:field-last-name' => 'token-user:field-last-name',
    'token-user:field-degree-s-' => 'token-user:field-degree-s-',
    'token-user:field-salutation' => 'token-user:field-salutation',
    'token-user:field-practice-job' => 'token-user:field-practice-job',
    'token-user:og-user-node1' => 'token-user:og-user-node1',
    'token-user:og-user-node' => 'token-user:og-user-node',
    'token-user:og-membership' => 'token-user:og-membership',
    'token-user:og-membership--1' => 'token-user:og-membership--1',
    'token-user:og-membership--2' => 'token-user:og-membership--2',
    'token-user:og-membership--3' => 'token-user:og-membership--3',
    'token-user:og-user-node1--og-membership' => 'token-user:og-user-node1--og-membership',
    'token-user:og-user-node1--og-membership--1' => 'token-user:og-user-node1--og-membership--1',
    'token-user:og-user-node1--og-membership--2' => 'token-user:og-user-node1--og-membership--2',
    'token-user:og-user-node1--og-membership--3' => 'token-user:og-user-node1--og-membership--3',
    'token-user:og-user-node--og-membership' => 'token-user:og-user-node--og-membership',
    'token-user:og-user-node--og-membership--1' => 'token-user:og-user-node--og-membership--1',
    'token-user:og-user-node--og-membership--2' => 'token-user:og-user-node--og-membership--2',
    'token-user:og-user-node--og-membership--3' => 'token-user:og-user-node--og-membership--3',
    'token-user:field_first_name' => 'token-user:field_first_name',
    'token-user:field_last_name' => 'token-user:field_last_name',
    'token-user:field_degree_s_' => 'token-user:field_degree_s_',
    'token-user:field_salutation' => 'token-user:field_salutation',
    'token-user:field_practice_job' => 'token-user:field_practice_job',
    'token-user:og_user_node1' => 'token-user:og_user_node1',
    'token-user:og_user_node' => 'token-user:og_user_node',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-array:join-path' => 'token-array:join-path',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-comment:cid' => 'token-comment:cid',
    'token-comment:hostname' => 'token-comment:hostname',
    'token-comment:name' => 'token-comment:name',
    'token-comment:mail' => 'token-comment:mail',
    'token-comment:homepage' => 'token-comment:homepage',
    'token-comment:title' => 'token-comment:title',
    'token-comment:body' => 'token-comment:body',
    'token-comment:url' => 'token-comment:url',
    'token-comment:edit-url' => 'token-comment:edit-url',
    'token-comment:created' => 'token-comment:created',
    'token-comment:changed' => 'token-comment:changed',
    'token-comment:parent' => 'token-comment:parent',
    'token-comment:node' => 'token-comment:node',
    'token-comment:author' => 'token-comment:author',
    'token-comment:original' => 'token-comment:original',
    'token-comment:subject' => 'token-comment:subject',
    'token-comment:status' => 'token-comment:status',
    'token-comment:comment-body' => 'token-comment:comment-body',
    'token-date-field-value:date' => 'token-date-field-value:date',
    'token-date-field-value:to-date' => 'token-date-field-value:to-date',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-site:current-user' => 'token-site:current-user',
    'token-site:current-date' => 'token-site:current-date',
    'token-site:current-page' => 'token-site:current-page',
    'token-site:og-context--node' => 'token-site:og-context--node',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'token-og_membership_type:id' => 'token-og_membership_type:id',
    'token-og_membership_type:description' => 'token-og_membership_type:description',
    'token-og_membership_type:status' => 'token-og_membership_type:status',
    'token-og_membership_type:module' => 'token-og_membership_type:module',
    'token-og_membership_type:language' => 'token-og_membership_type:language',
    'token-og_membership:id' => 'token-og_membership:id',
    'token-og_membership:type' => 'token-og_membership:type',
    'token-og_membership:entity-type' => 'token-og_membership:entity-type',
    'token-og_membership:group-type' => 'token-og_membership:group-type',
    'token-og_membership:state' => 'token-og_membership:state',
    'token-og_membership:created' => 'token-og_membership:created',
    'token-og_membership:field-name' => 'token-og_membership:field-name',
    'token-og_membership:language' => 'token-og_membership:language',
    'token-og_membership:og-membership-request' => 'token-og_membership:og-membership-request',
    'token-og_membership:og_membership_request' => 'token-og_membership:og_membership_request',
    'token-rules_config:id' => 'token-rules_config:id',
    'token-rules_config:label' => 'token-rules_config:label',
    'token-rules_config:plugin' => 'token-rules_config:plugin',
    'token-rules_config:active' => 'token-rules_config:active',
    'token-rules_config:weight' => 'token-rules_config:weight',
    'token-rules_config:status' => 'token-rules_config:status',
    'token-rules_config:dirty' => 'token-rules_config:dirty',
    'token-rules_config:module' => 'token-rules_config:module',
    'token-rules_config:access-exposed' => 'token-rules_config:access-exposed',
    'token-list<comment>:0' => 'token-list<comment>:0',
    'token-list<comment>:1' => 'token-list<comment>:1',
    'token-list<comment>:2' => 'token-list<comment>:2',
    'token-list<comment>:3' => 'token-list<comment>:3',
    'token-list<node>:0' => 'token-list<node>:0',
    'token-list<node>:1' => 'token-list<node>:1',
    'token-list<node>:2' => 'token-list<node>:2',
    'token-list<node>:3' => 'token-list<node>:3',
    'token-list<og_membership_type>:0' => 'token-list<og_membership_type>:0',
    'token-list<og_membership_type>:1' => 'token-list<og_membership_type>:1',
    'token-list<og_membership_type>:2' => 'token-list<og_membership_type>:2',
    'token-list<og_membership_type>:3' => 'token-list<og_membership_type>:3',
    'token-list<og_membership>:0' => 'token-list<og_membership>:0',
    'token-list<og_membership>:1' => 'token-list<og_membership>:1',
    'token-list<og_membership>:2' => 'token-list<og_membership>:2',
    'token-list<og_membership>:3' => 'token-list<og_membership>:3',
    'token-list<file>:0' => 'token-list<file>:0',
    'token-list<file>:1' => 'token-list<file>:1',
    'token-list<file>:2' => 'token-list<file>:2',
    'token-list<file>:3' => 'token-list<file>:3',
    'token-list<term>:0' => 'token-list<term>:0',
    'token-list<term>:1' => 'token-list<term>:1',
    'token-list<term>:2' => 'token-list<term>:2',
    'token-list<term>:3' => 'token-list<term>:3',
    'token-list<vocabulary>:0' => 'token-list<vocabulary>:0',
    'token-list<vocabulary>:1' => 'token-list<vocabulary>:1',
    'token-list<vocabulary>:2' => 'token-list<vocabulary>:2',
    'token-list<vocabulary>:3' => 'token-list<vocabulary>:3',
    'token-list<user>:0' => 'token-list<user>:0',
    'token-list<user>:1' => 'token-list<user>:1',
    'token-list<user>:2' => 'token-list<user>:2',
    'token-list<user>:3' => 'token-list<user>:3',
    'token-list<rules_config>:0' => 'token-list<rules_config>:0',
    'token-list<rules_config>:1' => 'token-list<rules_config>:1',
    'token-list<rules_config>:2' => 'token-list<rules_config>:2',
    'token-list<rules_config>:3' => 'token-list<rules_config>:3',
    'token-list<date>:0' => 'token-list<date>:0',
    'token-list<date>:1' => 'token-list<date>:1',
    'token-list<date>:2' => 'token-list<date>:2',
    'token-list<date>:3' => 'token-list<date>:3',
    'entity_form_field-comment:comment_body' => 'entity_form_field-comment:comment_body',
    'entity_form_field-node:og_group_ref' => 'entity_form_field-node:og_group_ref',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_tags' => 'entity_form_field-node:field_tags',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'entity_form_field-node:field_book_page_graphic' => 'entity_form_field-node:field_book_page_graphic',
    'entity_form_field-node:field_citations' => 'entity_form_field-node:field_citations',
    'entity_form_field-node:field_doc_image' => 'entity_form_field-node:field_doc_image',
    'entity_form_field-node:field_document' => 'entity_form_field-node:field_document',
    'entity_form_field-node:field_practice_address' => 'entity_form_field-node:field_practice_address',
    'entity_form_field-node:field_practice_phone' => 'entity_form_field-node:field_practice_phone',
    'entity_form_field-node:field_practice_website' => 'entity_form_field-node:field_practice_website',
    'entity_form_field-node:field_practice_photo' => 'entity_form_field-node:field_practice_photo',
    'entity_form_field-node:group_group' => 'entity_form_field-node:group_group',
    'entity_form_field-node:group_access' => 'entity_form_field-node:group_access',
    'entity_form_field-node:field_link' => 'entity_form_field-node:field_link',
    'entity_form_field-node:field_poster_frame' => 'entity_form_field-node:field_poster_frame',
    'entity_form_field-node:field_date_started' => 'entity_form_field-node:field_date_started',
    'entity_form_field-node:field_date_task_completed' => 'entity_form_field-node:field_date_task_completed',
    'entity_form_field-node:field_person_responsible' => 'entity_form_field-node:field_person_responsible',
    'entity_form_field-og_membership:og_membership_request' => 'entity_form_field-og_membership:og_membership_request',
    'entity_form_field-user:field_first_name' => 'entity_form_field-user:field_first_name',
    'entity_form_field-user:field_last_name' => 'entity_form_field-user:field_last_name',
    'entity_form_field-user:field_degree_s_' => 'entity_form_field-user:field_degree_s_',
    'entity_form_field-user:field_salutation' => 'entity_form_field-user:field_salutation',
    'entity_form_field-user:field_practice_job' => 'entity_form_field-user:field_practice_job',
    'entity_form_field-user:og_user_node1' => 'entity_form_field-user:og_user_node1',
    'entity_form_field-user:og_user_node' => 'entity_form_field-user:og_user_node',
    'entity_field-comment:comment_body' => 'entity_field-comment:comment_body',
    'entity_field-node:og_group_ref' => 'entity_field-node:og_group_ref',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_tags' => 'entity_field-node:field_tags',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'entity_field-node:field_book_page_graphic' => 'entity_field-node:field_book_page_graphic',
    'entity_field-node:field_citations' => 'entity_field-node:field_citations',
    'entity_field-node:field_doc_image' => 'entity_field-node:field_doc_image',
    'entity_field-node:field_document' => 'entity_field-node:field_document',
    'entity_field-node:field_practice_address' => 'entity_field-node:field_practice_address',
    'entity_field-node:field_practice_phone' => 'entity_field-node:field_practice_phone',
    'entity_field-node:field_practice_website' => 'entity_field-node:field_practice_website',
    'entity_field-node:field_practice_photo' => 'entity_field-node:field_practice_photo',
    'entity_field-node:group_group' => 'entity_field-node:group_group',
    'entity_field-node:group_access' => 'entity_field-node:group_access',
    'entity_field-node:field_link' => 'entity_field-node:field_link',
    'entity_field-node:field_poster_frame' => 'entity_field-node:field_poster_frame',
    'entity_field-node:field_date_started' => 'entity_field-node:field_date_started',
    'entity_field-node:field_date_task_completed' => 'entity_field-node:field_date_task_completed',
    'entity_field-node:field_person_responsible' => 'entity_field-node:field_person_responsible',
    'entity_field-og_membership:og_membership_request' => 'entity_field-og_membership:og_membership_request',
    'entity_field-user:field_first_name' => 'entity_field-user:field_first_name',
    'entity_field-user:field_last_name' => 'entity_field-user:field_last_name',
    'entity_field-user:field_degree_s_' => 'entity_field-user:field_degree_s_',
    'entity_field-user:field_salutation' => 'entity_field-user:field_salutation',
    'entity_field-user:field_practice_job' => 'entity_field-user:field_practice_job',
    'entity_field-user:og_user_node1' => 'entity_field-user:og_user_node1',
    'entity_field-user:og_user_node' => 'entity_field-user:og_user_node',
    'entity_field_extra-node:webform' => 'entity_field_extra-node:webform',
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'custom-custom' => 'custom-custom',
    'block-comment-recent' => 'block-comment-recent',
    'block-devel_node_access-dna_node' => 'block-devel_node_access-dna_node',
    'block-devel_node_access-dna_user' => 'block-devel_node_access-dna_user',
    'block-menu-devel' => 'block-menu-devel',
    'block-menu-menu-my-practice-admin' => 'block-menu-menu-my-practice-admin',
    'block-menu-menu-navigation' => 'block-menu-menu-navigation',
    'block-menu-menu-practice-groups' => 'block-menu-menu-practice-groups',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-og_extras-group_info' => 'block-og_extras-group_info',
    'block-og_extras-node_links' => 'block-og_extras-node_links',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-devel-execute_php' => 'block-devel-execute_php',
    'block-devel-switch_user' => 'block-devel-switch_user',
    'entity_view-comment' => 'entity_view-comment',
    'entity_view-node' => 'entity_view-node',
    'entity_view-og_membership_type' => 'entity_view-og_membership_type',
    'entity_view-og_membership' => 'entity_view-og_membership',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'entity_view-rules_config' => 'entity_view-rules_config',
    'views-clone_of_og_extras_groups' => 'views-clone_of_og_extras_groups',
    'views-clone_of_og_user_groups' => 'views-clone_of_og_user_groups',
    'views-resources' => 'views-resources',
    'views-og_user_groups' => 'views-og_user_groups',
    'views-og_extras_members' => 'views-og_extras_members',
    'views-rules_scheduler' => 'views-rules_scheduler',
    'views_panes-clone_of_og_user_groups-panel_pane_1' => 'views_panes-clone_of_og_user_groups-panel_pane_1',
    'views_panes-og_user_groups-panel_pane_1' => 'views_panes-og_user_groups-panel_pane_1',
  );
  $export['panelizer_node:practice_group_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:practice_group_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:practice_group_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:practice_group_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:practice_group_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_practice_group_pattern';
  $strongarm->value = 'practice/[node:title]';
  $export['pathauto_node_practice_group_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_practice_jobs_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_practice_jobs_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_special_practice_role_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_special_practice_role_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_practice';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_practice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_practice_group';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_practice_group'] = $strongarm;

  return $export;
}
