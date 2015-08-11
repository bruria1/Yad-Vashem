<?php

/**
 * @file
 * Default theme implementation to navigate books.
 *
 * Presented under nodes that are a part of book outlines.
 *
 * Available variables:
 * - $tree: The immediate children of the current node rendered as an unordered
 *   list.
 * - $current_depth: Depth of the current node within the book outline. Provided
 *   for context.
 * - $prev_url: URL to the previous node.
 * - $prev_title: Title of the previous node.
 * - $parent_url: URL to the parent node.
 * - $parent_title: Title of the parent node. Not printed by default. Provided
 *   as an option.
 * - $next_url: URL to the next node.
 * - $next_title: Title of the next node.
 * - $has_links: Flags TRUE whenever the previous, parent or next data has a
 *   value.
 * - $book_id: The book ID of the current outline being viewed. Same as the node
 *   ID containing the entire outline. Provided for context.
 * - $book_url: The book/node URL of the current outline being viewed. Provided
 *   as an option. Not used by default.
 * - $book_title: The book/node title of the current outline being viewed.
 *   Provided as an option. Not used by default.
 *
 * @see template_preprocess_book_navigation()
 *
 * @ingroup themeable
 */
 //$node = node_load($next_nid);
 
?>
<?php if ($tree || $has_links): ?>
  <div id="book-navigation-<?php print $book_id; ?>" class="book-navigation">
    <?php print $tree; ?>

    <?php if ($has_links): ?>
    <div class="page-links clearfix">
      <?php if ($prev_url): 	
      ?>
        <a href="<?php print $prev_url; ?>" class="page-title page-previous" title="<?php print t('Go to previous page'); ?>">
          <div class="text">
			<?php
				$prev_node = node_load($prev_nid);
				if(isset($prev_node->field_main_image[LANGUAGE_NONE][0])){
					$prev_thmb = $prev_node->field_main_image[LANGUAGE_NONE][0];
					echo theme_image_style(array(				
						"style_name"=>"thumbnail",
						"path"=>$prev_thmb['uri']
					));			
				}			
			?>
            <div class="title"><?php print $prev_title; ?></div>
            <div class="previous">Previous</div>
          </div>
          <div class="arrow left-arrow"></div>
        </a>
      <?php endif; ?>
      <div class="current-page">
        <div class="book-title"><?php print $book_title; ?></div><div class="current">Currently reading</div>
      </div>
      <?php if ($next_url): ?>
        <a href="<?php print $next_url; ?>" class="page-title page-next" title="<?php print t('Go to next page'); ?>">
          <div class="text">
			 <?php
				$next_node = node_load($next_nid);
				if(isset($next_node->field_main_image[LANGUAGE_NONE][0])){
					$next_thmb = $next_node->field_main_image[LANGUAGE_NONE][0];
					echo theme_image_style(array(				
						"style_name"=>"thumbnail",
						"path"=>$next_thmb['uri']
					));						
				}
			 ?>
            <div class="title"><?php print $next_title; ?></div>
            <div class="next">Next</div>
          </div>
          <div class="arrow right-arrow"></div>
        </a>
      <?php endif; ?>
    </div>
    <?php endif; ?>

  </div>
<?php endif; ?>
