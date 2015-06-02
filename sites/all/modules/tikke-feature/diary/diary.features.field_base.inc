<?php
/**
 * @file
 * diary.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function diary_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_image_file_diary'
  $field_bases['field_image_file_diary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_file_diary',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  return $field_bases;
}
