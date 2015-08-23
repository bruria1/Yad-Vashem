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

//responsive gallery description

$( ".description-button" ).click(function() {
	if ($('body').hasClass("display-description")){
       $('body').removeClass("display-description");
	}
	else{
		$('body').addClass("display-description");
	}
});

if ((!$('body').hasClass("role-administrator")) && (!$('body').hasClass("role-Editor"))){

	$( ".count" ).remove();

}



 if ($(".is-useful-no").hasClass("selected")){

       $('#comments').addClass("display");

 }



$( ".is-useful-no a" ).click(function() {

       $('#comments').addClass("display");



});



$( ".is-useful-yes a" ).click(function() {

       $('#comments').removeClass("display");



});





$numbervideos3=$("#block-costum-video-tab-3 .view-header").html();
$numbervideos2=$("#block-costum-video-tab-2 .view-header").html();
$numbervideos1=$("#block-costum-video-tab-1 .view-header").html();
$numbervideos4=$("#quicktabs-tabpage-book_page-10 .view-header").html();

if ($numbervideos4<3){
	$("#quicktabs-tabpage-book_page-10 .view-books-tab").addClass("one-two");
}
else if ($numbervideos4<5){
	$("#quicktabs-tabpage-book_page-10 .view-books-tab").addClass("three-five");
}
else if ($numbervideos4>4){
	$("#quicktabs-tabpage-book_page-10 .view-books-tab").addClass("six-more");
}
if ($numbervideos1<3){
	$("#block-costum-video-tab-1 .view-books-tab").addClass("one-two");
}
else if ($numbervideos1<5){
	$("#block-costum-video-tab-1 .view-books-tab").addClass("three-five");
}
else if ($numbervideos1>4){
	$("#block-costum-video-tab-1 .view-books-tab").addClass("six-more");
}
if ($numbervideos2<3){
	$("#block-costum-video-tab-2 .view-books-tab").addClass("one-two");
}
else if ($numbervideos2<5){
	$("#block-costum-video-tab-2 .view-books-tab").addClass("three-five");
}
else if ($numbervideos2>4){
	$("#block-costum-video-tab-2 .view-books-tab").addClass("six-more");
}
if ($numbervideos3<3){
	$("#block-costum-video-tab-3 .view-books-tab").addClass("one-two");
}
else if ($numbervideos3<5){
	$("#block-costum-video-tab-3 .view-books-tab").addClass("three-five");
}
else if ($numbervideos3>4){
	$("#block-costum-video-tab-3 .view-books-tab").addClass("six-more");
}



$(".view-books-tab.view-display-id-block_6 .views-row-odd.views-row-last").after("<div class='views-row views-row-even'></div>");

$(".view-books-tab.view-display-id-block_5 .views-row-odd.views-row-last").after("<div class='views-row views-row-even'></div>");

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











/********  read more at book page   ************/



  $('.read').click(function(){

    $("html, body").animate({ scrollTop: $("#nerative_body").offset().top -200 }, 2000);

    return false;

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







	$strtitle = $(".field-name-body .field-item").html();

	if($strtitle){

		$strtitle = $strtitle.replace("[quote]", '<div class="quote">"');

		$strtitle = $strtitle.replace("[/quote]", '"</div>');

		$strtitle = $strtitle.replace("[author]", "<div class='quote-author'>");

		$strtitle = $strtitle.replace("[/author]", "<div>");

		$('.field-name-body .field-item').html($strtitle);

	}

	$quote = $(".field-name-field-teaser-qoate .field-item").html();

	$quote = '"' + $quote + '"';

	$('.field-name-field-teaser-qoate .field-item').html($quote);

















}



/********   responsive menu  *************/



$(".menu-button").click(function(){

  if ($("body").hasClass("display-menu")){

    $("body").removeClass("display-menu");

  }

  else {

    $("body").addClass("display-menu");

  }

 });



$(".node-type-book .block-book h2").click(function(){

  if ($("body").hasClass("display-menu-book")){

    $("body").removeClass("display-menu-book");

  }

  else {

    $("body").addClass("display-menu-book");

  }

 });









  }



};











})(jQuery, Drupal, this, this.document);



