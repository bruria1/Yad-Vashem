	(function($){	
	$(function(){						
			$(".video_gal").each(function(){	
				dis_id = this.id.replace("video_gal_","");	
				overlay_gal = jQuery(this);
				$(this).find(".views-row").each(function(i,n){
					$(n).click(function(){
						overlay("my_overlay_"+dis_id);									
						var apiOv = jQuery("#fotorama_ovr_"+dis_id).data('fotorama');	
						apiOv.show(i);
						return false;
					});
				});
			});
			//var overlay = document.getElementById("my_overlay");	
			set_counter();
			$(".fotorama").each(function(i,n){				
				var fotoramdata = $(n).data('fotorama');
				if(typeof fotoramdata=="undefined")return;
				console.log(n);
			});					
	});	
})(jQuery)

function overlay(elem_id) {
	    if(elem_id=='close'){	
			jQuery(".fotorama").each(function(i,n){				
				var fotoramdata = jQuery(n).data('fotorama');
				if(typeof fotoramdata=="undefined")return;
				fotoramdata.stopVideo();
			});
			jQuery(".main_overlay").css("visibility","hidden");		
			console.log(jQuery("video"));
			
			return;
		}
		el = document.getElementById(elem_id);
		el.style.visibility = (el.style.visibility == "visible") ? "hidden" : "visible";
}
var addthis_share = {}
function set_counter(){
				jQuery(".main_overlay").each(function(){
					dis_id = this.id.replace("my_overlay_","");					
					var fotorama_ovr = jQuery(this);
					var fotorama_gal = jQuery('#fotorama_'+dis_id);//.fotorama();	
					
					jQuery("#img_description_"+dis_id).html(Drupal.settings["costum_"+dis_id].imgData[0].desc);	
					jQuery("#img_credit_"+dis_id).html(Drupal.settings["costum_"+dis_id].imgData[0].credit);
					
					fotorama_ovr.on('fotorama:show', function (e, fotorama) {
							dis_id = this.id.replace("my_overlay_","");							
							document.getElementById("cur_img_"+dis_id).innerHTML = (fotorama.activeIndex +1);
							var curData = Drupal.settings["costum_"+dis_id].imgData[fotorama.activeIndex];					
							jQuery("#img_description_"+dis_id).html(curData.desc);	
							jQuery("#img_credit_"+dis_id).html(curData.credit);								
							//addthis_share.title = "test me";
							//addthis_share.description = curData.desc
							//addthis_share.image = curData.url;
							//addthis_share.title = "asdasD";
					});	
					/***/
					
					fotorama_gal.on('fotorama:show', function (e, fotorama) {							
							jQuery(this).parent().find(".img_i").html((fotorama.activeIndex +1));
							//document.getElementById("img_i").innerHTML = (fotorama.activeIndex +1);		
					});
					
				});
									
}
