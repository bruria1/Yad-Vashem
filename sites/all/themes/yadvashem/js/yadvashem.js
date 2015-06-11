/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

  if ($("body").hasClass("node-type-book")){


   $(".block-menu-block .nolink").each(function(){
   	if ($(this).hasClass("is-active-trail")){
     $(this).parent().addClass("open").addClass("nolink"); 
   	}
   	else{
     $(this).parent().addClass("close").addClass("nolink"); 
   	}
   });

	$('.block-menu-block li.nolink').on('click', function() {
		if ($(this).hasClass("close")){
			$(this).removeClass('close').addClass('open');
		}
		else{
			$(this).removeClass('open').addClass('close');
		}
	});

	$strtitle = $(".field-name-body .field-item").html()
	$strtitle = $strtitle.replace("[quote]", "<div class='quote'>");
	$strtitle = $strtitle.replace("[/quote]", "</div>");
	$strtitle = $strtitle.replace("[author]", "<div class='quote-author'>");
	$strtitle = $strtitle.replace("[/author]", "</div>");
	$('.field-name-body .field-item').html($strtitle);








}




  }
};


})(jQuery, Drupal, this, this.document);
