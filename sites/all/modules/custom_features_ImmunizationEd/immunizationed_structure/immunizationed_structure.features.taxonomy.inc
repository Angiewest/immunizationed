<?php
/**
 * @file
 * immunizationed_structure.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function immunizationed_structure_taxonomy_default_vocabularies() {
  return array(
    'certification_entities' => array(
      'name' => 'Certification entities',
      'machine_name' => 'certification_entities',
      'description' => 'entities that require disclosures on content',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
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
    'form_relationships' => array(
      'name' => 'Form relationships',
      'machine_name' => 'form_relationships',
      'description' => 'forms that need to be associated with content',
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
    'tags' => array(
      'name' => 'Content Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group content into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
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
