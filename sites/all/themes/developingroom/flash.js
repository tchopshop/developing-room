(function ($) {
  Drupal.behaviors.developingroom = {
    attach: function(context, settings) {
      // you can implement your custom javascript/jquery here,
      // and also create other attached behaviors

$("#flash-div").hide();

setTimeout(function(){
	$("#flash")[0].play();
	 $("#flash-div")
             .show()  //show the hidden div
             .animate({opacity: 0.5}, 300)
             .fadeOut(300)
             .css({'opacity': 1});
},5000);

$("#primary-menu-bar a")
  .each(function(i) {
    if (i != 0) {
      $("#flash")
        .clone()
        .attr("id", "flash" + i)
        .appendTo($(this).parent());
    }
    $(this).data("beeper", i);
  })
  .mouseover(function() {
    $("#flash" + $(this).data("beeper"))[0].play();
    $("#flash-div")
             .show()  //show the hidden div
             .animate({opacity: 0.5}, 300)
             .fadeOut(300)
             .css({'opacity': 1});
  });
    $("#flash").attr("id", "flash0");


$("#logo a")
  .each(function(i) {
    if (i != 0) {
      $("#flash")
        .clone()
        .attr("id", "flash" + i)
        .appendTo($(this).parent());
    }
    $(this).data("beeper", i);
  })
  .click(function() {
    $("#flash" + $(this).data("beeper"))[0].play();
    $("#flash-div")
             .show()  //show the hidden div
             .animate({opacity: 0.5}, 300)
             .fadeOut(300)
             .css({'opacity': 1});
  });
    $("#flash").attr("id", "flash0");


    }
  };
})(jQuery);