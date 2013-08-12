<?php
/**
 * @file
 * immunizationed_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function immunizationed_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('Use to upload a document as a building block'),
      'has_title' => '1',
      'title_label' => t('Document Title'),
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
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
