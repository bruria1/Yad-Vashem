<?php
/**
 * @file
 * site_context.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function site_context_taxonomy_default_vocabularies() {
  return array(
    'camps' => array(
      'name' => 'Camps',
      'machine_name' => 'camps',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'events' => array(
      'name' => 'events',
      'machine_name' => 'events',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'figures' => array(
      'name' => 'Figures',
      'machine_name' => 'figures',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'ghettos' => array(
      'name' => 'Ghettos',
      'machine_name' => 'ghettos',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'jewish_organizations' => array(
      'name' => 'Jewish Organizations',
      'machine_name' => 'jewish_organizations',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
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
    'killing_sites' => array(
      'name' => 'killing sites',
      'machine_name' => 'killing_sites',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'nazi_germany_organizations' => array(
      'name' => 'Nazi-Germany Organizations',
      'machine_name' => 'nazi_germany_organizations',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
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
