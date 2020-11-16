<li class="news4">
       <a href="view.php?aid=[field:id/]" title="[field:title/]"> <img src="[field:litpic/]" alt="[field:title/]"> <span>[field:title/]</span> </a>
      </li>
      [field:global runphp='yes' name=autoindex]
            $a="<div class='clear'></div>";
            $b="";
            if ((@me%2)==0 && @me!=30) @me=$a;
            else  @me=$b;
            [/field:global]