<?php
$z[0]=Array("global","",357,383);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",426,456);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",492,519);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",1497,1533);
$z[3][4]=array();
$z[3][4]['filename']="nav_m.htm";
$z[4]=Array("global","",1742,1768);
$z[4][4]=array();
$z[4][4]['name']="cfg_webname";
$z[5]=Array("global","",1806,1832);
$z[5][4]=array();
$z[5][4]['name']="cfg_webname";
$z[6]=Array("global","",2053,2078);
$z[6][4]=array();
$z[6][4]['name']="cfg_cmsurl";
$z[7]=Array("arclist","\n  					<li> <img src=\"[field:picname/]\" /> </li>\n  				",2624,2729);
$z[7][4]=array();
$z[7][4]['typeid']="17";
$z[7][4]['row']="5";
$z[8]=Array("channel","\n       <li><a href=\"list.php?tid=[field:id/]\" class=\"son\">[field:typename/]</a></li>\n      ",3280,3420);
$z[8][4]=array();
$z[8][4]['type']="top";
$z[8][4]['row']="8";
$z[9]=Array("channelartlist","\n    <div class=\"common_title clear-fix\">\n      <div class=\"com_h2\">\n        <h2><span class=\"iconfont\">&#xe63f;</span>&nbsp;成/鱼/展/览&nbsp;<span class=\"iconfont\">&#xe63f;</span></h2>\n        <span class=\"line_I\"></span> </div>\n      <div class=\"tit_ul\">\n        <div class=\"add_ul\">\n          <ul>\n           {dede:channel type='son' typeid='2' titlelen='80' row='4'}\n           <li><a href=\"list.php?tid=[field:id/]\" class=\"son\">[field:typename/]</a></li>\n          {/dede:channel}             \n          </ul>\n        </div>\n      </div>\n      <p><a href=\"list.php?tid={dede:field name='id'/}\" class=\"more\">更多</a></p>\n    </div>\n    <ul class=\"icon_nav clear-fix\">\n    {dede:channel type='son' typeid='2' titlelen='80' row='4'}\n      <li> <a href=\"list.php?tid=[field:id/]\"><img src=\"[field:typeimg/]\" alt=\"[field:title/]\"><span>[field:typename/]</span></a> </li>\n    {/dede:channel}  \n    </ul>\n  ",3473,4440);
$z[9][4]=array();
$z[9][4]['typeid']="2,0";
$z[10]=Array("channelartlist","\n    <div class=\"common_title clear-fix\">\n      <div class=\"com_h2\">\n      <h2><span class=\"search_s\">&#xe60f;</span>&nbsp;鱼/苗/展/览&nbsp;<span class=\"search_s\">&#xe60f;</span></h2>\n        <span class=\"line_I\"></span> </div>\n      <div class=\"tit_ul\">\n        <div class=\"add_ul\">\n          <ul>\n           {dede:channel type='son' typeid='7' titlelen='80' row='4'}\n           <li><a href=\"list.php?tid=[field:id/]\" class=\"son\">[field:typename/]</a></li>\n          {/dede:channel}             \n          </ul>\n        </div>\n      </div>\n      <p><a href=\"list.php?tid={dede:field name='id'/}\" class=\"more\">更多</a></p>\n    </div>\n    <ul class=\"icon_nav clear-fix\">\n    {dede:channel type='son' typeid='7' titlelen='80' row='4'}\n      <li> <a href=\"list.php?tid=[field:id/]\"><img src=\"[field:typeimg/]\" alt=\"[field:title/]\"><span>[field:typename/]</span></a> </li>\n    {/dede:channel}  \n    </ul>\n  ",4480,5445);
$z[10][4]=array();
$z[10][4]['typeid']="7,0";
$z[11]=Array("channelartlist","\n    <div class=\"com_tit\">\n      <h3 class=\"h3\">{dede:field name='typename'/}</h3>\n      <a href=\"list.php?tid={dede:field name='id'/}\" title=\"更多\">更多</a> <span class=\"line_I\"></span> </div>\n    <div class=\"new_c\">\n      <ul>\n       {dede:arclist limit='0,1' orderby='id'}\n        <li><em>.0[field:global.autoindex/]</em> <a href=\"view.php?aid=[field:id/]\">[field:title/]</a>\n<!--          <p>[field:description function=\"cn_substr(@me,100)\"/]...</p>\n -->        </li>\n       {/dede:arclist}  \n       {dede:arclist limit='1,2' orderby='id'}\n        <li><em>.0[field:global name=autoindex runphp=\"yes\"]@me=@me+1;[/field:global]</em><a href=\"view.php?aid=[field:id/]\">[field:title/]</a></li>\n       {/dede:arclist}   \n      </ul>\n    </div>\n    ",5479,6286);
$z[11][4]=array();
$z[11][4]['typeid']="13,0";
$z[12]=Array("channelartlist","\n    <div class=\"about_i\">\n      <div class=\"com_tit\">\n        <h3 class=\"h3\">{dede:field name='typename'/}</h3>\n        <a href=\"list.php?tid={dede:field name='id'/}\" title=\"更多\">更多</a> <span class=\"line_I\"></span> </div>\n      <div class=\"about_i_c clear-fix\"> <a href=\"list.php?tid={dede:field name='id'/}\" title=\"公司简介\">{dede:sql sql='Select content from dede_arctype where id=1'}[field:content function='cn_substr(html2text(@me),260)'/] {/dede:sql} ...</a> </div>\n    </div>\n    ",6339,6893);
$z[12][4]=array();
$z[12][4]['typeid']="1,0";
$z[13]=Array("global","",6934,6960);
$z[13][4]=array();
$z[13][4]['name']="cfg_powerby";
$z[14]=Array("global","",7031,7055);
$z[14][4]=array();
$z[14][4]['name']="cfg_beian";
$z[15]=Array("global","",7074,7098);
$z[15][4]=array();
$z[15][4]['name']="cfg_beian";
$z[16]=Array("include","",7123,7162);
$z[16][4]=array();
$z[16][4]['filename']="footer_m.htm";

?>