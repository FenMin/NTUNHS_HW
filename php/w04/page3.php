<?php
/*
	題目說明：
	  1. 計算$Student陣列的元素數目
	  2. 將成績排序 (顯示學生姓名與成績，成績由高至低排序)
*/

	// 一個陣列所宣告產生的學生姓名與成績
	$Student = array(array("可達鴨",0), array("皮卡丘",90), array("傑尼龜",70), array("妙蛙種子",80), array("胖丁",50), array("臭臭泥",40), array("果然翁",30), array("捲捲耳",60), array("帝牙盧卡",100), array("瑪納霏",99));
?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 2-2</title>
</head>
<body>
學生總人數：
<?php
	$total = count($Student);
	echo $total;
?>

<br><br>

成績排名：<br>
<?php
	usort($Student, function ($a, $b) {
		return $b[1] - $a[1];
	});
	
	for ($i = 0; $i < $total; $i++){
		echo $Student[$i][0] . " " .$Student[$i][1] . "<br>";
	}
?>

</body>
</html>
