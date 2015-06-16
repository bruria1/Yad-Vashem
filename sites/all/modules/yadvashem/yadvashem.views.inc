    <?php
     
    function yadvashem_views_query_alter(&$view, &$query) {
      // Whatever your view is named...
      if ($view->name == 'explore_tab') {
        $query->where[0]['type'] = 'OR';
      }
    }