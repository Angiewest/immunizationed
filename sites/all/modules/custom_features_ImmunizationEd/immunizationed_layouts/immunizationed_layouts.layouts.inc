<?php
/**
 * @file
 * immunizationed_layouts.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function immunizationed_layouts_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'everything_template_best';
  $layout->admin_title = 'Everything Template best';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 5,
          1 => 6,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '400',
        'width_type' => 'px',
        'parent' => '2',
        'children' => array(
          0 => 8,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => '400',
        'width_type' => 'px',
        'parent' => '2',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'column',
        'width' => '200',
        'width_type' => 'px',
        'parent' => '1',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      6 => array(
        'type' => 'column',
        'width' => '600',
        'width_type' => 'px',
        'parent' => '1',
        'children' => array(
          0 => 10,
        ),
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_left',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'bottom_left' => array(
        'type' => 'region',
        'title' => 'bottom left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_right',
        ),
        'parent' => '4',
        'class' => 'bottom right',
      ),
      'bottom_right' => array(
        'type' => 'region',
        'title' => 'bottom right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'body',
        ),
        'parent' => '6',
        'class' => 'center right',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image',
        ),
        'parent' => '5',
        'class' => 'image',
      ),
      'image' => array(
        'type' => 'region',
        'title' => 'image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
      ),
      'body' => array(
        'type' => 'region',
        'title' => 'body',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
    ),
  );
  $export['everything_template_best'] = $layout;

  return $export;
}
