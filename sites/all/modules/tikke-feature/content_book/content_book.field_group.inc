<?php
/**
 * @file
 * content_book.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_book_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artifacts_content|node|book|form';
  $field_group->group_name = 'group_artifacts_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '51',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Gallery',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_artifacts_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_horizontal|node|book|form';
  $field_group->group_name = 'group_content_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_related_content';
  $field_group->data = array(
    'label' => 'content horizontal',
    'weight' => '27',
    'children' => array(
      0 => 'group_artifacts_content',
      1 => 'group_diary_content',
      2 => 'group_video_contents',
      3 => 'group_documents_contents',
      4 => 'group_map_contents',
      5 => 'group_research_contents',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_content_horizontal|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|book|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '20',
    'children' => array(
      0 => 'field_teaser_qoate',
      1 => 'field_quote_name',
      2 => 'body',
      3 => 'field_teaser_long_text',
      4 => 'field_quote_or_abstract',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|file|image|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_file_image_alt_text',
      1 => 'field_file_image_title_text',
      2 => 'field_image_description',
      3 => 'field_image_signatura',
      4 => 'field_tags_figures',
      5 => 'field_image_credit',
      6 => 'field_tags_places',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|file|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diary_content|node|book|form';
  $field_group->group_name = 'group_diary_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Diary/letter',
    'weight' => '55',
    'children' => array(
      0 => 'field_diaries_letters',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Diary/letter',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_diary_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_documents_contents|node|book|form';
  $field_group->group_name = 'group_documents_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Documents',
    'weight' => '54',
    'children' => array(
      0 => 'field_documents',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Documents',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_documents_contents|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_horizontal|node|book|form';
  $field_group->group_name = 'group_main_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page_inner';
  $field_group->data = array(
    'label' => 'main horizontal',
    'weight' => '26',
    'children' => array(
      0 => 'group_content',
      1 => 'group_term',
      2 => 'group_media',
      3 => 'group_video',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-main-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_main_horizontal|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_map_contents|node|book|form';
  $field_group->group_name = 'group_map_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Map/Chart',
    'weight' => '53',
    'children' => array(
      0 => 'field_map_chart',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Map/Chart',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_map_contents|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|book|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '23',
    'children' => array(
      0 => 'field_main_image',
      1 => 'field_gallery_inner',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_related_content|node|book|form';
  $field_group->group_name = 'group_page_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Page related contents',
    'weight' => '34',
    'children' => array(
      0 => 'group_content_horizontal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Page related contents',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-page-related-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_page_related_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_contents|node|book|form';
  $field_group->group_name = 'group_research_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Research',
    'weight' => '52',
    'children' => array(
      0 => 'field_research',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Research',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_research_contents|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_term|node|book|form';
  $field_group->group_name = 'group_term';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Terms & Relations',
    'weight' => '22',
    'children' => array(
      0 => 'field_terms',
      1 => 'field_tags_places',
      2 => 'field_tags_figures',
      3 => 'field_tags_camps',
      4 => 'field_tags_ghettos',
      5 => 'field_tags_killing_site',
      6 => 'field_tags_events',
      7 => 'field_atgs_nazi_organisation',
      8 => 'field_tags_jewish_organisation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_term|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_contents|node|book|form';
  $field_group->group_name = 'group_video_contents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_horizontal';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '56',
    'children' => array(
      0 => 'field_video_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_video_contents|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|book|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_horizontal';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '24',
    'children' => array(
      0 => 'field_video_text_field',
      1 => 'field_youtube_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video|node|book|form'] = $field_group;

  return $export;
}
