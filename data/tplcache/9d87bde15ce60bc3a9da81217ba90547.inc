<div class="common_title clear-fix">
      <div class="com_h2">
        <h2><span class="search_s">&#xe60f;</span> 鱼/苗/展/览 <span class="search_s">&#xe60f;</span></h2>
        <span class="line_I"></span> </div>
      <div class="tit_ul">
        <div class="add_ul">
          <ul>
          {dede:channel type='son' row='4'}
           <li><a href="list.php?tid=[field:id/]" class="son">[field:typename/]</a></li>
          {/dede:channel}             
          </ul>
        </div>
      </div>
      <p><a href="list.php?tid={dede:field name='id'/}" class="more">更多</a></p>
    </div>
    <ul class="icon_nav clear-fix">
    {dede:arclist limit='0,2' orderby='id'}
      <li> <a href="view.php?aid=[field:id/]"><img src="[field:picname/]" alt="[field:title/]"><span>[field:title/]</span></a> </li>
    {/dede:arclist}   
    </ul>
    <ul class="icon_nav clear-fix">
    {dede:arclist limit='2,2' orderby='id'}
      <li> <a href="view.php?aid=[field:id/]"><img src="[field:picname/]" alt="[field:title/]"><span>[field:title/]</span></a> </li>
    {/dede:arclist}  
    </ul>