<div class="com_tit">
      <h3 class="h3">{dede:field name='typename'/}</h3>
      <a href="list.php?tid={dede:field name='id'/}" title="更多">更多</a> <span class="line_I"></span> </div>
    <div class="new_c">
      <ul>
       {dede:arclist limit='0,1' orderby='id'}
        <li><em>.0[field:global.autoindex/]</em> <a href="view.php?aid=[field:id/]">[field:title/]</a>
          <p>[field:description function="cn_substr(@me,100)"/]...</p>
        </li>
       {/dede:arclist}  
       {dede:arclist limit='1,2' orderby='id'}
        <li><em>.0[field:global name=autoindex runphp="yes"]@me=@me+1;[/field:global]</em><a href="view.php?aid=[field:id/]">[field:title/]</a></li>
       {/dede:arclist}   
      </ul>
    </div>