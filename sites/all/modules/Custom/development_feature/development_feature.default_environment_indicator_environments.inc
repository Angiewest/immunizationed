<?php
/**
 * @file
 * development_feature.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function development_feature_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local_environment';
  $environment->name = 'Local Environment';
  $environment->regexurl = 'localhost';
  $environment->settings = array(
    'color' => '#60c71f',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local_environment'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'production';
  $environment->name = 'Production';
  $environment->regexurl = 'ewi-prod.cssd.pitt.edu';
  $environment->settings = array(
    'color' => '#c8370e',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['production'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'stage';
  $environment->name = 'Stage';
  $environment->regexurl = 'ewi-stage.cssd.pitt.edu';
  $environment->settings = array(
    'color' => '#e6da2d',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['stage'] = $environment;

  return $export;
}
