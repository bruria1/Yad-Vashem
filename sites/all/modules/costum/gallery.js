(function($){	
	$(function(){				
			var overlay = document.getElementById("my_overlay");	
			$("body").append(overlay);	
			set_counter();						
	});	
})(jQuery)

function overlay() {
		el = document.getElementById("my_overlay");
		el.style.visibility = (el.style.visibility == "visible") ? "hidden" : "visible";
}

function set_counter(){
				var fotorama_ovr = jQuery('#fotorama_ovr');//.fotorama();
				var fotorama_gal = jQuery('#fotorama');//.fotorama();
								
				jQuery("#img_description").html(Drupal.settings.costum.imgData[0].desc);	
				jQuery("#img_credit").html(Drupal.settings.costum.imgData[0].credit);
				fotorama_ovr.on('fotorama:show', function (e, fotorama) {
						document.getElementById("cur_img").innerHTML = (fotorama.activeIndex +1);					
						jQuery("#img_description").html(Drupal.settings.costum.imgData[fotorama.activeIndex].desc);	
						jQuery("#img_credit").html(Drupal.settings.costum.imgData[fotorama.activeIndex].credit);	
				});		
				fotorama_gal.on('fotorama:show', function (e, fotorama) {				
						document.getElementById("img_i").innerHTML = (fotorama.activeIndex +1);		
				});					
}
