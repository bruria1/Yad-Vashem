<?php
/**
 * @file
 * book_content_type.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function book_content_type_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book_page';
  $context->description = 'עמודי ספר - עברית';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'he' => 'he',
      ),
    ),
    'node' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('עמודי ספר - עברית');
  $export['book_page'] = $context;

  return $export;
}
