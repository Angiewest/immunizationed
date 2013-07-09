<?php
/**
 * @file
 * immunizationed_practice.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function immunizationed_practice_taxonomy_default_vocabularies() {
  return array(
    'practice_jobs' => array(
      'name' => 'Practice Jobs',
      'machine_name' => 'practice_jobs',
      'description' => 'Job functions of practice employees.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
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
