<div class="about_i">
      <div class="com_tit">
        <h3 class="h3">{dede:field name='typename'/}</h3>
        <a href="list.php?tid={dede:field name='id'/}" title="更多">更多</a> <span class="line_I"></span> </div>
      <div class="about_i_c clear-fix">{dede:sql sql='Select content from dede_arctype where id=1'}[field:content function='cn_substr(html2text(@me),260)'/] {/dede:sql} ...</div>
    </div>