<?php
$z[0]=Array("field","",54,82);
$z[0][4]=array();
$z[0][4]['name']="typeimg";
$z[1]=Array("field","",89,118);
$z[1][4]=array();
$z[1][4]['name']="typename";
$z[2]=Array("arclist","\n        <li><img src=\"[field:picname/]\" /></li>\n        ",204,343);
$z[2][4]=array();
$z[2][4]['orderby']="pubdate";
$z[2][4]['typeid']="12";
$z[2][4]['titlelen']="80";
$z[2][4]['row']="2";
$z[3]=Array("sql","[field:content function='cn_substr(html2text(@me),860)'/] ",552,681);
$z[3][4]=array();
$z[3][4]['sql']="Select content from dede_arctype where id=1";

?>