<?php
/**
 * @file
 * immunizationed_emr_importer.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function immunizationed_emr_importer_taxonomy_default_vocabularies() {
  return array(
    'data_type' => array(
      'name' => 'Data type',
      'machine_name' => 'data_type',
      'description' => 'Data type description',
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
