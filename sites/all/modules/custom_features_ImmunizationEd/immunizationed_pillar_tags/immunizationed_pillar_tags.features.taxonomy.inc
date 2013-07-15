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
    'pillar_tags' => array(
      'name' => 'Pillar tags',
      'machine_name' => 'pillar_tags',
      'description' => 'Tags for categorizing content associated with pillars',
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
