<?php
/**
 * @file
 * video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'create video_gallery content'.
  $permissions['create video_gallery content'] = array(
    'name' => 'create video_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any video_gallery content'.
  $permissions['delete any video_gallery content'] = array(
    'name' => 'delete any video_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own video_gallery content'.
  $permissions['delete own video_gallery content'] = array(
    'name' => 'delete own video_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any video_gallery content'.
  $permissions['edit any video_gallery content'] = array(
    'name' => 'edit any video_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own video_gallery content'.
  $permissions['edit own video_gallery content'] = array(
    'name' => 'edit own video_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished video_gallery content'.
  $permissions['view any unpublished video_gallery content'] = array(
    'name' => 'view any unpublished video_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
