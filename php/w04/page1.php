<?php
/*
	題目說明：
	    比較以下兩空格內的字串值，
		1. 當兩值為空時，不顯示；
		2. 當兩值相等時，顯示「絕對相等」；
		3. 當忽略大小寫後相等，顯示「相對相等」；
		4. 否則顯示「不相等」
*/
?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 1</title>
</head>
<body>
比較以下兩字串<br>
<form action="" method="GET">
	<input type="text" name="Value1" /> ≡ <input type="text" name="Value2" /><input type="submit" />
</form>

<?php 
	$var1 = isset($_GET["Value1"]) ? $_GET["Value1"] : "";
	$var2 = isset($_GET["Value2"]) ? $_GET["Value2"] : "";
	
	if (($var1 == $var2) AND ($var1 == "" && $var2 == "")) {
		echo "";}
		
	else if ($var1 === $var2) {		
		echo "完全相等";}
		
	else if (strtoupper($var1) === strtoupper($var2)) {
		echo "部分相等";}
		
	else {
		echo "完全不相等";}
?>
</body>
</html>
