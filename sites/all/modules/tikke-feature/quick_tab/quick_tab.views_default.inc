<?php
/**
 * @file
 * quick_tab.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function quick_tab_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'books_tab';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'טאבים בעמוד ספר';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'טאבים בעמוד ספר';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gallery_target_id']['id'] = 'field_gallery_target_id';
  $handler->display->display_options['relationships']['field_gallery_target_id']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['relationships']['field_gallery_target_id']['field'] = 'field_gallery_target_id';
  /* שדה: תוכן: Gallery - inner */
  $handler->display->display_options['fields']['field_artifacts_images']['id'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['table'] = 'field_data_field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['field'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_artifacts_images']['label'] = '';
  $handler->display->display_options['fields']['field_artifacts_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artifacts_images']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_artifacts_images']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_artifacts_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artifacts_images']['delta_offset'] = '0';
  /* קריטריון לסידור: תוכן: תאריך פירסום */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    1 => '1',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Gallery */
  $handler = $view->new_display('block', 'Gallery', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Gallery - inner */
  $handler->display->display_options['fields']['field_artifacts_images']['id'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['table'] = 'field_data_field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['field'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_artifacts_images']['label'] = '';
  $handler->display->display_options['fields']['field_artifacts_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artifacts_images']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_artifacts_images']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_artifacts_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['delta_limit'] = '0';
  $handler->display->display_options['fields']['field_artifacts_images']['delta_offset'] = '3';
  $handler->display->display_options['block_description'] = 'טאב- גלרייה';

  /* Display: Artificates */
  $handler = $view->new_display('block', 'Artificates', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Gallery - inner */
  $handler->display->display_options['fields']['field_artifacts_images']['id'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['table'] = 'field_data_field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['field'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_artifacts_images']['label'] = '';
  $handler->display->display_options['fields']['field_artifacts_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artifacts_images']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_artifacts_images']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_artifacts_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artifacts_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    3 => '3',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- חפץ';

  /* Display: Art */
  $handler = $view->new_display('block', 'Art', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    2 => '2',
  );
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- אומנות';

  /* Display: Reserch */
  $handler = $view->new_display('block', 'Reserch', 'block_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_research_target_id']['id'] = 'field_research_target_id';
  $handler->display->display_options['relationships']['field_research_target_id']['table'] = 'field_data_field_research';
  $handler->display->display_options['relationships']['field_research_target_id']['field'] = 'field_research_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_research_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_research_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- Research';

  /* Display: Map */
  $handler = $view->new_display('block', 'Map', 'block_4');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_map_chart_target_id']['id'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['table'] = 'field_data_field_map_chart';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['field'] = 'field_map_chart_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Images */
  $handler->display->display_options['fields']['field_map_images']['id'] = 'field_map_images';
  $handler->display->display_options['fields']['field_map_images']['table'] = 'field_data_field_map_images';
  $handler->display->display_options['fields']['field_map_images']['field'] = 'field_map_images';
  $handler->display->display_options['fields']['field_map_images']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['fields']['field_map_images']['label'] = '';
  $handler->display->display_options['fields']['field_map_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map_images']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_map_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_map_images']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- Map';

  /* Display: Documents */
  $handler = $view->new_display('block', 'Documents', 'block_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_target_id']['id'] = 'field_documents_target_id';
  $handler->display->display_options['relationships']['field_documents_target_id']['table'] = 'field_data_field_documents';
  $handler->display->display_options['relationships']['field_documents_target_id']['field'] = 'field_documents_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_documents_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- Documents';

  /* Display: Video */
  $handler = $view->new_display('block', 'Video', 'block_6');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['id'] = 'field_video_gallery_target_id';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['table'] = 'field_data_field_video_gallery';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['field'] = 'field_video_gallery_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: כללי: טקסט מותאם אישית */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="video-sign"><img src="/sites/all/themes/yadvashem/images/video.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* שדה: תוכן: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['relationship'] = 'field_video_gallery_target_id';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_video_gallery_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_video_gallery_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- Video';

  /* Display: Diary */
  $handler = $view->new_display('block', 'Diary', 'block_7');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* יחס: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['id'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['table'] = 'field_data_field_diaries_letters';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['field'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: Image */
  $handler->display->display_options['fields']['field_image_file_diary']['id'] = 'field_image_file_diary';
  $handler->display->display_options['fields']['field_image_file_diary']['table'] = 'field_data_field_image_file_diary';
  $handler->display->display_options['fields']['field_image_file_diary']['field'] = 'field_image_file_diary';
  $handler->display->display_options['fields']['field_image_file_diary']['relationship'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['fields']['field_image_file_diary']['label'] = '';
  $handler->display->display_options['fields']['field_image_file_diary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_file_diary']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_file_diary']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- Diary';
  $translatables['books_tab'] = array(
    t('Master'),
    t('טאבים בעמוד ספר'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('תוכן entity referenced from field_gallery'),
    t('הכל'),
    t('Gallery'),
    t('טאב- גלרייה'),
    t('Artificates'),
    t('טאב- חפץ'),
    t('Art'),
    t('טאב- אומנות'),
    t('Reserch'),
    t('תוכן entity referenced from field_research'),
    t('טאב- Research'),
    t('Map'),
    t('תוכן entity referenced from field_map_chart'),
    t('טאב- Map'),
    t('Documents'),
    t('תוכן entity referenced from field_documents'),
    t('טאב- Documents'),
    t('Video'),
    t('תוכן entity referenced from field_video_gallery'),
    t('<div class="video-sign"><img src="/sites/all/themes/yadvashem/images/video.png"></div>'),
    t('טאב- Video'),
    t('Diary'),
    t('תוכן entity referenced from field_diaries_letters'),
    t('טאב- Diary'),
  );
  $export['books_tab'] = $view;

  $view = new view();
  $view->name = 'explore_tab';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'אקספלור';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'אקספלור';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_research_node']['id'] = 'reverse_field_research_node';
  $handler->display->display_options['relationships']['reverse_field_research_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_research_node']['field'] = 'reverse_field_research_node';
  $handler->display->display_options['relationships']['reverse_field_research_node']['label'] = 'Content referencing Content from field_research';
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_map_chart_node']['id'] = 'reverse_field_map_chart_node';
  $handler->display->display_options['relationships']['reverse_field_map_chart_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_map_chart_node']['field'] = 'reverse_field_map_chart_node';
  $handler->display->display_options['relationships']['reverse_field_map_chart_node']['label'] = 'Content referencing Content from field_map_chart';
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_gallery_node']['id'] = 'reverse_field_gallery_node';
  $handler->display->display_options['relationships']['reverse_field_gallery_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_gallery_node']['field'] = 'reverse_field_gallery_node';
  $handler->display->display_options['relationships']['reverse_field_gallery_node']['label'] = 'Content referencing Content from field_gallery';
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_video_gallery_node']['id'] = 'reverse_field_video_gallery_node';
  $handler->display->display_options['relationships']['reverse_field_video_gallery_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_video_gallery_node']['field'] = 'reverse_field_video_gallery_node';
  $handler->display->display_options['relationships']['reverse_field_video_gallery_node']['label'] = 'Content referencing Content from field_video_gallery';
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_diaries_letters_node']['id'] = 'reverse_field_diaries_letters_node';
  $handler->display->display_options['relationships']['reverse_field_diaries_letters_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_diaries_letters_node']['field'] = 'reverse_field_diaries_letters_node';
  $handler->display->display_options['relationships']['reverse_field_diaries_letters_node']['label'] = 'Content referencing Content from field_diaries_letters';
  /* יחס: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_documents_node']['id'] = 'reverse_field_documents_node';
  $handler->display->display_options['relationships']['reverse_field_documents_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_documents_node']['field'] = 'reverse_field_documents_node';
  $handler->display->display_options['relationships']['reverse_field_documents_node']['label'] = 'Content referencing Content from field_documents';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* קריטריון לסידור: תוכן: Explore (field_explore) */
  $handler->display->display_options['sorts']['field_explore_value']['id'] = 'field_explore_value';
  $handler->display->display_options['sorts']['field_explore_value']['table'] = 'field_data_field_explore';
  $handler->display->display_options['sorts']['field_explore_value']['field'] = 'field_explore_value';
  $handler->display->display_options['sorts']['field_explore_value']['order'] = 'DESC';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_research_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'reverse_field_map_chart_node';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['arguments']['nid_2']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_2']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_2']['relationship'] = 'reverse_field_gallery_node';
  $handler->display->display_options['arguments']['nid_2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_2']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid_2']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_2']['summary_options']['items_per_page'] = '25';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['arguments']['nid_3']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_3']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_3']['relationship'] = 'reverse_field_video_gallery_node';
  $handler->display->display_options['arguments']['nid_3']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_3']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid_3']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_3']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_3']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_3']['summary_options']['items_per_page'] = '25';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid_4']['id'] = 'nid_4';
  $handler->display->display_options['arguments']['nid_4']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_4']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_4']['relationship'] = 'reverse_field_diaries_letters_node';
  $handler->display->display_options['arguments']['nid_4']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_4']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid_4']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_4']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_4']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_4']['summary_options']['items_per_page'] = '25';
  /* מסנן תלוי הקשר: תוכן: Nid */
  $handler->display->display_options['arguments']['nid_5']['id'] = 'nid_5';
  $handler->display->display_options['arguments']['nid_5']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_5']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_5']['relationship'] = 'reverse_field_documents_node';
  $handler->display->display_options['arguments']['nid_5']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_5']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid_5']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_5']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_5']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_5']['summary_options']['items_per_page'] = '25';
  /* קריטריון לסינון: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* קריטריון לסינון: תוכן: שפה */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Explore';
  $translatables['explore_tab'] = array(
    t('Master'),
    t('אקספלור'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('Content referencing Content from field_research'),
    t('Content referencing Content from field_map_chart'),
    t('Content referencing Content from field_gallery'),
    t('Content referencing Content from field_video_gallery'),
    t('Content referencing Content from field_diaries_letters'),
    t('Content referencing Content from field_documents'),
    t('הכל'),
    t('Block'),
    t('Explore'),
  );
  $export['explore_tab'] = $view;

  return $export;
}
