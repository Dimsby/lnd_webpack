import 'bootstrap';

import '../scss/main.scss';

$(document).ready(function() {
    $('.toggler-open').click(function() {
        $('body, html').addClass('no-scroll');
    })
    $('.toggler-close').click(function() {
        $('body, html').removeClass('no-scroll');
    })

    $('.toggler-any').click(function() {
        $('body, html').toggleClass('no-scroll');
    })
})