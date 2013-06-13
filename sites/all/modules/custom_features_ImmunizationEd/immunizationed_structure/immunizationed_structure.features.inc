<?php
/**
 * @file
 * immunizationed_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function immunizationed_structure_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Project Update'),
      'base' => 'node_content',
      'description' => t('Broadcast an announcement to your practice'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for text content like instructions or posts to be used as building blocks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials to be used as building blocks.'),
      'has_title' => '1',
      'title_label' => t('Book page heading'),
      'help' => '',
    ),
    'convenient_vaccination_services' => array(
      'name' => t('Convenient Vaccination Services'),
      'base' => 'node_content',
      'description' => t('This content will be for Pillar 1: Convenient Vaccination Services/ Easy Access. This will include all references and information for Pillar 1. '),
      'has_title' => '1',
      'title_label' => t('Convenient Vaccination Services'),
      'help' => t('Create information for Pillar 1. '),
    ),
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('Use to upload a document as a building block'),
      'has_title' => '1',
      'title_label' => t('Document Title'),
      'help' => '',
    ),
    'enhanced_vaccination_systems' => array(
      'name' => t('Enhanced Vaccination Systems'),
      'base' => 'node_content',
      'description' => t('This is Pillar 3: Enhanced Office Vaccination Systems. Any content here will be associated with enhancing office system to reduce missed opportunities and increase immunizations. Pillar 3. '),
      'has_title' => '1',
      'title_label' => t('Enhanced Vaccination Systems'),
      'help' => t('Add content about Pillar 3: Enhancing Vaccination Systems. '),
    ),
    'meeting_agenda' => array(
      'name' => t('Meeting Agenda'),
      'base' => 'node_content',
      'description' => t('You can add content from the Meeting Agenda document. Information collected here will be items on the agenda.'),
      'has_title' => '1',
      'title_label' => t('Meeting Agenda'),
      'help' => '',
    ),
    'motivation' => array(
      'name' => t('Motivation'),
      'base' => 'node_content',
      'description' => t('This is Pillar 4: Motivation. Content to be placed in this section should be associated with motivation strategies through Pillar 4. '),
      'has_title' => '1',
      'title_label' => t('Motivation'),
      'help' => '',
    ),
    'nuts_bolts' => array(
      'name' => t('Nuts & Bolts'),
      'base' => 'node_content',
      'description' => t('This will include information for viewers to understand the foundational items of PittVax, the Toolkit, and the website. This includes info on technical requirements, Privacy Policy, etc. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'offsite_resource' => array(
      'name' => t('Offsite Resource'),
      'base' => 'node_content',
      'description' => t('Use for resources like toolkits, forms, or materials from other websites. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'other_additions_to_views' => array(
      'name' => t('Other Additions to Views'),
      'base' => 'node_content',
      'description' => t('This content will be additions that will be seen on various views that we can\'t put anywhere else. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'patient_notification' => array(
      'name' => t('Patient Notification'),
      'base' => 'node_content',
      'description' => t('This is Pillar 2: Patient notification about the importance of vaccination and the availability of convenient programs. This content will be about Pillar 2.'),
      'has_title' => '1',
      'title_label' => t('Patient Notification'),
      'help' => t('Enter things here that will accomodate Pillar 2 things.'),
    ),
    'practice_admin_group' => array(
      'name' => t('Practice Admin Group'),
      'base' => 'node_content',
      'description' => t('Private group for practice admins'),
      'has_title' => '1',
      'title_label' => t('Practice Admin Group Name'),
      'help' => '',
    ),
    'practice_group' => array(
      'name' => t('Practice'),
      'base' => 'node_content',
      'description' => t('Clinical practice enrolled in the 4 Pillars Toolkit Project to Build Adult Immunizations'),
      'has_title' => '1',
      'title_label' => t('Practice Name'),
      'help' => '',
    ),
    'required_disclosure' => array(
      'name' => t('Required Disclosure'),
      'base' => 'node_content',
      'description' => t('Required disclosures'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('enter any disclosure statements to be displayed with site content'),
    ),
    'roadmap_waypoint' => array(
      'name' => t('Assembly instructions'),
      'base' => 'node_content',
      'description' => t('Master instructions for assembly steps. All elements will be cloned as assembly steps at enrollment'),
      'has_title' => '1',
      'title_label' => t('Assembly Instruction'),
      'help' => t('Add master tasks to be cloned on practice creation.'),
    ),
    'task' => array(
      'name' => t('Assembly Step'),
      'base' => 'node_content',
      'description' => t('Use to create single assembly steps for individual practices.'),
      'has_title' => '1',
      'title_label' => t('Assembly Step'),
      'help' => '',
    ),
    'vaccination_data_from_emr' => array(
      'name' => t('Vaccination data from EMR'),
      'base' => 'node_content',
      'description' => t('Contains vaccination data from EMR'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Use to upload a video as a building block'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
