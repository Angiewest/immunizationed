<?php //
// // Grab all the uids in the users table
// $uids = db_query('SELECT uid FROM {users}')->fetchCol();

// // Load the users
// $users = user_load_multiple($uids);

// // Loop through and edit each user
// foreach ($users as $user) {
//   // Load the extra data from whatever source you're using
//   $extra_data = my_function_to_get_extra_data_by_user_id($user->uid);

//   // Update the fields
//   $user->field_FIELDNAME1[$user->language][0]['value'] = $extr_data['FIELDNAME1'];
//   $user->field_FIELDNAME2[$user->language][0]['value'] = $extr_data['FIELDNAME2'];
//   // etc...

//   // Save the user object
//   user_save($user);
// }

// function my_function_to_get_extra_data_by_user_id(){
//   return array
// }