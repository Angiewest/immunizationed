<?php
/**
 * @file
 * immunizationed_pillar_tags.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function immunizationed_pillar_tags_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-taxonomy_pillar_tags_-field_guid'
  $field_instances['taxonomy_term-taxonomy_pillar_tags_-field_guid'] = array(
    'bundle' => 'taxonomy_pillar_tags_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Unique global identifier for this term. Usually an URL or URI, but need not be resolvable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_guid',
    'label' => 'GUID',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-taxonomy_pillar_tags_-field_synonym'
  $field_instances['taxonomy_term-taxonomy_pillar_tags_-field_synonym'] = array(
    'bundle' => 'taxonomy_pillar_tags_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative names for this term. Note that this data has no special meaning unless extended with other Drupal extensions.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_synonym',
    'label' => 'Synonyms',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternative names for this term. Note that this data has no special meaning unless extended with other Drupal extensions.');
  t('GUID');
  t('Synonyms');
  t('Unique global identifier for this term. Usually an URL or URI, but need not be resolvable.');

  return $field_instances;
}
