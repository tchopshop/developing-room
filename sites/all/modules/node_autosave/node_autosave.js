(function($){
  Drupal.NodeAutosave = Drupal.NodeAutosave || {};

  Drupal.behaviors.NodeAutosave = {
    attach: function(context) {
      $('#edit-node-autosave-save-button-top, #edit-node-autosave-save-button-bottom').click(Drupal.NodeAutosave.NodeAutosaveSave);
      $("#" + Drupal.settings.NodeAutosave.formId).once('NodeAutosave', function(){
        window.setInterval(Drupal.NodeAutosave.NodeAutosaveSave, Drupal.settings.NodeAutosave.autosavePeriod * 1000);
      });
    }
  };

  Drupal.NodeAutosave.NodeAutosaveSave = function() {
    var saveButton = $('#edit-node-autosave-save-button-bottom');
    $("#" + Drupal.settings.NodeAutosave.formId).ajaxSubmit({
      url: Drupal.settings.NodeAutosave.submitUrl,
      data: {_triggering_element_name: saveButton.attr('name'), _triggering_element_value: saveButton.attr('value')},
      dataType: 'json',
      success: NodeAutosaveResponse
    });
    return false;
  }

  function NodeAutosaveResponse(response) {
    if (typeof response == 'string') {
      response = $.parseJSON(response);
    }
    for(control in response) {
      $(response[control].selector).replaceWith(response[control].data);
    }
    $('.node-autosave-restore-button').removeClass('form-button-disabled').removeAttr('disabled');
    Drupal.attachBehaviors();
  }

})(jQuery)