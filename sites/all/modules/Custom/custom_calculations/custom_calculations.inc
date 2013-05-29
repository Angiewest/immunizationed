<?php
//Implements computed_field funtion for custom computed fields
// function computed_field_YOUR_FIELD_MACHINE_NAME_compute(&$entity_field, $entity_type, $entity, $field, $instance, $langcode, $items) {
//   $entity_field[0]['value'] = 'value';
// }
// Parameters:
// &$entity_field - The computed field. Used to store the computed value.
// $entity_type - The entity type: node, user, comment, etc.
// $entity - The actual entity (a node, user, comment, etc.)
// $field - General field settings.
// $instance - Field instance settings.
// $items - The list of items.
// Note:
// Make sure $entity_field is passed by reference.

// computed field display function
// function computed_field_YOUR_FIELD_MACHINE_NAME_display($field, $entity_field_item, $entity_lang, $langcode) {
//   return '$' . number_format($entity_field_item['value'], 2);
// }

// computes started as '1' if a start date has been entered
// function computed_field_field_status_compute(&$entity_field, $entity_type, $entity, $field, $instance, $langcode, $items) {
// if (!is_null($node->field_task_started[0]['value'])){
//   $entity_field[0]['value'] = 1;
// }
// else{
//   $entity_field[0]['value'] = 0;
// }
// }
// function computed_field_field_status_display($field, $entity_field_item, $entity_lang, $langcode) {
//   return number_format($entity_field_item['value'], 0);
// }



