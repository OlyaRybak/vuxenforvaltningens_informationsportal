<?php
/**
 * @file
 * menu_global.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_global_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-global-menu_frgor-och-svar:faq
  $menu_links['menu-global-menu_frgor-och-svar:faq'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Frågor och svar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_frgor-och-svar:faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-global-menu_kurser-och-utbildningar:search-courses
  $menu_links['menu-global-menu_kurser-och-utbildningar:search-courses'] = array(
    'menu_name' => 'menu-global-menu',
    'link_path' => 'search-courses',
    'router_path' => 'search-courses',
    'link_title' => 'Kurser och utbildningar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-global-menu_kurser-och-utbildningar:search-courses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Frågor och svar');
  t('Kurser och utbildningar');


  return $menu_links;
}