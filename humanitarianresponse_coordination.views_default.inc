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

  $view = new view;
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
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no coordination hubs';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_field']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_field']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_field']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_field']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_field']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_field']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_field']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Telephone */
  $handler->display->display_options['fields']['field_hub_phone']['id'] = 'field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['table'] = 'field_data_field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['field'] = 'field_hub_phone';
  $handler->display->display_options['fields']['field_hub_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hub_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hub_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hub_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hub_phone']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Email */
  $handler->display->display_options['fields']['field_hub_email']['id'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['table'] = 'field_data_field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['field'] = 'field_hub_email';
  $handler->display->display_options['fields']['field_hub_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hub_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hub_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hub_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hub_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hub_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hub_email']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_hub_location']['id'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['table'] = 'field_data_field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['field'] = 'field_hub_location';
  $handler->display->display_options['fields']['field_hub_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hub_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hub_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hub_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hub_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hub_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hub_location']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_hub_location']['field_api_classes'] = 0;
  /* Field: Taxonomy term: Address */
  $handler->display->display_options['fields']['field_hub_address']['id'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['table'] = 'field_data_field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['field'] = 'field_hub_address';
  $handler->display->display_options['fields']['field_hub_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hub_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hub_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_hub_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hub_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hub_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hub_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_hub_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_hub_address']['field_api_classes'] = 0;
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
  $handler->display->display_options['path'] = 'coordination/coordination-hubs';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name_field']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name_field']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_field']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_field']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_field']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_field']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_field']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_field']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_field']['field_api_classes'] = 0;
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
    t('taxonomy/term/[tid]'),
    t('Telephone'),
    t('Email'),
    t('Location'),
    t('Address'),
    t('Page'),
    t('Block'),
  );
  $export['coordination_hubs'] = $view;

  return $export;
}
