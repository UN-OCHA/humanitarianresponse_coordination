<?php
/**
 * @file
 * humanitarianresponse_coordination.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_coordination_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_coordination_hubs_pattern';
  $strongarm->value = 'coordination/[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_coordination_hubs_pattern'] = $strongarm;

  return $export;
}
