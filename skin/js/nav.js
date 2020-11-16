$(document).ready(function(){
    $('.codepic').hover(function(){$('.code').fadeIn()},function(){$('.code').fadeOut()});
    $('.backup').click(function(){
        $('body,html').animate({scrollTop:0},500)
    });
    $(".backup").hide();
    $(function () {
        $(window).scroll(function(){
            if ($(window).scrollTop()>500){
                $(".backup").fadeIn(1000);
            }else{
                $(".backup").fadeOut(1000);
            }
        });
    });

    $(".left_nav li a").click(function(){
        $(this).parent("li").find("ul").slideToggle();
    });
    var nav_ul = $(".nav li");
    nav_ul.hover(function(){
        $(this).addClass("hover");
        $(this).find("dl").stop(true,true).slideDown();
    },function(){
        $(this).removeClass("hover");
        $(this).find("dl").stop(true,true).slideUp();
    });
    $(".banner").slide({ titCell:".num ul" , mainCell:".banner_pic" , effect:"fold", autoPlay:true, delayTime:700 , autoPage:true });
    $(".s_banner").slide({ titCell:".s_num ul" , mainCell:".s_banner_pic" , effect:"fold", autoPlay:true, delayTime:700 , autoPage:true });

    $(".con2_news li").eq(1).css("background","#edf1ec")
});