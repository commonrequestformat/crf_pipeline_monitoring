<?php
/**
 * @file
 * crf_pipeline_monitoring.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_pipeline_monitoring_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_pipeline_monitoring';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_pipeline_monitoring';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_pipeline_monitoring';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_pipeline_monitoring';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pipeline_monitoring';
  $strongarm->value = 0;
  $export['comment_anonymous_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pipeline_monitoring';
  $strongarm->value = 1;
  $export['comment_default_mode_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pipeline_monitoring';
  $strongarm->value = '50';
  $export['comment_default_per_page_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pipeline_monitoring';
  $strongarm->value = 1;
  $export['comment_form_location_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pipeline_monitoring';
  $strongarm->value = '1';
  $export['comment_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pipeline_monitoring';
  $strongarm->value = '1';
  $export['comment_preview_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pipeline_monitoring';
  $strongarm->value = 1;
  $export['comment_subject_field_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pipeline_monitoring';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_diff_inline_node_pipeline_monitoring';
  $strongarm->value = 0;
  $export['diff_show_diff_inline_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pipeline_monitoring';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_inline_node_pipeline_monitoring';
  $strongarm->value = 'diff_complete';
  $export['diff_view_mode_inline_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_pipeline_monitoring';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_standard_node_pipeline_monitoring';
  $strongarm->value = 0;
  $export['diff_view_mode_standard_node_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__pipeline_monitoring';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'workbench_access' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pipeline_monitoring';
  $strongarm->value = '0';
  $export['language_content_type_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pipeline_monitoring';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pipeline_monitoring';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pipeline_monitoring';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pipeline_monitoring';
  $strongarm->value = '0';
  $export['node_preview_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pipeline_monitoring';
  $strongarm->value = 0;
  $export['node_submitted_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_pipeline_monitoring';
  $strongarm->value = 0;
  $export['print_display_comment_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_pipeline_monitoring';
  $strongarm->value = 0;
  $export['print_display_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_pipeline_monitoring';
  $strongarm->value = 0;
  $export['print_display_urllist_pipeline_monitoring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_pipeline_monitoring';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_pipeline_monitoring'] = $strongarm;

  return $export;
}
