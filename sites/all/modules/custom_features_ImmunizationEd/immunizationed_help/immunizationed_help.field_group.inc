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
  $field_group->identifier = 'group_attachments|node|help_manual_page|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_manual_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '7',
    'children' => array(
      0 => 'group_document',
      1 => 'group_graphic',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-attachments field-group-accordion',
      ),
    ),
  );
  $export['group_attachments|node|help_manual_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document|node|help_manual_page|form';
  $field_group->group_name = 'group_document';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_manual_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attachments';
  $field_group->data = array(
    'label' => 'Attach Document',
    'weight' => '11',
    'children' => array(
      0 => 'field_document',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Attach Document',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-document field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_document|node|help_manual_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_graphic|node|help_manual_page|form';
  $field_group->group_name = 'group_graphic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_manual_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_attachments';
  $field_group->data = array(
    'label' => 'Attach Graphic',
    'weight' => '12',
    'children' => array(
      0 => 'field_book_page_graphic',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Attach Graphic',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-graphic field-group-accordion-item',
        'description' => 'Attach a graphic to be displayed with some views',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_graphic|node|help_manual_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|help_manual_page|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'help_manual_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_applicable_roles',
      1 => 'field_content_type_reference_for',
      2 => 'field_pillar_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-tags field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tags|node|help_manual_page|form'] = $field_group;

  return $export;
}
