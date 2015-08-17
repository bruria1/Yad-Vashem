(function($){	
	$(function(){			
			console.log("7");
			//var overlay = document.getElementById("my_overlay");	
			set_counter();						
	});	
})(jQuery)

function overlay(elem_id) {
	    if(elem_id=='close'){
			jQuery(".main_overlay").css("visibility","hidden");
		}
		el = document.getElementById(elem_id);
		el.style.visibility = (el.style.visibility == "visible") ? "hidden" : "visible";
}

function set_counter(){
				jQuery(".main_overlay").each(function(){
					dis_id = this.id.replace("my_overlay_","");
					console.log(this.id,dis_id);
					var fotorama_ovr = jQuery(this);
					var fotorama_gal = jQuery('#fotorama_'+dis_id);//.fotorama();	
					
					jQuery("#img_description_"+dis_id).html(Drupal.settings["costum_"+dis_id].imgData[0].desc);	
					jQuery("#img_credit_"+dis_id).html(Drupal.settings["costum_"+dis_id].imgData[0].credit);
					
					fotorama_ovr.on('fotorama:show', function (e, fotorama) {
							dis_id = this.id.replace("my_overlay_","");							
							document.getElementById("cur_img").innerHTML = (fotorama.activeIndex +1);					
							jQuery("#img_description_"+dis_id).html(Drupal.settings["costum_"+dis_id].imgData[fotorama.activeIndex].desc);	
							jQuery("#img_credit_"+dis_id).html(Drupal.settings["costum_"+dis_id].imgData[fotorama.activeIndex].credit);	
					});	
					/***/
					
					fotorama_gal.on('fotorama:show', function (e, fotorama) {							
							jQuery(this).parent().find(".img_i").html((fotorama.activeIndex +1));
							//document.getElementById("img_i").innerHTML = (fotorama.activeIndex +1);		
					});
					
				});
									
}
