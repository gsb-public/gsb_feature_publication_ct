<?php
/**
 * @file
 * gsb_feature_publication_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_publication_ct_taxonomy_default_vocabularies() {
  return array(
    'region_interest' => array(
      'name' => 'Region of Interest',
      'machine_name' => 'region_interest',
      'description' => 'Region of Interest taxonomy.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
