<?php
/**
 * @file
 * export_assembly_instruction.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function export_assembly_instruction_taxonomy_default_vocabularies() {
  return array(
    'special_practice_role' => array(
      'name' => 'Special Practice Role',
      'machine_name' => 'special_practice_role',
      'description' => 'These roles are assigned to volunteers with extra responsibilities for this site. ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
