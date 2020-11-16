<div class="con3_bg1">
  <div class="con3"> <img src="{dede:field name='typeimg'/}" alt="{dede:field name='typename'/}" class="title" />
    <div class="s_banner">
      <ul class="s_banner_pic">
        {dede:arclist orderby ='pubdate' typeid='12' titlelen='80' row='2'}
        <li><img src="[field:picname/]" /></li>
        {/dede:arclist}
      </ul>
      <div class="s_btns">
        <div> <a class="prev" href="javascript:void(0)"></a> <a class="next" href="javascript:void(0)"></a> </div>
      </div>
    </div>
    <div class="con3_font">　{dede:sql sql='Select content from dede_arctype where id=1'}[field:content function='cn_substr(html2text(@me),860)'/] {/dede:sql} ...</div>
  </div>
</div>