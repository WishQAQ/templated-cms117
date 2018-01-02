<li class='{dede:field.currentstyle/}'>
                <div class="li-parent-div li-parentOne-div"><a href ="{dede:field name='typeurl'/}" >{dede:field name='typename'/}<i class="fa fa-plus"></i></a></div>
                <i class="nav_simpline_cur"></i>
                <div class="submenu">
                  <div class="back-div"><i class="fa fa-angle-left"></i><span>返回</span></div>
                  <ul>
                    {dede:channel type='son' noself='yes'}
                    <li><a href ="[field:typeurl/]">[field:typename/]</a></li>
                    {/dede:channel}
                  </ul>
                </div>
              </li>