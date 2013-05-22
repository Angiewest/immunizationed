<?php
/**
 * @file
 * immunizationed_core.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function immunizationed_core_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_original__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_original__file_image'] = $file_display;

  return $export;
}
