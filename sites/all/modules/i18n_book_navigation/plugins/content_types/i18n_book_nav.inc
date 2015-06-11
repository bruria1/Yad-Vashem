<?php

if (module_exists('book')) {
  /**
   * Plugins are described by creating a $plugin array which will be used
   * by the system that includes this file.
   */
  $plugin = array(
    'single' => TRUE,
    'title' => t('i18n Book navigation'),
    'icon' => 'icon_node.png',
    'description' => t('The navigation menu the book the node belongs to.'),
    'required context' => new ctools_context_required(t('Node'), 'node'),
    'category' => t('Node'),
  );
}

function i18n_book_navigation_i18n_book_nav_content_type_render($subtype, $conf, $panel_args, $context) {
  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->module = 'i18n_book_nav';

  $block->title = t('Book navigation');
  if ($node) {
    $block->content = isset($node->book) ? theme('i18n_book_navigation', array('book_link' => $node->book)) : '';
    $block->delta = $node->nid;
  }
  else {
    $block->content = t('Book navigation goes here.');
    $block->delta = 'unknown';
  }

  return $block;
}

function i18n_book_navigation_i18n_book_nav_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" i18n book navigation', array('@s' => $context->identifier));
}

function i18n_book_navigation_i18n_book_nav_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  return $form;
}
