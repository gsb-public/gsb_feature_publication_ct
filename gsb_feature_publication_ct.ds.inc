<?php
/**
 * @file
 * gsb_feature_publication_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_publication_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|publication|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'publication';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_person_other' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'By',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_publication_reviews' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Editorial Reviews',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'green-rounded-button',
          'fis-at' => '',
          'fis-def-at' => TRUE,
        ),
      ),
    ),
  );
  $export['node|publication|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_publication_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_person_other',
        2 => 'field_volume_number',
        3 => 'field_issue_number',
        4 => 'field_date_published',
        5 => 'field_pages',
        6 => 'field_link_website',
        7 => 'group_publication_details',
        8 => 'field_publisher',
        9 => 'field_file_single_public',
      ),
      'right' => array(
        10 => 'field_image_single_public',
      ),
      'footer' => array(
        11 => 'field_business_insight_topic',
        12 => 'group_tags_wrapper',
        13 => 'field_target_audience',
        14 => 'field_body',
        15 => 'field_discipline',
        16 => 'field_publication_reviews',
        17 => 'field_region',
        18 => 'field_company_organization',
        19 => 'field_industry',
        20 => 'field_tag',
        21 => 'field_academic_area_unlimited',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_person_other' => 'left',
      'field_volume_number' => 'left',
      'field_issue_number' => 'left',
      'field_date_published' => 'left',
      'field_pages' => 'left',
      'field_link_website' => 'left',
      'group_publication_details' => 'left',
      'field_publisher' => 'left',
      'field_file_single_public' => 'left',
      'field_image_single_public' => 'right',
      'field_business_insight_topic' => 'footer',
      'group_tags_wrapper' => 'footer',
      'field_target_audience' => 'footer',
      'field_body' => 'footer',
      'field_discipline' => 'footer',
      'field_publication_reviews' => 'footer',
      'field_region' => 'footer',
      'field_company_organization' => 'footer',
      'field_industry' => 'footer',
      'field_tag' => 'footer',
      'field_academic_area_unlimited' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|publication|default'] = $ds_layout;

  return $export;
}
