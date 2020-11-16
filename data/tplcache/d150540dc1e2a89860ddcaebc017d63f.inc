<li><a class="{dede:field.currentstyle/}" href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
      <dl>
        {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}
        <dd><a href='[field:typedir function="cn_substr(@me,200,9) " /]'>[field:typename/]</a></dd>
        {/dede:sql}
      </dl>
    </li>