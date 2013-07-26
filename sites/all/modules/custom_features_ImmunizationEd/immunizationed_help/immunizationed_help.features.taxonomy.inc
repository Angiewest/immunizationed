<?php
/**
 * @file
 * immunizationed_help.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function immunizationed_help_taxonomy_default_vocabularies() {
  return array(
    'help' => array(
      'name' => 'Help topics',
      'machine_name' => 'help',
      'description' => 'Vocabulary for sorting help posts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
