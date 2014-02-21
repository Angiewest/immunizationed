<?php
/**
 * @file
 * pillar_strategies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pillar_strategies_taxonomy_default_vocabularies() {
  return array(
    'convenient_vaccination_services_other' => array(
      'name' => 'Convenient Vaccination Services - other',
      'machine_name' => 'convenient_vaccination_services_other',
      'description' => 'user provided other options for pillar 1',
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
    'convenient_vaccination_services_strategies' => array(
      'name' => 'Convenient Vaccination Services Strategies',
      'machine_name' => 'convenient_vaccination_services_strategies',
      'description' => 'Choose a strategy to expand the convenience of vaccination distribution in your clinic.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
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
    'enhanced_office_vaccination_systems_strategies' => array(
      'name' => 'Enhanced Office Vaccination Systems Strategies',
      'machine_name' => 'enhanced_office_vaccination_systems_strategies',
      'description' => 'These strategies will allow your office to modify vaccination systems to reduce missed opportunities to vaccinate.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
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
    'enhanced_vaccination_systems_other' => array(
      'name' => 'Enhanced Vaccination Systems - other',
      'machine_name' => 'enhanced_vaccination_systems_other',
      'description' => 'user provided other options for pillar 3',
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
    'motivation' => array(
      'name' => 'Motivation - other',
      'machine_name' => 'motivation',
      'description' => 'user provided other options for pillar 4',
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
    'motivation_strategies_' => array(
      'name' => 'Motivation Strategies',
      'machine_name' => 'motivation_strategies_',
      'description' => 'These strategies will help motivate your clinic to increase vaccination rates, with the advisement of your Immunization Champ',
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
    'patient_notification_other' => array(
      'name' => 'Patient Notification - Other',
      'machine_name' => 'patient_notification_other',
      'description' => 'user provided other options for pillar 2',
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
    'patient_notification_strategies' => array(
      'name' => 'Patient Notification Strategies',
      'machine_name' => 'patient_notification_strategies',
      'description' => 'These strategies are ways to notify patients about the importance of vaccination and the availability of convenient programs.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
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
