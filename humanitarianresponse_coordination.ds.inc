<?php
/**
 * @file
 * humanitarianresponse_coordination.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_coordination_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|coordination_hubs|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'coordination_hubs';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_hub_address',
        1 => 'field_hub_map',
        2 => 'field_hub_phone',
        3 => 'field_hub_email',
        4 => 'field_hub_location',
      ),
    ),
    'fields' => array(
      'field_hub_address' => 'ds_content',
      'field_hub_map' => 'ds_content',
      'field_hub_phone' => 'ds_content',
      'field_hub_email' => 'ds_content',
      'field_hub_location' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|coordination_hubs|default'] = $ds_layout;

  return $export;
}
