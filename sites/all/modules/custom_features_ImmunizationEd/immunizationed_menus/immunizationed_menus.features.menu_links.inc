<?php
/**
 * @file
 * immunizationed_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function immunizationed_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:blueprints
  $menu_links['main-menu:blueprints'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blueprints',
    'router_path' => 'blueprints',
    'link_title' => 'Blueprints',
    'options' => array(
      'attributes' => array(
        'title' => 'The blueprint to building the 4 Pillars of immunization success',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
  );
  // Exported menu link: main-menu:building-blocks
  $menu_links['main-menu:building-blocks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'building-blocks',
    'router_path' => 'building-blocks',
    'link_title' => 'Building Blocks',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => '4 Pillars Toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Instructions to improve immunization rates',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:practice-admin
  $menu_links['main-menu:practice-admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'practice-admin',
    'router_path' => 'practice-admin',
    'link_title' => 'Admin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 45,
  );
  // Exported menu link: main-menu:practices
  $menu_links['main-menu:practices'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'practices',
    'router_path' => 'practices',
    'link_title' => 'Practices',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
  );
  // Exported menu link: menu-add-content:node/add
  $menu_links['menu-add-content:node/add'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
  );
  // Exported menu link: menu-add-content:node/add/announcement
  $menu_links['menu-add-content:node/add/announcement'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/announcement',
    'router_path' => 'node/add/announcement',
    'link_title' => 'Project Update',
    'options' => array(
      'attributes' => array(
        'title' => 'Broadcast an announcement to your practice',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/article
  $menu_links['menu-add-content:node/add/article'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for text content like instructions or posts to be used as building blocks',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/book
  $menu_links['menu-add-content:node/add/book'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Book page',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials to be used as building blocks.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/document
  $menu_links['menu-add-content:node/add/document'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to upload a document as a building block',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/nuts-bolts
  $menu_links['menu-add-content:node/add/nuts-bolts'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/nuts-bolts',
    'router_path' => 'node/add/nuts-bolts',
    'link_title' => 'Nuts & Bolts',
    'options' => array(
      'attributes' => array(
        'title' => 'This will include information for viewers to understand the foundational items of PittVax, the Toolkit, and the website. This includes info on technical requirements, Privacy Policy, etc. ',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/offsite-resource
  $menu_links['menu-add-content:node/add/offsite-resource'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/offsite-resource',
    'router_path' => 'node/add/offsite-resource',
    'link_title' => 'Offsite Resource',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for resources like toolkits, forms, or materials from other websites. ',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/page
  $menu_links['menu-add-content:node/add/page'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/panel
  $menu_links['menu-add-content:node/add/panel'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/practice-admin-group
  $menu_links['menu-add-content:node/add/practice-admin-group'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/practice-admin-group',
    'router_path' => 'node/add/practice-admin-group',
    'link_title' => 'Practice Admin Group',
    'options' => array(
      'attributes' => array(
        'title' => 'Private group for practice admins',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/practice-group
  $menu_links['menu-add-content:node/add/practice-group'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/practice-group',
    'router_path' => 'node/add/practice-group',
    'link_title' => 'Practice',
    'options' => array(
      'attributes' => array(
        'title' => 'Clinical practice enrolled in the 4 Pillars Toolkit Project to Build Adult Immunizations',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/required-disclosure
  $menu_links['menu-add-content:node/add/required-disclosure'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/required-disclosure',
    'router_path' => 'node/add/required-disclosure',
    'link_title' => 'Required Disclosure',
    'options' => array(
      'attributes' => array(
        'title' => 'Required disclosures',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/roadmap-waypoint
  $menu_links['menu-add-content:node/add/roadmap-waypoint'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/roadmap-waypoint',
    'router_path' => 'node/add/roadmap-waypoint',
    'link_title' => 'Assembly instructions',
    'options' => array(
      'attributes' => array(
        'title' => 'Master instructions for assembly steps. All elements will be cloned as assembly steps at enrollment',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/task
  $menu_links['menu-add-content:node/add/task'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/task',
    'router_path' => 'node/add/task',
    'link_title' => 'Assembly Step',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to create single assembly steps for individual practices.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/video
  $menu_links['menu-add-content:node/add/video'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to upload a video as a building block',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-add-content:node/add/webform
  $menu_links['menu-add-content:node/add/webform'] = array(
    'menu_name' => 'menu-add-content',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:admin/content
  $menu_links['menu-editing:admin/content'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'View Content',
    'options' => array(
      'attributes' => array(
        'title' => 'View all site content',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
  );
  // Exported menu link: menu-editing:admin/people
  $menu_links['menu-editing:admin/people'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'All site users',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
  );
  // Exported menu link: menu-editing:admin/people-details
  $menu_links['menu-editing:admin/people-details'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'admin/people-details',
    'router_path' => 'admin/people-details',
    'link_title' => 'People details',
    'options' => array(
      'attributes' => array(
        'title' => 'Site user details',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-editing:node/add
  $menu_links['menu-editing:node/add'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(
        'title' => 'add content to the site',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
  );
  // Exported menu link: menu-editing:node/add/announcement
  $menu_links['menu-editing:node/add/announcement'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/announcement',
    'router_path' => 'node/add/announcement',
    'link_title' => 'Project Update',
    'options' => array(
      'attributes' => array(
        'title' => 'Broadcast an announcement to individual practices or the entire site.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/article
  $menu_links['menu-editing:node/add/article'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use articles for text content like news stories and tips',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/book
  $menu_links['menu-editing:node/add/book'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Book Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Books have a built-in hierarchical navigation. Use for handbooks or tutorials.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/document
  $menu_links['menu-editing:node/add/document'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to upload a document as a building block',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/offsite-resource
  $menu_links['menu-editing:node/add/offsite-resource'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/offsite-resource',
    'router_path' => 'node/add/offsite-resource',
    'link_title' => 'Offsite Resource',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for resources like toolkits, forms, or materials from other websites.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/practice-group
  $menu_links['menu-editing:node/add/practice-group'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/practice-group',
    'router_path' => 'node/add/practice-group',
    'link_title' => 'Practice',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new practice in the immunization improvement program.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/roadmap-waypoint
  $menu_links['menu-editing:node/add/roadmap-waypoint'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/roadmap-waypoint',
    'router_path' => 'node/add/roadmap-waypoint',
    'link_title' => 'Assembly instruction',
    'options' => array(
      'attributes' => array(
        'title' => 'Master instructions for assembly steps. All elements will be cloned as assembly steps at enrollment',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/task
  $menu_links['menu-editing:node/add/task'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/task',
    'router_path' => 'node/add/task',
    'link_title' => 'Assembly step',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a group-level assembly step for one or more practices.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/video
  $menu_links['menu-editing:node/add/video'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Add descriptions and links to videos.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-editing:node/add/webform
  $menu_links['menu-editing:node/add/webform'] = array(
    'menu_name' => 'menu-editing',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-my-practice-admin:admin/people/create
  $menu_links['menu-my-practice-admin:admin/people/create'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add new member to site',
    'options' => array(
      'attributes' => array(
        'title' => 'add a member to ImmunizationEd',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-my-practice-admin:node/add/announcement
  $menu_links['menu-my-practice-admin:node/add/announcement'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/announcement',
    'router_path' => 'node/add/announcement',
    'link_title' => 'Add project update',
    'options' => array(
      'attributes' => array(
        'title' => 'Broadcast an announcement to your practice',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-my-practice-admin:node/add/convenient-vaccination-services
  $menu_links['menu-my-practice-admin:node/add/convenient-vaccination-services'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/convenient-vaccination-services',
    'router_path' => 'node/add/convenient-vaccination-services',
    'link_title' => 'Add pillar 1 strategies',
    'options' => array(
      'attributes' => array(
        'title' => 'This content will be for Pillar 1: Convenient Vaccination Services/ Easy Access. This will include all references and information for Pillar 1. ',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
  );
  // Exported menu link: menu-my-practice-admin:node/add/enhanced-vaccination-systems
  $menu_links['menu-my-practice-admin:node/add/enhanced-vaccination-systems'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/enhanced-vaccination-systems',
    'router_path' => 'node/add/enhanced-vaccination-systems',
    'link_title' => 'Add pillar 3 strategies',
    'options' => array(
      'attributes' => array(
        'title' => 'This is Pillar 3: Enhanced Office Vaccination Systems. Any content here will be associated with enhancing office system to reduce missed opportunities and increase immunizations. Pillar 3. ',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
  );
  // Exported menu link: menu-my-practice-admin:node/add/meeting-agenda
  $menu_links['menu-my-practice-admin:node/add/meeting-agenda'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/meeting-agenda',
    'router_path' => 'node/add/meeting-agenda',
    'link_title' => 'Create meeting agenda',
    'options' => array(
      'attributes' => array(
        'title' => 'You can add content from the Meeting Agenda document. Information collected here will be items on the agenda.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
  );
  // Exported menu link: menu-my-practice-admin:node/add/motivation
  $menu_links['menu-my-practice-admin:node/add/motivation'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/motivation',
    'router_path' => 'node/add/motivation',
    'link_title' => 'Add pillar 4 strategies',
    'options' => array(
      'attributes' => array(
        'title' => 'This is Pillar 4. Content to be placed in this section should be associated with motivation strategies through Pillar 4. ',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
  );
  // Exported menu link: menu-my-practice-admin:node/add/patient-notification
  $menu_links['menu-my-practice-admin:node/add/patient-notification'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/patient-notification',
    'router_path' => 'node/add/patient-notification',
    'link_title' => 'Add pillar 2 strategies',
    'options' => array(
      'attributes' => array(
        'title' => 'This is Pillar 2: Patient notification about the importance of vaccination and the availability of convenient programs. This content will be about Pillar 2.',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
  );
  // Exported menu link: menu-my-practice-admin:node/add/task
  $menu_links['menu-my-practice-admin:node/add/task'] = array(
    'menu_name' => 'menu-my-practice-admin',
    'link_path' => 'node/add/task',
    'router_path' => 'node/add/task',
    'link_title' => 'Add assembly step',
    'options' => array(
      'attributes' => array(
        'title' => 'add a task to your dashboard',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-views:admin/content
  $menu_links['menu-views:admin/content'] = array(
    'menu_name' => 'menu-views',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'All Content',
    'options' => array(
      'attributes' => array(
        'title' => 'View all site content',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
  );
  // Exported menu link: menu-views:practice-admin/overdue-tasks
  $menu_links['menu-views:practice-admin/overdue-tasks'] = array(
    'menu_name' => 'menu-views',
    'link_path' => 'practice-admin/overdue-tasks',
    'router_path' => 'practice-admin/overdue-tasks',
    'link_title' => 'Overdue tasks',
    'options' => array(
      'attributes' => array(
        'title' => 'overdue assembly steps',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-views:practice-admin/practice-tasks
  $menu_links['menu-views:practice-admin/practice-tasks'] = array(
    'menu_name' => 'menu-views',
    'link_path' => 'practice-admin/practice-tasks',
    'router_path' => 'practice-admin/practice-tasks',
    'link_title' => 'Practice tasks',
    'options' => array(
      'attributes' => array(
        'title' => 'all practice assembly steps',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-views:test-view
  $menu_links['menu-views:test-view'] = array(
    'menu_name' => 'menu-views',
    'link_path' => 'test-view',
    'router_path' => 'test-view',
    'link_title' => 'Assembly instructions',
    'options' => array(
      'attributes' => array(
        'title' => 'table of asembly instructions',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:book
  $menu_links['navigation:book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Books',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:contact
  $menu_links['navigation:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:file/add
  $menu_links['navigation:file/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add file',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add/announcement
  $menu_links['navigation:node/add/announcement'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/announcement',
    'router_path' => 'node/add/announcement',
    'link_title' => 'Project Update',
    'options' => array(
      'attributes' => array(
        'title' => 'Broadcast an announcement to your practice',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/article
  $menu_links['navigation:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for text content like instructions or posts to be used as building blocks',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/book
  $menu_links['navigation:node/add/book'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Book page',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials to be used as building blocks.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/convenient-vaccination-services
  $menu_links['navigation:node/add/convenient-vaccination-services'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/convenient-vaccination-services',
    'router_path' => 'node/add/convenient-vaccination-services',
    'link_title' => 'Convenient Vaccination Services',
    'options' => array(
      'attributes' => array(
        'title' => 'This content will be for Pillar 1: Convenient Vaccination Services/ Easy Access. This will include all references and information for Pillar 1. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/document
  $menu_links['navigation:node/add/document'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/document',
    'router_path' => 'node/add/document',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to upload a document as a building block',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/enhanced-vaccination-systems
  $menu_links['navigation:node/add/enhanced-vaccination-systems'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/enhanced-vaccination-systems',
    'router_path' => 'node/add/enhanced-vaccination-systems',
    'link_title' => 'Enhanced Vaccination Systems',
    'options' => array(
      'attributes' => array(
        'title' => 'This is Pillar 3: Enhanced Office Vaccination Systems. Any content here will be associated with enhancing office system to reduce missed opportunities and increase immunizations. Pillar 3. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/meeting-agenda
  $menu_links['navigation:node/add/meeting-agenda'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/meeting-agenda',
    'router_path' => 'node/add/meeting-agenda',
    'link_title' => 'Meeting Agenda',
    'options' => array(
      'attributes' => array(
        'title' => 'You can add content from the Meeting Agenda document. Information collected here will be items on the agenda.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/motivation
  $menu_links['navigation:node/add/motivation'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/motivation',
    'router_path' => 'node/add/motivation',
    'link_title' => 'Motivation',
    'options' => array(
      'attributes' => array(
        'title' => 'This is Pillar 4. Content to be placed in this section should be associated with motivation strategies through Pillar 4. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/nuts-bolts
  $menu_links['navigation:node/add/nuts-bolts'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/nuts-bolts',
    'router_path' => 'node/add/nuts-bolts',
    'link_title' => 'Nuts & Bolts',
    'options' => array(
      'attributes' => array(
        'title' => 'This will include information for viewers to understand the foundational items of PittVax, the Toolkit, and the website. This includes info on technical requirements, Privacy Policy, etc. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/offsite-resource
  $menu_links['navigation:node/add/offsite-resource'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/offsite-resource',
    'router_path' => 'node/add/offsite-resource',
    'link_title' => 'Offsite Resource',
    'options' => array(
      'attributes' => array(
        'title' => 'Use for resources like toolkits, forms, or materials from other websites. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/panel
  $menu_links['navigation:node/add/panel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/patient-notification
  $menu_links['navigation:node/add/patient-notification'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/patient-notification',
    'router_path' => 'node/add/patient-notification',
    'link_title' => 'Patient Notification',
    'options' => array(
      'attributes' => array(
        'title' => 'This is Pillar 2: Patient notification about the importance of vaccination and the availability of convenient programs. This content will be about Pillar 2.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/practice
  $menu_links['navigation:node/add/practice'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/practice',
    'router_path' => 'node/add',
    'link_title' => 'Practice',
    'options' => array(
      'attributes' => array(
        'title' => 'Clinical practice group',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/practice-admin-group
  $menu_links['navigation:node/add/practice-admin-group'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/practice-admin-group',
    'router_path' => 'node/add/practice-admin-group',
    'link_title' => 'Practice Admin Group',
    'options' => array(
      'attributes' => array(
        'title' => 'Private group for practice admins',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/practice-group
  $menu_links['navigation:node/add/practice-group'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/practice-group',
    'router_path' => 'node/add/practice-group',
    'link_title' => 'Practice',
    'options' => array(
      'attributes' => array(
        'title' => 'Clinical practice enrolled in the 4 Pillars Toolkit Project to Build Adult Immunizations',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/required-disclosure
  $menu_links['navigation:node/add/required-disclosure'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/required-disclosure',
    'router_path' => 'node/add/required-disclosure',
    'link_title' => 'Required Disclosure',
    'options' => array(
      'attributes' => array(
        'title' => 'Required disclosures',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/roadmap-waypoint
  $menu_links['navigation:node/add/roadmap-waypoint'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/roadmap-waypoint',
    'router_path' => 'node/add/roadmap-waypoint',
    'link_title' => 'Assembly instructions',
    'options' => array(
      'attributes' => array(
        'title' => 'Master instructions for assembly steps. All elements will be cloned as assembly steps at enrollment',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/task
  $menu_links['navigation:node/add/task'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/task',
    'router_path' => 'node/add/task',
    'link_title' => 'Assembly Step',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to create single assembly steps for individual practices.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/video
  $menu_links['navigation:node/add/video'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/video',
    'router_path' => 'node/add/video',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => 'Use to upload a video as a building block',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/webform
  $menu_links['navigation:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:profile
  $menu_links['navigation:profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'profile',
    'router_path' => 'profile',
    'link_title' => 'User list',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: user-menu:contact
  $menu_links['user-menu:contact'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact admin',
    'options' => array(
      'attributes' => array(
        'title' => 'contact the site admin',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 15,
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: user-menu:user/login
  $menu_links['user-menu:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'user',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Exported menu link: user-menu:user/register
  $menu_links['user-menu:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create new account',
    'options' => array(),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('4 Pillars Toolkit');
  t('Add Content');
  t('Add assembly step');
  t('Add content');
  t('Add file');
  t('Add new member to site');
  t('Add pillar 1 strategies');
  t('Add pillar 2 strategies');
  t('Add pillar 3 strategies');
  t('Add pillar 4 strategies');
  t('Add project update');
  t('Admin');
  t('All Content');
  t('Article');
  t('Assembly Step');
  t('Assembly instruction');
  t('Assembly instructions');
  t('Assembly step');
  t('Basic page');
  t('Blueprints');
  t('Book Page');
  t('Book page');
  t('Books');
  t('Building Blocks');
  t('Compose tips');
  t('Contact');
  t('Contact admin');
  t('Convenient Vaccination Services');
  t('Create meeting agenda');
  t('Create new account');
  t('Document');
  t('Enhanced Vaccination Systems');
  t('Home');
  t('Log in');
  t('Log out');
  t('Meeting Agenda');
  t('Motivation');
  t('Nuts & Bolts');
  t('Offsite Resource');
  t('Overdue tasks');
  t('Panel');
  t('Patient Notification');
  t('People');
  t('People details');
  t('Practice');
  t('Practice Admin Group');
  t('Practice tasks');
  t('Practices');
  t('Project Update');
  t('Required Disclosure');
  t('Search');
  t('User account');
  t('User list');
  t('Video');
  t('View Content');
  t('Webform');


  return $menu_links;
}
