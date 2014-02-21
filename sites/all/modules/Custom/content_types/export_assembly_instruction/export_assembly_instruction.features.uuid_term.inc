<?php
/**
 * @file
 * export_assembly_instruction.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function export_assembly_instruction_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Project Manager',
    'description' => '<p>The practice <em>Immunization Champion </em>is&nbsp;responsible for motivating the team</p>',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '0026462b-fa74-4fec-8800-6e197c3dde53',
    'vocabulary_machine_name' => 'special_practice_role',
    'guid' => 'http://localhost:8888/immunizationed/special-practice-role/project-manager',
  );
  $terms[] = array(
    'name' => 'Architect',
    'description' => '<p>The <em>Lead Physician</em> is responsible for clinical implementation.</p>',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '1ba51eb0-11fd-403a-b299-5b5e71bcab8e',
    'vocabulary_machine_name' => 'special_practice_role',
    'guid' => 'http://localhost:8888/immunizationed/special-practice-role/architect',
  );
  $terms[] = array(
    'name' => 'Manager',
    'description' => '<p>The <em>Lead Administrator</em> is responsible for logistics and implementation management.</p>',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '2108130b-d33e-4dc0-af43-2b545b1622c8',
    'vocabulary_machine_name' => 'special_practice_role',
    'guid' => 'http://localhost:8888/immunizationed/special-practice-role/manager',
  );
  $terms[] = array(
    'name' => 'Foreman',
    'description' => '<p><span style="color: rgb(59, 59, 59); font-family: Georgia, \'Times New Roman\', Times, serif; font-size: 14px; line-height: 21px;">Role for medical manager, generally a head nurse.</span></p>',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8555c8cf-0749-4fe9-a12b-77ddef58c5c7',
    'vocabulary_machine_name' => 'special_practice_role',
    'guid' => 'http://localhost:8888/immunizationed/special-practice-role/foreman',
  );
  return $terms;
}
