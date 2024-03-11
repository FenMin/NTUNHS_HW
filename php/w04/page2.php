<?php
/*
	題目說明：
	  1. 計算$Student陣列的元素數目
	  2. 將名字排序，並顯示出來 (由A~Z排序)
*/

	// 一個陣列所宣告產生的學生姓名
	$Student = array("Derek", "Joe", "Kevin", "Charlton", "Lee", "Martin");
?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 2-1</title>
</head>
<body>
學生總人數：
<?php
	echo count($Student);
?>

<br><br>

姓名排序：<br>
<?php
	rsort($Student);
	for ($i = count($Student)-1; $i >= 0; $i--){
		echo $Student[$i] . "<br>";
	}
?>


</body>
</html>
