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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gallery_target_id']['id'] = 'field_gallery_target_id';
  $handler->display->display_options['relationships']['field_gallery_target_id']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['relationships']['field_gallery_target_id']['field'] = 'field_gallery_target_id';
  $handler->display->display_options['relationships']['field_gallery_target_id']['label'] = 'תוכן entity referenced from field_gallery';
  /* Field: Content: Gallery - inner */
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
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
  /* Field: Content: Gallery - inner */
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
  /* Field: Content: Gallery - inner */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    3 => '3',
  );
  /* Filter criterion: Content: Language */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_research_target_id']['id'] = 'field_research_target_id';
  $handler->display->display_options['relationships']['field_research_target_id']['table'] = 'field_data_field_research';
  $handler->display->display_options['relationships']['field_research_target_id']['field'] = 'field_research_target_id';
  $handler->display->display_options['relationships']['field_research_target_id']['label'] = 'תוכן entity referenced from field_research';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_map_chart_target_id']['id'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['table'] = 'field_data_field_map_chart';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['field'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['label'] = 'תוכן entity referenced from field_map_chart';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
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
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_target_id']['id'] = 'field_documents_target_id';
  $handler->display->display_options['relationships']['field_documents_target_id']['table'] = 'field_data_field_documents';
  $handler->display->display_options['relationships']['field_documents_target_id']['field'] = 'field_documents_target_id';
  $handler->display->display_options['relationships']['field_documents_target_id']['label'] = 'תוכן entity referenced from field_documents';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['id'] = 'field_video_gallery_target_id';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['table'] = 'field_data_field_video_gallery';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['field'] = 'field_video_gallery_target_id';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['label'] = 'תוכן entity referenced from field_video_gallery';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="video-sign"><img src="/sites/all/themes/yadvashem/images/video.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
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
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['id'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['table'] = 'field_data_field_diaries_letters';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['field'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['label'] = 'תוכן entity referenced from field_diaries_letters';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
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
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
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
  $view->name = 'explore';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Explore';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'טאבים בעמוד ספר';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gallery_target_id']['id'] = 'field_gallery_target_id';
  $handler->display->display_options['relationships']['field_gallery_target_id']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['relationships']['field_gallery_target_id']['field'] = 'field_gallery_target_id';
  $handler->display->display_options['relationships']['field_gallery_target_id']['label'] = 'תוכן entity referenced from field_gallery';
  /* Field: Content: Gallery - inner */
  $handler->display->display_options['fields']['field_artifacts_images']['id'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['table'] = 'field_data_field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['field'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_artifacts_images']['label'] = '';
  $handler->display->display_options['fields']['field_artifacts_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artifacts_images']['settings'] = array(
    'image_style' => 'tabs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artifacts_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artifacts_images']['delta_offset'] = '0';
  /* Field: Content: Gallery Type */
  $handler->display->display_options['fields']['field_gallery_type']['id'] = 'field_gallery_type';
  $handler->display->display_options['fields']['field_gallery_type']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['fields']['field_gallery_type']['field'] = 'field_gallery_type';
  $handler->display->display_options['fields']['field_gallery_type']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_gallery_type']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_type']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
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
  /* Field: Content: Gallery - inner */
  $handler->display->display_options['fields']['field_artifacts_images']['id'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['table'] = 'field_data_field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['field'] = 'field_artifacts_images';
  $handler->display->display_options['fields']['field_artifacts_images']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_artifacts_images']['label'] = '';
  $handler->display->display_options['fields']['field_artifacts_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artifacts_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artifacts_images']['settings'] = array(
    'image_style' => 'tabs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artifacts_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_artifacts_images']['delta_offset'] = '0';
  /* Field: Content: Gallery Type */
  $handler->display->display_options['fields']['field_gallery_type']['id'] = 'field_gallery_type';
  $handler->display->display_options['fields']['field_gallery_type']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['fields']['field_gallery_type']['field'] = 'field_gallery_type';
  $handler->display->display_options['fields']['field_gallery_type']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['field_gallery_type']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_type']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'טאב- גלרייה';

  /* Display: Artificates */
  $handler = $view->new_display('block', 'Artificates', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    3 => '3',
  );
  /* Filter criterion: Content: Language */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Gallery Type (field_gallery_type) */
  $handler->display->display_options['filters']['field_gallery_type_value']['id'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['table'] = 'field_data_field_gallery_type';
  $handler->display->display_options['filters']['field_gallery_type_value']['field'] = 'field_gallery_type_value';
  $handler->display->display_options['filters']['field_gallery_type_value']['relationship'] = 'field_gallery_target_id';
  $handler->display->display_options['filters']['field_gallery_type_value']['value'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_research_target_id']['id'] = 'field_research_target_id';
  $handler->display->display_options['relationships']['field_research_target_id']['table'] = 'field_data_field_research';
  $handler->display->display_options['relationships']['field_research_target_id']['field'] = 'field_research_target_id';
  $handler->display->display_options['relationships']['field_research_target_id']['label'] = 'תוכן entity referenced from field_research';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_research_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_map_chart_target_id']['id'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['table'] = 'field_data_field_map_chart';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['field'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_map_chart_target_id']['label'] = 'תוכן entity referenced from field_map_chart';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_map_images']['id'] = 'field_map_images';
  $handler->display->display_options['fields']['field_map_images']['table'] = 'field_data_field_map_images';
  $handler->display->display_options['fields']['field_map_images']['field'] = 'field_map_images';
  $handler->display->display_options['fields']['field_map_images']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['fields']['field_map_images']['label'] = '';
  $handler->display->display_options['fields']['field_map_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map_images']['settings'] = array(
    'image_style' => 'tabs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_map_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_map_images']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_target_id']['id'] = 'field_documents_target_id';
  $handler->display->display_options['relationships']['field_documents_target_id']['table'] = 'field_data_field_documents';
  $handler->display->display_options['relationships']['field_documents_target_id']['field'] = 'field_documents_target_id';
  $handler->display->display_options['relationships']['field_documents_target_id']['label'] = 'תוכן entity referenced from field_documents';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_documents_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['id'] = 'field_video_gallery_target_id';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['table'] = 'field_data_field_video_gallery';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['field'] = 'field_video_gallery_target_id';
  $handler->display->display_options['relationships']['field_video_gallery_target_id']['label'] = 'תוכן entity referenced from field_video_gallery';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="video-sign"><img src="/sites/all/themes/yadvashem/images/video.png"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['relationship'] = 'field_video_gallery_target_id';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'tabs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_video_gallery_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['id'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['table'] = 'field_data_field_diaries_letters';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['field'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['relationship'] = 'field_map_chart_target_id';
  $handler->display->display_options['relationships']['field_diaries_letters_target_id']['label'] = 'תוכן entity referenced from field_diaries_letters';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_file_diary']['id'] = 'field_image_file_diary';
  $handler->display->display_options['fields']['field_image_file_diary']['table'] = 'field_data_field_image_file_diary';
  $handler->display->display_options['fields']['field_image_file_diary']['field'] = 'field_image_file_diary';
  $handler->display->display_options['fields']['field_image_file_diary']['relationship'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['fields']['field_image_file_diary']['label'] = '';
  $handler->display->display_options['fields']['field_image_file_diary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_file_diary']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_file_diary']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'field_diaries_letters_target_id';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'טאב- Diary';

  /* Display: Main Explore */
  $handler = $view->new_display('block', 'Main Explore', 'block_8');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'explore:block';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'explore:block_1';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_2']['id'] = 'view_2';
  $handler->display->display_options['header']['view_2']['table'] = 'views';
  $handler->display->display_options['header']['view_2']['field'] = 'view';
  $handler->display->display_options['header']['view_2']['view_to_insert'] = 'explore:block_2';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_3']['id'] = 'view_3';
  $handler->display->display_options['header']['view_3']['table'] = 'views';
  $handler->display->display_options['header']['view_3']['field'] = 'view';
  $handler->display->display_options['header']['view_3']['view_to_insert'] = 'books_tab:block_3';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_4']['id'] = 'view_4';
  $handler->display->display_options['header']['view_4']['table'] = 'views';
  $handler->display->display_options['header']['view_4']['field'] = 'view';
  $handler->display->display_options['header']['view_4']['view_to_insert'] = 'explore:block_4';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_5']['id'] = 'view_5';
  $handler->display->display_options['header']['view_5']['table'] = 'views';
  $handler->display->display_options['header']['view_5']['field'] = 'view';
  $handler->display->display_options['header']['view_5']['view_to_insert'] = 'explore:block_5';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_6']['id'] = 'view_6';
  $handler->display->display_options['header']['view_6']['table'] = 'views';
  $handler->display->display_options['header']['view_6']['field'] = 'view';
  $handler->display->display_options['header']['view_6']['view_to_insert'] = 'explore:block_6';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view_7']['id'] = 'view_7';
  $handler->display->display_options['header']['view_7']['table'] = 'views';
  $handler->display->display_options['header']['view_7']['field'] = 'view';
  $handler->display->display_options['header']['view_7']['view_to_insert'] = 'explore:block_7';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Explore';
  $translatables['explore'] = array(
    t('Master'),
    t('טאבים בעמוד ספר'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
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
    t('Main Explore'),
    t('Explore'),
  );
  $export['explore'] = $view;

  return $export;
}
