<?php
/*
	題目說明：
	  1. 使用PHP顯示伺服器的系統時間
	  2. 用亂數抓取10張圖中的其中一張圖出來顯示
	  3. 以上HTML均需置中
*/

?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 4</title>
</head>
<body align = "center">

<?php
	date_default_timezone_set('Asia/Taipei'); 
	echo date('Y/m/d H:i:s') . "<br> <br> <img src = " . rand(1, 10)  . ".jpg>";
?>

</body>
</html>
