<?php
/**
 * @file
 * minipanel_search_facet_date.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function minipanel_search_facet_date_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'minipanel_search_facet_date';
  $mini->category = 'Propeople';
  $mini->admin_title = 'Minipanel Search facet date';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'search-minipanel';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'region-one' => NULL,
      'region-two' => NULL,
      'region-three' => NULL,
      'region-four' => NULL,
    ),
    'region-one' => array(
      'style' => 'naked',
    ),
    'region-two' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9a16a9f5-0976-49bf-a81c-9e07c510694c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c4e4812e-1fcb-4c6e-9807-4d5022d3dcf3';
    $pane->panel = 'region-one';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Nulla porttitor accumsan tincidunt. Proin eget tortor risus. Vivamus suscipit tortor eget felis porttitor volutpat. Curabitur arcu erat, accumsan id imperdiet et, porttitor at sem. Quisque velit nisi, pretium ut lacinia in, elementum id enim. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec velit neque, auctor sit amet aliquam vel, ullamcorper sit amet ligula. Pellentesque in ipsum id orci porta dapibus. Sed porttitor lectus nibh.</p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4e4812e-1fcb-4c6e-9807-4d5022d3dcf3';
    $display->content['new-c4e4812e-1fcb-4c6e-9807-4d5022d3dcf3'] = $pane;
    $display->panels['region-one'][0] = 'new-c4e4812e-1fcb-4c6e-9807-4d5022d3dcf3';
    $pane = new stdClass();
    $pane->pid = 'new-8c28701e-f6c1-4802-8cc6-3a2e2479b266';
    $pane->panel = 'region-two';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-fgqUTew3cDS8vd7VKbZoXa7a13q1iKQw';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c28701e-f6c1-4802-8cc6-3a2e2479b266';
    $display->content['new-8c28701e-f6c1-4802-8cc6-3a2e2479b266'] = $pane;
    $display->panels['region-two'][0] = 'new-8c28701e-f6c1-4802-8cc6-3a2e2479b266';
    $pane = new stdClass();
    $pane->pid = 'new-5b42c05f-ccd6-4980-8a44-d58c798aacb4';
    $pane->panel = 'region-two';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-PM5wy191vVXA42FC6V1YYDPZU041U1do';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5b42c05f-ccd6-4980-8a44-d58c798aacb4';
    $display->content['new-5b42c05f-ccd6-4980-8a44-d58c798aacb4'] = $pane;
    $display->panels['region-two'][1] = 'new-5b42c05f-ccd6-4980-8a44-d58c798aacb4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['minipanel_search_facet_date'] = $mini;

  return $export;
}