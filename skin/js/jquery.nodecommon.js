$.extend({
    AutoImageSize: function (item, bool) {
        if (item[0]) {
            item = item[0];
        }
        var imgWidth = item.width;
        var imgHeight = item.height;
        if (!item[0]) {
            item = $(item);
        }
        var parent = item.parent();
        var boxH = parent.height();
        var boxW = parent.width();
        if (imgWidth > boxW) {
            imgHeight = imgHeight * (boxW / imgWidth);
            imgWidth = boxW;
        }
        if (imgHeight > boxH) {
            imgWidth = imgWidth * (boxH / imgHeight);
            imgHeight = boxH;
        }
        if (typeof bool === 'undefined') {
            item.attr("style", "");
        }
        if (!parent.is(":hidden")) {
            item.css({'width': imgWidth + 'px', 'height': imgHeight + 'px', 'left': (boxW - imgWidth) / 2 + "px", 'top': (boxH - imgHeight) / 2 + "px"});
            $(window).resize(function () {
                $.AutoImageSize(item);
            });
        } else {
            var setI = setInterval(function () {
                if (!parent.is(":hidden")) {
                    clearInterval(setI);
                    $.AutoImageSize(item);
                }
                $(window).resize(function () {
                    clearInterval(setI);
                });
            }, 100);
        }
    }
}); 