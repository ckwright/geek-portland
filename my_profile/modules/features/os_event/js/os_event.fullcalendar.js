/**
 * @file
 * Changes onclick behavior for fullcalendar module to open a popup.
 */

(function($) {
Drupal.fullcalendar.plugins.os_event = {
  options: function (fullcalendar, settings) {
    var time_options = {
      eventClick: function(calEvent, jsEvent, view) {
        if (settings.sameWindow) {
          window.open(calEvent.url, '_self');
        }
        else {
          window.open(calEvent.url + '?popup', '_blank', 'height=500,width=600,scrollbars=yes');
        }
        return false;
      },
      viewRender: function(view, fullcalendar) {
        var view_start_date = view.start;
        var view_start = {
          day : view_start_date.getDay(),
          month : view_start_date.getMonth(),
          year : view_start_date.getFullYear(),
        }
        $.cookie('fullcalendar_start', JSON.stringify(view_start), {json:true});
      },
    };

    if ($.cookie('fullcalendar_start')) {
      time_options = $.extend({}, JSON.parse($.cookie('fullcalendar_start')), time_options);
    }

    return time_options;
  }
};
}(jQuery));