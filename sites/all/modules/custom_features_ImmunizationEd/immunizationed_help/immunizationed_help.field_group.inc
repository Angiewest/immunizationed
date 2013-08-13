<?php
/**
 * @file
 * immunizationed_help.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function immunizationed_help_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|help_topic|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_topic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '7',
    'children' => array(
      0 => 'group_image',
      1 => 'group_document',
      2 => 'group_video',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => '',
      ),
    ),
  );
  $export['group_attachments|node|help_topic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document|node|help_topic|form';
  $field_group->group_name = 'group_document';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_topic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attachments';
  $field_group->data = array(
    'label' => 'Attach Document',
    'weight' => '13',
    'children' => array(
      0 => 'field_document',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Attach Document',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_document|node|help_topic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|help_topic|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_topic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attachments';
  $field_group->data = array(
    'label' => 'Attach Image',
    'weight' => '12',
    'children' => array(
      0 => 'field_resource_image',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Attach Image',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_image|node|help_topic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|help_topic|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_topic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_applicable_roles',
      1 => 'field_content_type_reference_for',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|help_topic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|help_topic|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_topic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attachments';
  $field_group->data = array(
    'label' => 'Attach Video',
    'weight' => '14',
    'children' => array(
      0 => 'field_reference_to_onsite_video',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Attach Video',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_video|node|help_topic|form'] = $field_group;

  return $export;
}
