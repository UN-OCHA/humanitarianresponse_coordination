<?php
/**
 * @file
 * humanitarianresponse_coordination.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_coordination_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'coordination_hubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Coordination Hubs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Coordination Hubs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no coordination hubs';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  /* Field: Taxonomy term: Telephone */
  $handler->display->display_options['fields']['field_hub_phone']['id'] = 'field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['table'] = 'field_data_field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['field'] = 'field_hub_phone';
  /* Field: Taxonomy term: Email */
  $handler->display->display_options['fields']['field_hub_email']['id'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['table'] = 'field_data_field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['field'] = 'field_hub_email';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_hub_location']['id'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['table'] = 'field_data_field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['field'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address']['id'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'coordination_hubs' => 'coordination_hubs',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'coordination-hubs';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'coordination_hubs.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Telephone */
  $handler->display->display_options['fields']['field_hub_phone']['id'] = 'field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['table'] = 'field_data_field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['field'] = 'field_hub_phone';
  /* Field: Taxonomy term: Email */
  $handler->display->display_options['fields']['field_hub_email']['id'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['table'] = 'field_data_field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['field'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['type'] = 'email_plain';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_hub_location']['id'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['table'] = 'field_data_field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['field'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_1']['id'] = 'field_hub_address_1';
  $handler->display->display_options['fields']['field_hub_address_1']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_1']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_1']['label'] = 'Address 1';
  $handler->display->display_options['fields']['field_hub_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_1']['alter']['text'] = '[field_hub_address_1-thoroughfare]';
  $handler->display->display_options['fields']['field_hub_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_2']['id'] = 'field_hub_address_2';
  $handler->display->display_options['fields']['field_hub_address_2']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_2']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_2']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_hub_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_2']['alter']['text'] = '[field_hub_address_2-premise]';
  $handler->display->display_options['fields']['field_hub_address_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_3']['id'] = 'field_hub_address_3';
  $handler->display->display_options['fields']['field_hub_address_3']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_3']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_3']['label'] = 'City';
  $handler->display->display_options['fields']['field_hub_address_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_3']['alter']['text'] = '[field_hub_address_3-locality]';
  $handler->display->display_options['fields']['field_hub_address_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_4']['id'] = 'field_hub_address_4';
  $handler->display->display_options['fields']['field_hub_address_4']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_4']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_4']['label'] = 'State';
  $handler->display->display_options['fields']['field_hub_address_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_4']['alter']['text'] = '[field_hub_address_4-administrative_area]';
  $handler->display->display_options['fields']['field_hub_address_4']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_4']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_5']['id'] = 'field_hub_address_5';
  $handler->display->display_options['fields']['field_hub_address_5']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_5']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_5']['label'] = 'Postal Code';
  $handler->display->display_options['fields']['field_hub_address_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_5']['alter']['text'] = '[field_hub_address_5-postal_code]';
  $handler->display->display_options['fields']['field_hub_address_5']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_5']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address']['id'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['label'] = 'Country';
  $handler->display->display_options['fields']['field_hub_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address']['alter']['text'] = '[field_hub_address-country]';
  $handler->display->display_options['fields']['field_hub_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['path'] = 'coordination-hubs.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Telephone */
  $handler->display->display_options['fields']['field_hub_phone']['id'] = 'field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['table'] = 'field_data_field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['field'] = 'field_hub_phone';
  /* Field: Taxonomy term: Email */
  $handler->display->display_options['fields']['field_hub_email']['id'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['table'] = 'field_data_field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['field'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['type'] = 'email_plain';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_hub_location']['id'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['table'] = 'field_data_field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['field'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_1']['id'] = 'field_hub_address_1';
  $handler->display->display_options['fields']['field_hub_address_1']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_1']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_1']['label'] = 'Address 1';
  $handler->display->display_options['fields']['field_hub_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_1']['alter']['text'] = '[field_hub_address_1-thoroughfare]';
  $handler->display->display_options['fields']['field_hub_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_2']['id'] = 'field_hub_address_2';
  $handler->display->display_options['fields']['field_hub_address_2']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_2']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_2']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_hub_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_2']['alter']['text'] = '[field_hub_address_2-premise]';
  $handler->display->display_options['fields']['field_hub_address_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_3']['id'] = 'field_hub_address_3';
  $handler->display->display_options['fields']['field_hub_address_3']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_3']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_3']['label'] = 'City';
  $handler->display->display_options['fields']['field_hub_address_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_3']['alter']['text'] = '[field_hub_address_3-locality]';
  $handler->display->display_options['fields']['field_hub_address_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_4']['id'] = 'field_hub_address_4';
  $handler->display->display_options['fields']['field_hub_address_4']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_4']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_4']['label'] = 'State';
  $handler->display->display_options['fields']['field_hub_address_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_4']['alter']['text'] = '[field_hub_address_4-administrative_area]';
  $handler->display->display_options['fields']['field_hub_address_4']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_4']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_5']['id'] = 'field_hub_address_5';
  $handler->display->display_options['fields']['field_hub_address_5']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_5']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_5']['label'] = 'Postal Code';
  $handler->display->display_options['fields']['field_hub_address_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_5']['alter']['text'] = '[field_hub_address_5-postal_code]';
  $handler->display->display_options['fields']['field_hub_address_5']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_5']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address']['id'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['label'] = 'Country';
  $handler->display->display_options['fields']['field_hub_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address']['alter']['text'] = '[field_hub_address-country]';
  $handler->display->display_options['fields']['field_hub_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['path'] = 'coordination-hubs.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Telephone */
  $handler->display->display_options['fields']['field_hub_phone']['id'] = 'field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['table'] = 'field_data_field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['field'] = 'field_hub_phone';
  /* Field: Taxonomy term: Email */
  $handler->display->display_options['fields']['field_hub_email']['id'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['table'] = 'field_data_field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['field'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['type'] = 'email_plain';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_hub_location']['id'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['table'] = 'field_data_field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['field'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_1']['id'] = 'field_hub_address_1';
  $handler->display->display_options['fields']['field_hub_address_1']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_1']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_1']['label'] = 'Address 1';
  $handler->display->display_options['fields']['field_hub_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_1']['alter']['text'] = '[field_hub_address_1-thoroughfare]';
  $handler->display->display_options['fields']['field_hub_address_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_2']['id'] = 'field_hub_address_2';
  $handler->display->display_options['fields']['field_hub_address_2']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_2']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_2']['label'] = 'Address 2';
  $handler->display->display_options['fields']['field_hub_address_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_2']['alter']['text'] = '[field_hub_address_2-premise]';
  $handler->display->display_options['fields']['field_hub_address_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_3']['id'] = 'field_hub_address_3';
  $handler->display->display_options['fields']['field_hub_address_3']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_3']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_3']['label'] = 'City';
  $handler->display->display_options['fields']['field_hub_address_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_3']['alter']['text'] = '[field_hub_address_3-locality]';
  $handler->display->display_options['fields']['field_hub_address_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_4']['id'] = 'field_hub_address_4';
  $handler->display->display_options['fields']['field_hub_address_4']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_4']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_4']['label'] = 'State';
  $handler->display->display_options['fields']['field_hub_address_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_4']['alter']['text'] = '[field_hub_address_4-administrative_area]';
  $handler->display->display_options['fields']['field_hub_address_4']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_4']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address_5']['id'] = 'field_hub_address_5';
  $handler->display->display_options['fields']['field_hub_address_5']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_5']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address_5']['label'] = 'Postal Code';
  $handler->display->display_options['fields']['field_hub_address_5']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address_5']['alter']['text'] = '[field_hub_address_5-postal_code]';
  $handler->display->display_options['fields']['field_hub_address_5']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address_5']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address']['id'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['label'] = 'Country';
  $handler->display->display_options['fields']['field_hub_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hub_address']['alter']['text'] = '[field_hub_address-country]';
  $handler->display->display_options['fields']['field_hub_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['path'] = 'coordination-hubs.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );
  $translatables['coordination_hubs'] = array(
    t('Master'),
    t('Coordination Hubs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('There are no coordination hubs'),
    t('.'),
    t(','),
    t('Name'),
    t('Telephone'),
    t('Email'),
    t('Location'),
    t('Address'),
    t('Page'),
    t('Block'),
    t('XLS'),
    t('Address 1'),
    t('[field_hub_address_1-thoroughfare]'),
    t('Address 2'),
    t('[field_hub_address_2-premise]'),
    t('City'),
    t('[field_hub_address_3-locality]'),
    t('State'),
    t('[field_hub_address_4-administrative_area]'),
    t('Postal Code'),
    t('[field_hub_address_5-postal_code]'),
    t('Country'),
    t('[field_hub_address-country]'),
    t('XML'),
    t('CSV'),
  );
  $export['coordination_hubs'] = $view;

  return $export;
}
