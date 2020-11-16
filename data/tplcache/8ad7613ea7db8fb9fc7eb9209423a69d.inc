<div class="common_title clear-fix">
      <div class="com_h2">
        <h2><span class="iconfont">&#xe63f;</span>&nbsp;成/鱼/展/览&nbsp;<span class="iconfont">&#xe63f;</span></h2>
        <span class="line_I"></span> </div>
      <div class="tit_ul">
        <div class="add_ul">
          <ul>
           {dede:channel type='son' typeid='2' titlelen='80' row='3'}
           <li><a href="list.php?tid=[field:id/]" class="son">[field:typename/]</a></li>
          {/dede:channel}             
          </ul>
        </div>
      </div>
      <p><a href="list.php?tid={dede:field name='id'/}" class="more">更多</a></p>
    </div>
    <ul class="icon_nav clear-fix">
    {dede:channel type='son' typeid='2' titlelen='80' row='3'}
      <li> <a href="list.php?tid=[field:id/]"><img src="[field:typeimg/]" alt="[field:title/]"><span>[field:typename/]</span></a> </li>
    {/dede:channel}  
    </ul>