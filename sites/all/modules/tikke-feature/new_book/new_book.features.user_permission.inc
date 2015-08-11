<?php
/**
 * @file
 * new_book.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function new_book_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished book content'.
  $permissions['view any unpublished book content'] = array(
    'name' => 'view any unpublished book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished simple_link_to_book_page content'.
  $permissions['view any unpublished simple_link_to_book_page content'] = array(
    'name' => 'view any unpublished simple_link_to_book_page content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
