<?php
/**
 * @file
 * reserach.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function reserach_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_files_research'
  $field_bases['field_files_research'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_files_research',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
