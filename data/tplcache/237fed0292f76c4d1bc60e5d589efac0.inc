<div class="con1"> <img src="{dede:field name='typeimg'/}" alt="{dede:field name='typename'/}" class="title" />
  <ul class="con1_list">
    {dede:arclist orderby ='pubdate' titlelen='80' row='4'}
    <li> <a href="[field:arcurl/]" title="[field:title/]"> <img src="[field:picname/]" width="218" height="228" class="PicAuto" alt="[field:title/]" /> <span>[field:title/]</span> <img src="/skin/img/add.png" class="add" /> </a> </li>
    {/dede:arclist}
  </ul>
</div>