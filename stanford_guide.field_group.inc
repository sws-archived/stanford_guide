<?php
/**
 * @file
 * stanford_guide.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_guide_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lead_text_styles|node|stanford_guide|default';
  $field_group->group_name = 'group_lead_text_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_guide';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lead Text Styles',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_guide_lead_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lead Text Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lead_text_styles|node|stanford_guide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lead_text_styles|node|stanford_guide|full';
  $field_group->group_name = 'group_lead_text_styles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_guide';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lead Text Styles',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_guide_lead_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Lead Text Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_lead_text_styles|node|stanford_guide|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|field_collection_item|field_s_guide_item|numbered_guide';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_guide_item';
  $field_group->mode = 'numbered_guide';
  $field_group->parent_name = 'group_numbered_guide';
  $field_group->data = array(
    'label' => 'Link Style',
    'weight' => '9',
    'children' => array(
      0 => 'field_s_numbered_guide_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_link|field_collection_item|field_s_guide_item|numbered_guide'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_numbered_guide|field_collection_item|field_s_guide_item|numbered_guide';
  $field_group->group_name = 'group_numbered_guide';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_guide_item';
  $field_group->mode = 'numbered_guide';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Numbered Guide Styles',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_numb_guide_description',
      1 => 'group_title',
      2 => 'group_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Numbered Guide Styles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'numbered-guide',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_numbered_guide|field_collection_item|field_s_guide_item|numbered_guide'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_numb_guide_item_content|field_collection_item|field_s_guide_item|form';
  $field_group->group_name = 'group_s_numb_guide_item_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_guide_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_numbered_guide_image',
      1 => 'field_s_numb_guide_description',
      2 => 'field_s_numbered_guide_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add/Edit Content',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_numb_guide_item_content|field_collection_item|field_s_guide_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|field_collection_item|field_s_guide_item|numbered_guide';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_guide_item';
  $field_group->mode = 'numbered_guide';
  $field_group->parent_name = 'group_numbered_guide';
  $field_group->data = array(
    'label' => 'Title Style',
    'weight' => '7',
    'children' => array(
      0 => 'field_s_numbered_guide_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title Style',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => 'Header 2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_title|field_collection_item|field_s_guide_item|numbered_guide'] = $field_group;

  return $export;
}
