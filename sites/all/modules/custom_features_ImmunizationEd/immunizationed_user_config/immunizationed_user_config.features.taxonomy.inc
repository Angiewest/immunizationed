<?php
/**
 * @file
 * immunizationed_user_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function immunizationed_user_config_taxonomy_default_vocabularies() {
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
  );
}
