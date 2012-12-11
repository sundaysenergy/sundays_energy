<?php
/**
 * @file
 * sundays_energy_basic_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sundays_energy_basic_site_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => '2',
  );

  return $roles;
}
