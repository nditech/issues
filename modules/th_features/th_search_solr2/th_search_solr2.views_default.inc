<?php
/**
 * @file
 * th_search_solr2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function th_search_solr2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_learn_more_about_the_candidates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search : Learn more about the candidates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Learn more about the candidates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'candidate' => 'candidate',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['search_learn_more_about_the_candidates'] = $view;

  $view = new view();
  $view->name = 'search_learn_more_about_the_parties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search : Learn more about the parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Learn more about the parties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'party' => 'party',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['search_learn_more_about_the_parties'] = $view;

  $view = new view();
  $view->name = 'solr2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_solr_server_index';
  $view->human_name = 'Search: Result page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@end out of @total';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Learn more about the candidates';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<h3 class="views-label">Learn more about the candidates</h3>';
  /* Footer: Global: View (Views field view) */
  $handler->display->display_options['footer']['view_field']['id'] = 'view_field';
  $handler->display->display_options['footer']['view_field']['table'] = 'views';
  $handler->display->display_options['footer']['view_field']['field'] = 'view_field';
  $handler->display->display_options['footer']['view_field']['label'] = 'Learn more about the candidates';
  $handler->display->display_options['footer']['view_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['footer']['view_field']['view'] = 'search_learn_more_about_the_candidates';
  $handler->display->display_options['footer']['view_field']['display'] = 'block';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom_1']['id'] = 'area_text_custom_1';
  $handler->display->display_options['footer']['area_text_custom_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom_1']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom_1']['content'] = '<h3 class="views-label">Learn more about the parties</h3>';
  /* Footer: Global: View (Views field view) */
  $handler->display->display_options['footer']['view_field_1']['id'] = 'view_field_1';
  $handler->display->display_options['footer']['view_field_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_field_1']['field'] = 'view_field';
  $handler->display->display_options['footer']['view_field_1']['label'] = 'Learn more about the parties';
  $handler->display->display_options['footer']['view_field_1']['view'] = 'search_learn_more_about_the_parties';
  $handler->display->display_options['footer']['view_field_1']['display'] = 'block';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Candidate */
  $handler->display->display_options['fields']['field_th_candidate']['id'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_candidate']['field'] = 'field_th_candidate';
  $handler->display->display_options['fields']['field_th_candidate']['label'] = '';
  $handler->display->display_options['fields']['field_th_candidate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_candidate']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_candidate']['view_mode'] = 'full';
  /* Field: Indexed Node: Party */
  $handler->display->display_options['fields']['field_th_party']['id'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_party']['field'] = 'field_th_party';
  $handler->display->display_options['fields']['field_th_party']['label'] = '';
  $handler->display->display_options['fields']['field_th_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_party']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_party']['view_mode'] = 'full';
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'search_video';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Question: Issue (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_question_field_issue']['field'] = 'field_th_question_field_issue';
  $handler->display->display_options['fields']['field_th_question_field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_th_question_field_issue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_th_question_field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_th_question_field_issue']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_issue']['view_mode'] = 'full';
  /* Field: Question: Region (indexed) */
  $handler->display->display_options['fields']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['field_th_question_field_region']['field'] = 'field_th_question_field_region';
  $handler->display->display_options['fields']['field_th_question_field_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_th_question_field_region']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_th_question_field_region']['view_mode'] = 'full';
  /* Field: Indexed Node: Share count */
  $handler->display->display_options['fields']['share_count']['id'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['fields']['share_count']['field'] = 'share_count';
  $handler->display->display_options['fields']['share_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['share_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'search_api_viewed' => 'search_api_viewed',
    'field_th_question:title' => 'field_th_question:title',
    'field_th_candidate:field_th_first_name' => 'field_th_candidate:field_th_first_name',
    'field_th_candidate:field_th_last_name' => 'field_th_candidate:field_th_last_name',
    'field_th_question:field_th_candidate:field_th_first_name' => 'field_th_question:field_th_candidate:field_th_first_name',
    'field_th_question:field_th_candidate:field_th_last_name' => 'field_th_question:field_th_candidate:field_th_last_name',
    'field_th_question:field_region:name' => 'field_th_question:field_region:name',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Question: Issue (indexed) */
  $handler->display->display_options['filters']['field_th_question_field_issue']['id'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['filters']['field_th_question_field_issue']['field'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['value'] = array();
  $handler->display->display_options['filters']['field_th_question_field_issue']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['operator_id'] = 'field_th_question_field_issue_op';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['label'] = 'Issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['operator'] = 'field_th_question_field_issue_op';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['identifier'] = 'field_th_question_field_issue';
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_issue']['expose']['reduce'] = 0;
  /* Filter criterion: Question: Region (indexed) */
  $handler->display->display_options['filters']['field_th_question_field_region']['id'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['table'] = 'search_api_index_solr_server_index';
  $handler->display->display_options['filters']['field_th_question_field_region']['field'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['value'] = array();
  $handler->display->display_options['filters']['field_th_question_field_region']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['operator_id'] = 'field_th_question_field_region_op';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['operator'] = 'field_th_question_field_region_op';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['identifier'] = 'field_th_question_field_region';
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_th_question_field_region']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sl_search';
  $export['solr2'] = $view;

  return $export;
}
