<?php
/**
 * @file
 * right_links.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function right_links_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'right_links_at_book';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'right links at book';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Online Store';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_link' => 0,
    'field_image_links' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_link' => 0,
    'field_image_links' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_image_links']['id'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['table'] = 'field_data_field_image_links';
  $handler->display->display_options['fields']['field_image_links']['field'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['label'] = '';
  $handler->display->display_options['fields']['field_image_links']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image_links']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_links']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_links']['settings'] = array(
    'image_style' => 'online_store',
    'image_link' => '',
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'online_store' => 'online_store',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Online Store */
  $handler = $view->new_display('block', 'Online Store', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Online Store';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_online_store_node']['id'] = 'reverse_field_online_store_node';
  $handler->display->display_options['relationships']['reverse_field_online_store_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_online_store_node']['field'] = 'reverse_field_online_store_node';
  $handler->display->display_options['relationships']['reverse_field_online_store_node']['label'] = 'Content referencing Content from field_online_store';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_image_links']['id'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['table'] = 'field_data_field_image_links';
  $handler->display->display_options['fields']['field_image_links']['field'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['label'] = '';
  $handler->display->display_options['fields']['field_image_links']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image_links']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_links']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_links']['settings'] = array(
    'image_style' => 'online_store',
    'image_link' => '',
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="bottom-text">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_online_store_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'online_store' => 'online_store',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'Online Store';

  /* Display: Related Resources */
  $handler = $view->new_display('block', 'Related Resources', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Resources';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_resources_node']['id'] = 'reverse_field_related_resources_node';
  $handler->display->display_options['relationships']['reverse_field_related_resources_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_resources_node']['field'] = 'reverse_field_related_resources_node';
  $handler->display->display_options['relationships']['reverse_field_related_resources_node']['label'] = 'Content referencing Content from field_related_resources';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_image_links']['id'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['table'] = 'field_data_field_image_links';
  $handler->display->display_options['fields']['field_image_links']['field'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['label'] = '';
  $handler->display->display_options['fields']['field_image_links']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image_links']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_links']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_links']['settings'] = array(
    'image_style' => 'related_resources',
    'image_link' => '',
  );
  /* שדה: תוכן: Second Title */
  $handler->display->display_options['fields']['field_second_title']['id'] = 'field_second_title';
  $handler->display->display_options['fields']['field_second_title']['table'] = 'field_data_field_second_title';
  $handler->display->display_options['fields']['field_second_title']['field'] = 'field_second_title';
  $handler->display->display_options['fields']['field_second_title']['label'] = '';
  $handler->display->display_options['fields']['field_second_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_second_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_second_title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_second_title']['element_label_colon'] = FALSE;
  /* שדה: תוכן: date */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="bottom-text">
  <div class="title">[title]</div>
  <div class="second-title">[field_second_title]</div>
  <div class="text">[field_text]</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_related_resources_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'related_resources' => 'related_resources',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'Related Resources';

  /* Display: Simple link */
  $handler = $view->new_display('block', 'Simple link', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_simple_link_node']['id'] = 'reverse_field_simple_link_node';
  $handler->display->display_options['relationships']['reverse_field_simple_link_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_simple_link_node']['field'] = 'reverse_field_simple_link_node';
  $handler->display->display_options['relationships']['reverse_field_simple_link_node']['label'] = 'Content referencing Content from field_simple_link';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_image_links']['id'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['table'] = 'field_data_field_image_links';
  $handler->display->display_options['fields']['field_image_links']['field'] = 'field_image_links';
  $handler->display->display_options['fields']['field_image_links']['label'] = '';
  $handler->display->display_options['fields']['field_image_links']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image_links']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_links']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_links']['settings'] = array(
    'image_style' => 'online_store',
    'image_link' => '',
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="bottom-text">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* קריטריון לסידור: כללי: אקראי */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_simple_link_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'simple_link_to_book_page' => 'simple_link_to_book_page',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'Simple link';

  /* Display: Workshops */
  $handler = $view->new_display('block', 'Workshops', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_workshops_node']['id'] = 'reverse_field_workshops_node';
  $handler->display->display_options['relationships']['reverse_field_workshops_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_workshops_node']['field'] = 'reverse_field_workshops_node';
  $handler->display->display_options['relationships']['reverse_field_workshops_node']['label'] = 'Content referencing Content from field_workshops';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="bottom-text">
  <div class="title">[title]</div>
  <div class="second-title">[field_second_title]</div>
  <div class="text">[field_text]</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* שדה: תוכן: Second Title */
  $handler->display->display_options['fields']['field_second_title']['id'] = 'field_second_title';
  $handler->display->display_options['fields']['field_second_title']['table'] = 'field_data_field_second_title';
  $handler->display->display_options['fields']['field_second_title']['field'] = 'field_second_title';
  $handler->display->display_options['fields']['field_second_title']['label'] = '';
  $handler->display->display_options['fields']['field_second_title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_second_title']['element_label_colon'] = FALSE;
  /* שדה: תוכן: date */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* שדה: תוכן: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = 'Application Form';
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['path'] = '[field_link-url]';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_workshops_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'workshops' => 'workshops',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'Workshops';
  $translatables['right_links_at_book'] = array(
    t('Master'),
    t('Online Store'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Content referencing Content from field_online_store'),
    t('<div class="bottom-text">[title]</div>'),
    t('הכל'),
    t('Related Resources'),
    t('Content referencing Content from field_related_resources'),
    t('<div class="bottom-text">
  <div class="title">[title]</div>
  <div class="second-title">[field_second_title]</div>
  <div class="text">[field_text]</div>
</div>'),
    t('Simple link'),
    t('Content referencing Content from field_simple_link'),
    t('Workshops'),
    t('Content referencing Content from field_workshops'),
    t('Application Form'),
  );
  $export['right_links_at_book'] = $view;

  return $export;
}
