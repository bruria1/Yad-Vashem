<?php
/**
 * @file
 * manager.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function manager_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: Secondary Editor.
  $roles['Secondary Editor'] = array(
    'name' => 'Secondary Editor',
    'weight' => 4,
  );

  return $roles;
}
