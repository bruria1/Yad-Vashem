<?php
/**
 * @file
 * diary.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function diary_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create diaries_letters content'.
  $permissions['create diaries_letters content'] = array(
    'name' => 'create diaries_letters content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any diaries_letters content'.
  $permissions['delete any diaries_letters content'] = array(
    'name' => 'delete any diaries_letters content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own diaries_letters content'.
  $permissions['delete own diaries_letters content'] = array(
    'name' => 'delete own diaries_letters content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any diaries_letters content'.
  $permissions['edit any diaries_letters content'] = array(
    'name' => 'edit any diaries_letters content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own diaries_letters content'.
  $permissions['edit own diaries_letters content'] = array(
    'name' => 'edit own diaries_letters content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished diaries_letters content'.
  $permissions['view any unpublished diaries_letters content'] = array(
    'name' => 'view any unpublished diaries_letters content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
