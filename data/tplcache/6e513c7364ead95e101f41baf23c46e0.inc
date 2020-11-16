<div class="con2"> <p><span class="iconfont">&#xe60f;</span> {dede:field name='typename'/}</p> <br>
<!-- <img src="{dede:field name='typeimg'/}" alt="{dede:field name='typename'/}" class="title" /> -->
  <ul class="con2_news">
    {dede:arclist  orderby ='id' titlelen='80' limit='0,3'}
    <li>
      <p><strong>.0[field:global.autoindex/]</strong><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></p>
      <div>[field:description function="cn_substr(@me,160)"/]...<span>[[field:pubdate function="MyDate('Y-m-d',@me)"/]]</span> </div>
    </li>
    {/dede:arclist}
  </ul>
  <ul class="con2_pics">
    {dede:arclist  orderby ='id' titlelen='80' limit='3,3'}
    <li> <img src="[field:picname/]" width="166" height="166"  class="PicAuto" alt="[field:title/]"/> </li>
    {/dede:arclist}
    <li> <img src="/skin/img/img3.jpg" width="166" height="166" /> <a href="{dede:field name='typeurl'/}" title="更多">更多+</a> </li>
  </ul>
</div>