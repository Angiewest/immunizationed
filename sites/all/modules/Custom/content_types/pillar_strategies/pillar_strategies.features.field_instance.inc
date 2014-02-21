<?php
/**
 * @file
 * pillar_strategies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pillar_strategies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-convenient_vaccination_services-field_assembly_instruction'
  $field_instances['node-convenient_vaccination_services-field_assembly_instruction'] = array(
    'bundle' => 'convenient_vaccination_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_assembly_instruction',
    'label' => 'Assembly instruction',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-convenient_vaccination_services-field_other_please_specify_p1'
  $field_instances['node-convenient_vaccination_services-field_other_please_specify_p1'] = array(
    'bundle' => 'convenient_vaccination_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your original convenient vaccination system strategy, or you can create a new strategy here. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_please_specify_p1',
    'label' => 'Other - please specify',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-convenient_vaccination_services-field_req_assembly_instruc_p1'
  $field_instances['node-convenient_vaccination_services-field_req_assembly_instruc_p1'] = array(
    'bundle' => 'convenient_vaccination_services',
    'default_value' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
    'deleted' => 0,
    'description' => 'We highly recommend that you extend your influenza vaccination season by vaccinating early and going through March. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_req_assembly_instruc_p1',
    'label' => 'Required assembly instruction',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-enhanced_vaccination_systems-field_assembly_instruction_p3'
  $field_instances['node-enhanced_vaccination_systems-field_assembly_instruction_p3'] = array(
    'bundle' => 'enhanced_vaccination_systems',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Below is a list of strategies you and your clinic can use to enhance your office vaccination system. The first strategy is required. Please select your choices from the optional list below. If you have a great idea on how to enhance your office vaccination system, please type it in below. Finish by clicking "Save".
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_assembly_instruction_p3',
    'label' => 'Assembly instruction',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-enhanced_vaccination_systems-field_other_please_specify_p3'
  $field_instances['node-enhanced_vaccination_systems-field_other_please_specify_p3'] = array(
    'bundle' => 'enhanced_vaccination_systems',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your original strategy for enhancing vaccination systems, or you can create a new strategy here. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_please_specify_p3',
    'label' => 'Other - please specify',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-enhanced_vaccination_systems-field_req_assembly_instruc_p3'
  $field_instances['node-enhanced_vaccination_systems-field_req_assembly_instruc_p3'] = array(
    'bundle' => 'enhanced_vaccination_systems',
    'default_value' => array(
      0 => array(
        'tid' => 26,
      ),
    ),
    'deleted' => 0,
    'description' => 'We highly recommend that you use Standing Orders Programs (SOPs) for vaccination in your clinic.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_req_assembly_instruc_p3',
    'label' => 'Required assembly instruction',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-motivation-field_assembly_instruction_p4'
  $field_instances['node-motivation-field_assembly_instruction_p4'] = array(
    'bundle' => 'motivation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is a list of strategies you and your clinic can use to keep people motivated. Please select your choices from the optional list above. If you have a great idea on how to motivate your clinic and staff, please type it in below. Finish by clicking "Save".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_assembly_instruction_p4',
    'label' => 'Assembly instruction',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-motivation-field_other_please_specify_p4'
  $field_instances['node-motivation-field_other_please_specify_p4'] = array(
    'bundle' => 'motivation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your original motivation strategy, or you can create a new strategy here. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_please_specify_p4',
    'label' => 'Other - please specify',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-motivation-field_req_assembly_instruc_p4'
  $field_instances['node-motivation-field_req_assembly_instruc_p4'] = array(
    'bundle' => 'motivation',
    'default_value' => array(
      0 => array(
        'tid' => 27,
      ),
    ),
    'deleted' => 0,
    'description' => 'We highly recommend that you ensure that your clinic has sufficient vaccine inventory. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_req_assembly_instruc_p4',
    'label' => 'Required assembly instruction',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-patient_notification-field_assembly_instruction_p2'
  $field_instances['node-patient_notification-field_assembly_instruction_p2'] = array(
    'bundle' => 'patient_notification',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Below is a list of strategies you and your clinic can use to notify patients about the importance of vaccination. The first strategy is required. Please select your choices from the optional list below. If you have a great idea on how to increase patient notification about vaccinations, please type it in below. Finish by clicking "Save".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_assembly_instruction_p2',
    'label' => 'Assembly instruction',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-patient_notification-field_other_please_specify_p2'
  $field_instances['node-patient_notification-field_other_please_specify_p2'] = array(
    'bundle' => 'patient_notification',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your original patient notification strategy, or you can create a new strategy here. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_please_specify_p2',
    'label' => 'Other - please specify',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-patient_notification-field_req_assembly_instruc_p2'
  $field_instances['node-patient_notification-field_req_assembly_instruc_p2'] = array(
    'bundle' => 'patient_notification',
    'default_value' => array(
      0 => array(
        'tid' => 15,
      ),
    ),
    'deleted' => 0,
    'description' => 'We highly recommend that you discuss the serious nature of vaccine preventable diseases with each patient at each patient visit. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_req_assembly_instruc_p2',
    'label' => 'Required assembly instruction',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-patient_notification-og_group_ref'
  $field_instances['node-patient_notification-og_group_ref'] = array(
    'bundle' => 'patient_notification',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Practice',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'og_context' => 1,
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Assembly instruction');
  t('Below is a list of strategies you and your clinic can use to enhance your office vaccination system. The first strategy is required. Please select your choices from the optional list below. If you have a great idea on how to enhance your office vaccination system, please type it in below. Finish by clicking "Save".
');
  t('Below is a list of strategies you and your clinic can use to notify patients about the importance of vaccination. The first strategy is required. Please select your choices from the optional list below. If you have a great idea on how to increase patient notification about vaccinations, please type it in below. Finish by clicking "Save".');
  t('Other - please specify');
  t('Please enter your original convenient vaccination system strategy, or you can create a new strategy here. ');
  t('Please enter your original motivation strategy, or you can create a new strategy here. ');
  t('Please enter your original patient notification strategy, or you can create a new strategy here. ');
  t('Please enter your original strategy for enhancing vaccination systems, or you can create a new strategy here. ');
  t('Practice');
  t('Required assembly instruction');
  t('This is a list of strategies you and your clinic can use to keep people motivated. Please select your choices from the optional list above. If you have a great idea on how to motivate your clinic and staff, please type it in below. Finish by clicking "Save".');
  t('We highly recommend that you discuss the serious nature of vaccine preventable diseases with each patient at each patient visit. ');
  t('We highly recommend that you ensure that your clinic has sufficient vaccine inventory. ');
  t('We highly recommend that you extend your influenza vaccination season by vaccinating early and going through March. ');
  t('We highly recommend that you use Standing Orders Programs (SOPs) for vaccination in your clinic.');

  return $field_instances;
}
