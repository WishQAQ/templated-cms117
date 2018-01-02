<li>
                    <div class="news-item">
                      <div class="date">
                        <div class="date-day">[field:pubdate function="MyDate('m-d',@me)"/]</div>
                        <div class="date-yearMonth"></div>
                      </div>
                      <div class="news-com">
                        <div class="news-together">
                          <div class="news-h"> <a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a> </div>
                        </div>
                        <div class="news-sum"> [field:description function="cn_substr(@me,400)"/]...</div>
                      </div>
                    </div>
                  </li>