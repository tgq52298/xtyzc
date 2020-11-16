<?php
$z[0]=Array("field","",55,83);
$z[0][4]=array();
$z[0][4]['name']="typeimg";
$z[1]=Array("field","",90,119);
$z[1][4]=array();
$z[1][4]['name']="typename";
$z[2]=Array("arclist","\r\n        <li><img src=\"[field:picname/]\" /></li>\r\n        ",208,349);
$z[2][4]=array();
$z[2][4]['orderby']="pubdate";
$z[2][4]['typeid']="12";
$z[2][4]['titlelen']="80";
$z[2][4]['row']="2";
$z[3]=Array("sql","[field:content function='cn_substr(html2text(@me),860)'/] ",564,693);
$z[3][4]=array();
$z[3][4]['sql']="Select content from dede_arctype where id=1";

?>