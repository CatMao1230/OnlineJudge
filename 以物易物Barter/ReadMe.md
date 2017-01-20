# Barter
<h1><img class="alignnone  wp-image-99" src="https://catmaoblog.files.wordpress.com/2016/10/6lqz4de.png" alt="Icon made by Freepik from www.flaticon.com" width="40" height="40" /> <a href="https://catmaoblog.wordpress.com/2017/01/20/barter/" target="_blank">點我前往 WordPress</a></h1>
<h1><img class="alignnone  wp-image-41" src="https://catmaoblog.files.wordpress.com/2016/10/3h9rzur.png" alt="Icon made by Popcorns Arts from www.flaticon.com" width="40" height="40" /> 程式題目</h1>
有一遊戲，有不同價值珠寶，價值由小排到大，各放在相鄰的箱子重，如要以物易物，食物價值 n ，如果只能拿連在一起的箱子，假設只有一種答案，請問要拿第幾個箱子到第幾個箱子？<br><br>
輸入：食物價值 珠寶價值<br>
輸出：位置<br>
<ul>
	<li><strong>範例輸入</strong><br>
15<br>
1 5 7 8 12<br>
221<br>
6 9 23 87 101 225<br>
99<br>
11 54 99 123 477<br>
0</li>
	<li><strong>範例輸出</strong><br>
3 4<br>
2 5<br>
3 3</li>
</ul>
<h1><img class="alignnone  wp-image-43" src="https://catmaoblog.files.wordpress.com/2016/10/ril6i6c.png" alt="Icon made by flaticon from www.flaticon.com" width="40" height="40" /> 程式碼</h1>
這次主要用到 getline 和 istringstream ，因為輸入珠寶價值時，並不知道總共有幾個箱子， getline 之後會得到一整行的 string ，為了把這些數字依照空白分開，我用了 istringstream 來讀取一行不知道有多少個的數字，此兩種教學都可看<a href="http://www.csie.ntnu.edu.tw/~u91029/C++.html" target="_blank">Standard Library / 演算法筆記</a>學習。

以下是簡略的架構圖，我用了兩層 for 迴圈來寫。

<img class="alignnone size-full wp-image-807" src="https://catmaoblog.files.wordpress.com/2017/01/xfcfk5n.png" alt="xfcfk5n" width="671" height="233" />

如果有更好的解題方法歡迎切磋指教～。
<h1><img class="alignnone  wp-image-42" src="https://catmaoblog.files.wordpress.com/2016/10/tpodion.png" alt="tpodion" width="40" height="40" /> 參考資料</h1>
<ul class="alt">
	<li><a href="http://www.csie.ntnu.edu.tw/~u91029/C++.html" target="_blank">Standard Library / 演算法筆記</a></li>
</ul>
