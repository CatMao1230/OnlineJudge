<img src="http://i.imgur.com/a41z9zz.png">
<h1><img class="alignnone  wp-image-99" src="https://catmaoblog.files.wordpress.com/2016/10/6lqz4de.png" alt="Icon made by Freepik from www.flaticon.com" width="40" height="40" /> <a href="https://catmaoblog.wordpress.com/2017/04/02/multiple-shortest-routes/" target="_blank">點我前往 WordPress
</a></h1>
給定一張有向圖，求 0 至目的地的最短路徑為多少，並且判定最短路徑是否只有一條。
輸入：
<ul>
	<li>第一個值為有向圖的測資數量</li>
	<li>第二個值代表有<em> n</em> 個建築物</li>
	<li>第三個值代表目的地</li>
	<li>第四個值代表有 <em>m</em> 個邊</li>
	<li>之後開始定義每個邊，一個邊有三個值，分別為起點、終點、長度</li>
</ul>
以下為我畫出題目範例輸入的有向圖：
<img class="alignnone size-full wp-image-1613" src="https://catmaoblog.files.wordpress.com/2017/04/h3uldwn.png" alt="h3uldwn" width="244px" height="152px" />

<img class="alignnone size-full wp-image-1614" src="https://catmaoblog.files.wordpress.com/2017/04/l58aehz.png" alt="l58aehz" width="242px" height="130px" />

<img class="alignnone size-full wp-image-1615" src="https://catmaoblog.files.wordpress.com/2017/04/tessfvu.png" alt="tessfvu" width="244px" height="131px" />
<h1><img class="alignnone  wp-image-43" src="https://catmaoblog.files.wordpress.com/2016/10/ril6i6c.png" alt="Icon made by flaticon from www.flaticon.com" width="40" height="40" /> 程式碼</h1>
求最短路徑的演算法有許多，可參考<a href="http://www.csie.ntnu.edu.tw/~u91029/Path2.html" target="_blank">Path / 演算法筆記</a>，這次我使用 Bellman-Ford Algorithm。

Bellman-Ford 演算法，下圖取自張經略老師：
<img class="alignnone size-full wp-image-1618" src="https://catmaoblog.files.wordpress.com/2017/04/l5sl4ml.png" alt="l5sl4ml" width="988" height="635" />
<ol>
	<li>每一點的最短路徑設成無限大</li>
	<li>0 到 0 的最短路徑為 0</li>
	<li>若總共 V 個點， 0 到任何一點最多都只能走 V - 1 次
（如果提前知道最遠的邊只有 x 次，可將 V - 1 改為 x 次）</li>
	<li>查看每一個邊，若有更短的走法就取代掉最短路徑</li>
</ol>
下圖是我在寫程式之前的分析，我用二維陣列來儲存每個邊，而斜角（例如 [1][1] ）來儲存 0 到這個點的最短路徑，所以 [0][0] 為 0 。這樣儲存雖然方便但是若建築物物多、邊少會造成記憶體浪費。文聘老師有提及可以用稀疏矩陣來解決此問題，之後我再補上。
<img class="alignnone size-full wp-image-1616" src="https://catmaoblog.files.wordpress.com/2017/04/sqdyxuw1.jpg" alt="sqdyxuw1" width="1056" height="1552" />

這題比較麻煩的是需要查看是否只有唯一一條最短路徑，所以我額外宣告了一個陣列來儲存每一個點的前一點，拿掉目的地之前的每一個邊，如果每一個邊被拿掉都會使最短路徑消失或變大，則代表沒有第二個最短路徑。
<h1><img class="alignnone  wp-image-42" src="https://catmaoblog.files.wordpress.com/2016/10/tpodion.png" alt="tpodion" width="40" height="40" /> 參考資料</h1>
<ul class="alt">
	<li>張經略老師</li>
	<li><a href="http://www.csie.ntnu.edu.tw/~u91029/Path2.html" target="_blank">Path / 演算法筆記</a></li>
</ul>
