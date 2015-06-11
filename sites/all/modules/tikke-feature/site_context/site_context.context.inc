<?php
/**
 * @file
 * site_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function site_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_links';
  $context->description = 'קישורים בתפריט עליון';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-square' => array(
          'module' => 'menu',
          'delta' => 'menu-square',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('קישורים בתפריט עליון');
  $export['header_links'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'taxonomy_page';
  $context->description = 'עמודי סיווגים';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'camps' => 'camps',
        'events' => 'events',
        'figures' => 'figures',
        'ghettos' => 'ghettos',
        'jewish_organizations' => 'jewish_organizations',
        'keywords_general' => 'keywords_general',
        'killing_sites' => 'killing_sites',
        'media_folders' => 'media_folders',
        'nazi_germany_organizations' => 'nazi_germany_organizations',
        'places' => 'places',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-term_description-block' => array(
          'module' => 'views',
          'delta' => 'term_description-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('עמודי סיווגים');
  $export['taxonomy_page'] = $context;

  return $export;
}
