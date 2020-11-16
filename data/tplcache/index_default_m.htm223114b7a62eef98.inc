<?php
$z[0]=Array("field","",365,384);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",385,411);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",452,481);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("global","",521,551);
$z[3][4]=array();
$z[3][4]['name']="cfg_description";
$z[4]=Array("include","",1203,1239);
$z[4][4]=array();
$z[4][4]['filename']="nav_m.htm";
$z[5]=Array("field","",1460,1482);
$z[5][4]=array();
$z[5][4]['name']="typename";
$z[6]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n@me=is_array(\$row)?'none':'class=\"class-btn\"';\r\n",1498,1751);
$z[6][4]=array();
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n        <li> <a href=\"list.php?tid=[field:id/]\" >[field:typename/]</a> <span class=\"commonfont class-down\">&#xe60c;</span>\r\n          <dl>\r\n          </dl>\r\n        </li>\r\n        ",1986,2217);
$z[7][4]=array();
$z[7][4]['type']="son";
$z[7][4]['row']="10";
$z[8]=Array("field","",2317,2345);
$z[8][4]=array();
$z[8][4]['name']="content";
$z[9]=Array("include","",2371,2410);
$z[9][4]=array();
$z[9][4]['filename']="footer_m.htm";

?>