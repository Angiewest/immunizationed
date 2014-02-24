<?php
/**
 * @file
 * help_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function help_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Pillar 3: Enhanced Office Vaccination Systems',
    'description' => '<p><span style="color: rgb(77, 77, 77); font-family: Arial, Helvetica, sans-serif; line-height: normal; background-color: rgb(247, 251, 253);">Enhanced office vaccination systems</span></p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '3d054a37-7ec9-4502-8e20-540031dade4b',
    'vocabulary_machine_name' => 'taxonomy_pillar_tags_',
    'field_guid' => array(),
    'field_synonym' => array(),
    'guid' => 'http://localhost:8888/immunizationed/taxonomypillartagsxmlxml/pillar-3',
  );
  $terms[] = array(
    'name' => 'Pillar 4: Motivation',
    'description' => '<p><span style="color: rgb(77, 77, 77); font-family: Arial, Helvetica, sans-serif; line-height: normal; background-color: rgb(247, 251, 253);">Motivation– Office immunization champion tracks progress towards a goal</span></p>',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '8c8ff76a-ff94-4996-9c83-21afa4d2e48c',
    'vocabulary_machine_name' => 'taxonomy_pillar_tags_',
    'field_guid' => array(),
    'field_synonym' => array(),
    'guid' => 'http://localhost:8888/immunizationed/taxonomypillartagsxmlxml/pillar-4',
  );
  $terms[] = array(
    'name' => 'Pillar 1: Convenient Vaccination Services',
    'description' => '<p>tag for content associated with pillar 1, convenient vaccination services</p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9026e928-0814-4115-99f3-d14b27433f67',
    'vocabulary_machine_name' => 'taxonomy_pillar_tags_',
    'field_guid' => array(),
    'field_synonym' => array(),
    'guid' => 'http://localhost:8888/immunizationed/taxonomypillartagsxmlxml/pillar-1',
  );
  $terms[] = array(
    'name' => 'Pillar 2: Patient Notification',
    'description' => '<p><span style="color: rgb(77, 77, 77); font-family: Arial, Helvetica, sans-serif; line-height: normal; background-color: rgb(247, 251, 253);">Patient notification of importance and availability</span></p>',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'e752d7fd-eb6f-482a-85a2-23c9f811f9c2',
    'vocabulary_machine_name' => 'taxonomy_pillar_tags_',
    'field_guid' => array(),
    'field_synonym' => array(),
    'guid' => 'http://localhost:8888/immunizationed/taxonomypillartagsxmlxml/pillar-2',
  );
  return $terms;
}
