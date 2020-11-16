<!--资质荣誉-->
    <div class="rx_tel clear-fix"> <span><a href="tel:{dede:global.cfg_tel/}">{dede:global.cfg_tel/}</a></span> <span><a href="tel:{dede:global.cfg_fax/}">{dede:global.cfg_fax/}</a></span>
      <h3 class="h3">{dede:field name='typename'/}</h3>
      </div>
    <ul class="icon_nav2 clear-fix">
    {dede:arclist row='2' orderby='id'}
      <li><a href="view.php?aid=[field:id/]"><img src="[field:picname/]" alt="[field:title/]"><span>[field:title/]</span></a></li>
    {/dede:arclist}     
    </ul>