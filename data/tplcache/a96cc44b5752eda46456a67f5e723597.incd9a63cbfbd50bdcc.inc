<?php
$z[0]=Array("field","",14,40);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","",48,76);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",78,107);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("sql","\r\n        <dd><a href='[field:typedir function=\"cn_substr(@me,200,9) \" /]'>[field:typename/]</a></dd>\r\n        ",133,328);
$z[3][4]=array();
$z[3][4]['sql']="Select * from `dede_arctype` where reid=~id~ ORDER BY id";

?>