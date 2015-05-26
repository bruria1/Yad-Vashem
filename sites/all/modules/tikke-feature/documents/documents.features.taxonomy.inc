<?php
/**
 * @file
 * documents.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function documents_taxonomy_default_vocabularies() {
  return array(
    'keywords_general' => array(
      'name' => 'keywords general',
      'machine_name' => 'keywords_general',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
