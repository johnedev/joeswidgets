<?php
/**
 * @file
 * products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_products:products
  $menu_links['main-menu_products:products'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'products',
    'router_path' => 'products',
    'link_title' => 'Products',
    'options' => array(
      'identifier' => 'main-menu_products:products',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Products');


  return $menu_links;
}
