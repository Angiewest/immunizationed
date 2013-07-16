<?php
/**
 * @file
 * immunizationed_pillar_tags.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function immunizationed_pillar_tags_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_guid'
  $field_bases['field_guid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_type' => 'taxonomy_term',
    'entity_types' => array(),
    'field_name' => 'field_guid',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_pillar_tags'
  $field_bases['field_pillar_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pillar_tags',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'taxonomy_pillar_tags_',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_synonym'
  $field_bases['field_synonym'] = array(
    'active' => 1,
    'cardinality' => 0,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_synonym',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
