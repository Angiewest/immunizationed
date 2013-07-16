<?php
/**
 * @file
 * immunizationed_pillar_tags.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function immunizationed_pillar_tags_taxonomy_default_vocabularies() {
  return array(
    'taxonomy_pillar_tags_' => array(
      'name' => 'Pillar tags',
      'machine_name' => 'taxonomy_pillar_tags_',
      'description' => '',
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
