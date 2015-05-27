<?php
/**
 * @file
 * diary.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function diary_taxonomy_default_vocabularies() {
  return array(
    'places' => array(
      'name' => 'places',
      'machine_name' => 'places',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
