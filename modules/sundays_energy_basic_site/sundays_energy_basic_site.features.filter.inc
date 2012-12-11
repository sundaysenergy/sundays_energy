<?php
/**
 * @file
 * sundays_energy_basic_site.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function sundays_energy_basic_site_filter_default_formats() {
  $formats = array();

  // Exported format: TinyMCE.
  $formats['tinymce'] = array(
    'format' => 'tinymce',
    'name' => 'TinyMCE',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(),
  );

  return $formats;
}
