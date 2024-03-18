<?php
/*
	題目說明：
	  搜尋$Score，當輸入關鍵字(部分)符合$Score[?]的第1個欄位或第2個欄位時，則顯示出$Score[?]該筆資料。
*/

	// 一個陣列所宣告產生的資料庫
	//	欄位依序代表「學生姓名」、「學生學號」、「國文成績」、「英文成績」與「數學成績」
	$Score = array( array("王小明", "440000001", 95, 93, 92),
					array("王小乖", "440000002", 85, 95, 77),
					array("王小笨", "440000003", 87, 76, 50),
					array("王大毛", "412345678", 88, 95, 85),
					array("林大毛", "440000005", 79, 82, 82));
?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 3-2</title>
</head>
<body>

	<b>NTUNHS成績查詢系統</b><br />
	<form action="" method="GET">
		請輸入學生姓名或學號：
		<input type="text" name="Keyword" value="" /><input type="submit" />
	</form><br />
	
	
	<?php 
		$input = isset($_GET["Keyword"]) ? $_GET["Keyword"] : '';
		$search_or_not = 0;
		
		if ($input == "") {
			echo "";
			return;
		}
		
		
		foreach ($Score as $data){
			if ((stristr($data[0], $input)) or (stristr($data[1], $input))){
				if ($search_or_not == 0){
					$search_or_not = 1;
					echo '<table style = "border:3px #FFAC55 double; padding:5px;" rules="all" cellpadding = "5">';
					echo '<tr bgcolor="#E0E0E0">';
					echo "<th> 學生姓名 </th> <th> 學生學號 </th> <th> 國文成績 </th> <th> 英文成績 </th> <th> 數學成績 </th>";
					echo "</tr>";
				}
				echo '<tr align="center">' . "<td>" . $data[0] . "</td>" . "<td>" . $data[1] . "</td>" . "<td>" . $data[2] . "</td>" . "<td>" . $data[3] . "</td>" . "<td>" . $data[4] . "</td>" . "</tr>";
				
			}	
		}
			
			
		if ($search_or_not == 0){
			echo "查無資料";
			return;
		}
		echo "</table>";
	?>
</body>
</html>
