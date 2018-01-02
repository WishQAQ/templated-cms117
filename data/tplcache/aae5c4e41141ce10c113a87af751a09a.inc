<li>
                    <div class="news-item">
                      <div class="date bg_main">
                        <div class="date-day">[field:pubdate function="MyDate('d',@me)"/]</div>
                        <div class="date-yearMonth">[field:pubdate function="MyDate('Y-m',@me)"/]</div>
                      </div>
                      <div class="news-com">
                        <div class="news-h"><a href="[field:arcurl/]" title="[field:title/]" >[field:title/]</a></div>
                        <div class="news-sum"> [field:description function="cn_substr(@me,400)"/]...</div>
                      </div>
                    </div>
                  </li>