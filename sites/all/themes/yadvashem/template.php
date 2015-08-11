<?php

/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */





/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_maintenance_page(&$variables, $hook) {

  // When a variable is manipulated or added in preprocess_html or

  // preprocess_page, that same work is probably needed for the maintenance page

  // as well, so we can just re-use those functions to do that work here.

  yadvashem_preprocess_html($variables, $hook);

  yadvashem_preprocess_page($variables, $hook);

}

// */



/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_html(&$variables, $hook) {

  $variables['sample_variable'] = t('Lorem ipsum.');



  // The body tag's classes are controlled by the $classes_array variable. To

  // remove a class from $classes_array, use array_diff().

  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));

}

// */



/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_page(&$variables, $hook) {

  $variables['sample_variable'] = t('Lorem ipsum.');

}

// */



/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_node(&$variables, $hook) {

  $variables['sample_variable'] = t('Lorem ipsum.');



  // Optionally, run node-type-specific preprocess functions, like

  // yadvashem_preprocess_node_page() or yadvashem_preprocess_node_story().

  $function = __FUNCTION__ . '_' . $variables['node']->type;

  if (function_exists($function)) {

    $function($variables, $hook);

  }

}

// */



/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_comment(&$variables, $hook) {

  $variables['sample_variable'] = t('Lorem ipsum.');

}

// */



/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_region(&$variables, $hook) {

  // Don't use Zen's region--sidebar.tpl.php template for sidebars.

  //if (strpos($variables['region'], 'sidebar_') === 0) {

  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));

  //}

}

// */



/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */

/* -- Delete this line if you want to use this function

function yadvashem_preprocess_block(&$variables, $hook) {

  // Add a count to all the blocks in the region.

  // $variables['classes_array'][] = 'count-' . $variables['block_id'];



  // By default, Zen will use the block--no-wrapper.tpl.php for the main

  // content. This optional bit of code undoes that:

  //if ($variables['block_html_id'] == 'block-system-main') {

  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));

  //}

}

// */

function yadvashem_preprocess_file_icon(&$variables) {
  $variables['icon_directory'] = drupal_get_path('theme', 'yadvashem') . '/file_icons';
}

function yadvashem_form_comment_form_alter(&$form, &$form_state) {
  $form['author']['#access'] = FALSE;
}

function yadvashem_preprocess_html(&$vars) {
// ... there might be other stuff here ...
$body_classes = array($vars['classes_array']);
if ($vars['user']) {
foreach($vars['user']->roles as $key => $role){
$role_class = 'role-' . str_replace(' ', '-', $role);
$vars['classes_array'][] = $role_class;
}
}
}
function yadvashem_preprocess_book_navigation(&$variables) {
  $book_link = $variables['book_link'];
 
  // Provide extra variables for themers. Not needed by default.
  $variables['book_id'] = $book_link['bid'];
  $variables['book_title'] = check_plain($book_link['link_title']);
  $variables['book_url'] = 'node/' . $book_link['bid'];
  $variables['current_depth'] = $book_link['depth'];

  $variables['tree'] = '';
  if ($book_link['mlid']) {
    $variables['tree'] = book_children($book_link);

    if ($prev = book_prev($book_link)) {
      $prev_href = url($prev['href']);
      //drupal_add_link(array('rel' => 'prev', 'href' => $prev_href));
      $variables['prev_url'] = $prev_href;
      $variables['prev_title'] = check_plain($prev['title']);
      $prev_nid = str_replace("node/","",$prev['link_path']);
      if(is_numeric($prev_nid)){
		$variables['prev_nid'] = $prev_nid;
	  }
    }
    if ($book_link['plid'] && $parent = book_link_load($book_link['plid'])) {
      $parent_href = url($parent['href']);
      //drupal_add_link(array('rel' => 'up', 'href' => $parent_href));
      $variables['parent_url'] = $parent_href;
      $variables['parent_title'] = check_plain($parent['title']);
    }
    if ($next = book_next($book_link)) {		
      $next_href = url($next['href']);
     // drupal_add_link(array('rel' => 'next', 'href' => $next_href));
      $variables['next_url'] = $next_href;
      $variables['next_title'] = check_plain($next['title']);   
      $next_nid = str_replace("node/","",$next['link_path']);
      if(is_numeric($next_nid)){
		$variables['next_nid'] = $next_nid;
	  }     
    }
  }

  $variables['has_links'] = FALSE;
  // Link variables to filter for values and set state of the flag variable.
  $links = array(
    'prev_url',
    'prev_title',
    'parent_url',
    'parent_title',
    'next_url',
    'next_title',
  );
  foreach ($links as $link) {
    if (isset($variables[$link])) {
      // Flag when there is a value.
      $variables['has_links'] = TRUE;
    }
    else {
      // Set empty to prevent notices.
      $variables[$link] = '';
    }
  }
}
