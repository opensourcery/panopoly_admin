<?php
/**
 * @file
 * Admin settings form.
 */

/**
 * Configuration Form for Panopoly Admin
 */
function panopoly_admin_configure_form($form, &$form_state) {
  $form = array();

  $form['panopoly_admin_machine_name'] = array(
    '#title' => t('Machine Name'),
    '#type' => 'select',
    '#required' => TRUE,
    '#options' => array(
      '1' => 'Enabled',
      '0' => 'Disabled',
    ),
    '#default_value' => variable_get('panopoly_admin_machine_name', 0),
    '#description' => t('Do you want to provide an option to specify a machine name (provided by the Default Content module) on the content editing form?'),
  );

  $form['panopoly_admin_front_page_and_sticky'] = array(
    '#title' => t('Front Page and Sticky Options'),
    '#type' => 'select',
    '#required' => TRUE,
    '#options' => array(
      '1' => 'Enabled',
      '0' => 'Disabled',
    ),
    '#default_value' => variable_get('panopoly_admin_front_page_and_sticky', 0),
    '#description' => t('Do you want to provide the front page and sticky options on node content?'),
  );

  $form['panopoly_admin_link_description'] = array(
    '#title' => t('Menu Link Description'),
    '#type' => 'select',
    '#required' => TRUE,
    '#options' => array(
      '1' => 'Enabled',
      '0' => 'Disabled',
    ),
    '#default_value' => variable_get('panopoly_admin_link_description', 0),
    '#description' => t('Do you want to provide a description field for a menu item link on the node edit page?'),
  );

  $form['panopoly_admin_advanced_plugins'] = array(
    '#title' => t('Use Advanced Panel Plugins'),
    '#type' => 'select',
    '#required' => TRUE,
    '#options' => array(
      '1' => 'Enabled',
      '0' => 'Disabled',
    ),
    '#default_value' => variable_get('panopoly_admin_advanced_plugins', 0),
    '#description' => t('Do you want to enable the advanced Panel plugins in the Panopoly pane library? This includes rarely used Panel plugins for such things as view context, token support, and page elements?'),
  );

  return system_settings_form($form);
}
