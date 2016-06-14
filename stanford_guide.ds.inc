<?php
/**
 * @file
 * stanford_guide.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_guide_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_guide|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_guide';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_image_info',
        1 => 'group_lead_text_styles',
        2 => 'body',
        3 => 'field_s_guide_lead_text',
        4 => 'field_s_guide_item',
      ),
    ),
    'fields' => array(
      'field_s_image_info' => 'ds_content',
      'group_lead_text_styles' => 'ds_content',
      'body' => 'ds_content',
      'field_s_guide_lead_text' => 'ds_content',
      'field_s_guide_item' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_guide|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_guide_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'numbered_guide';
  $ds_view_mode->label = 'Numbered Guide';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['numbered_guide'] = $ds_view_mode;

  return $export;
}
