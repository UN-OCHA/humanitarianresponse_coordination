<?php
/**
 * @file
 * humanitarianresponse_coordination.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function humanitarianresponse_coordination_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_coordination_hubs';
  $feeds_importer->config = array(
    'name' => 'CSV Coordination Hubs',
    'description' => 'Import coordination hubs from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 'coordination_hubs',
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Telephone',
            'target' => 'field_hub_phone',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Email',
            'target' => 'field_hub_email',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Location',
            'target' => 'field_hub_location',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Address 1',
            'target' => 'field_hub_address:thoroughfare',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Address 2',
            'target' => 'field_hub_address:premise',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'City',
            'target' => 'field_hub_address:locality',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'State',
            'target' => 'field_hub_address:administrative_area',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Postal Code',
            'target' => 'field_hub_address:postal_code',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Country',
            'target' => 'field_hub_address:country',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_coordination_hubs'] = $feeds_importer;

  return $export;
}
