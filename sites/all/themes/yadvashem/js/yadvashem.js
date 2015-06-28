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
/*
   $i = 1;
   $(".view-explore > .view-header > .view").each(function(){
   		if ($(this).children().length > 0){
     		$class = "place"+$i++;
     		$(this).addClass($class); 
     	}
	});*/

/* check how mush videos  */
$numbervideos=$(".view-books-tab .view-header").html();
if ($numbervideos<3){
	$(".view-books-tab").addClass("one-two");
}
else if ($numbervideos<6){
	$(".view-books-tab").addClass("three-five");
}
else if ($numbervideos>5){
	$(".view-books-tab").addClass("six-more");
}
/****  tabs  *****/
$( "#quicktabs-book_page .item-list" ).prepend( "<div class='left'></div>" );
$( "#quicktabs-book_page .item-list" ).append( "<div class='right'></div>" );

$j=$('#quicktabs-book_page .quicktabs-tabs li').length;
if ($j<7){
	$("#quicktabs-book_page .item-list").addClass("no-step");
}

$i=6;
$( "#quicktabs-book_page .item-list .right" ).click(function() {
	if ($j>$i){
		$current = "step"+$i++;
		$class="step"+$i;
	  	$(this).parent().removeClass($current).addClass($class);
	  	if ($j==$i){
	  		$(this).parent().addClass("last");
	  	}
  	}
});
$( "#quicktabs-book_page .item-list .left" ).click(function() {
	if ($i>6){
		$left1 = "step"+$i--;
		$left2= "step"+$i;
	  	$(this).parent().removeClass($left1).addClass($left2);
  	}
  	if ($i<$j){
	  		$(this).parent().removeClass("last");
  	}
});



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
