<?php

/**
 * @file
 * Rules functions to help convert and calculate dates.
 */

function date_conversions_rules_action_info() {
  $actions = array(
    'date_conversions_create_duration' => array(
      'label' => t('Create a duration from a number of seconds'),
      'group' => t('Date conversions'),
      'parameter' => array(
        'number_of_seconds' => array(
          'type' => 'integer',
          'label' => t('Number of seconds')
        )
      ),
      'provides' => array(
        'duration' => array(
          'type' => 'duration',
          'label' => t("Duration")
        )
      )
    ),
    'date_conversions_create_duration_from_days' => array(
      'label' => t('Create a duration from a number of days'),
      'group' => t('Date conversions'),
      'parameter' => array(
        'number_of_days' => array(
          'type' => 'integer',
          'label' => t('Number of days')
        )
      ),
      'provides' => array(
        'duration' => array(
          'type' => 'duration',
          'label' => t("Duration")
        )
      )
    ),
    'date_conversions_create_date_from_offset' => array(
      'label' => t('Calculate a date offset from now'),
      'group' => t('Date conversions'),
      'parameter' => array(
        'offset_number_of_days' => array(
          'type' => 'integer',
          'label' => t('Offset number of days'),
          'default mode' => 'selector'
        )
      ),
      'provides' => array(
        'future_date' => array(
          'type' => 'date',
          'label' => t("Future date")
        )
      )
    )
  );
  return $actions;
}

/**
 * Implements hook_rules_condition_info().
 */
function date_conversions_rules_condition_info() {
  // Add conditions that depend on required modules only.
  $conditions = array(
    'date_conversions_condition_is_numeric' => array(
      'label' => t('String contains number'),
      'group' => t('Date conversions'),
      'parameter' => array(
        'string' => array(
          'type' => 'text',
          'label' => t('String to check'),
            )
      )
    )
  );
    return $conditions;
}

function date_conversions_create_duration($number_of_seconds) {
  return array(
    'duration' => $number_of_seconds
  );
}

function date_conversions_create_duration_from_days($number_of_days) {
  return array(
      'duration' => ($number_of_days * 86400)
  );
}
/**
 * The 'date_conversions_condition_is_numeric' condition.
 */
function date_conversions_condition_is_numeric($string) {
  return (is_numeric($string));
}

/**
 * The 'date_conversions_create_date_from_offset' action.
 */

function date_conversions_create_date_from_offset($offset_number_of_days){
$new_date = date_add(new DateTime('now'),
      new DateInterval('P' . $offset_number_of_days . 'D'));
  return array(
      'future_date' => $new_date->format('U')
       );
}