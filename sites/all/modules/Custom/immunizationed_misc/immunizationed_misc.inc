<?php
/*
 * Implements hook_menu
 */

function immunizationed_misc_menu(){
  $items['node/add/meeting-agenda']  = array(
      'page callback => ['node/add/meeting-agenda?og_group_ref=[node:nid]'],
  );

  return $items;
}
