<?php
	include ("configure.php");
?>
<!doctype html>
<html>
<head>
	<meta charset="UTF-8" />
	<title>NTUNHS PHP+MySQL課程範例</title>
	<meta name="keywords" content="MySQL, PHP, NTUNHS, PHP網路程式設計, 範例程式" />
	<meta name="description" content="這是「PHP網路程式設計」課程用的PHP+MySQL範例程式" />
</head>

<body>
		<?php
			// 建立與MySQL資料庫的連線
			$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);

			// 用SQL語法呼叫exec()
			$query = "SELECT Nickname,Live1 from personal where Live1 LIKE '198%'";
			$result = $link->query($query);
			// 若是Insert, Update, Delete，不是使用query()，而是使用exec()

			// $link->exec()的結果會放在$result中；一般為一陣列(Array)，包含N筆資料。
			// 然後，用$result->fetch()將此N筆資料，1筆1筆的讀出來，放至$row中。
			//while ($row=$result->fetch_array(MYSQLI_BOTH))	// 原mysqli的讀法
			//while ($row=$result->fetch(PDO::FETCH_ASSOC))		// 此種方法亦可
			foreach ($result as $row)							// 同 while ($row = $result->fetch())
			{
				// 在此例中，$row中有$row["Time"]與$row["Description"]兩欄位的值。
				echo $row["Nickname"] . "\t" . $row["Live1"] . "<br>";
			} 
		
			echo "<br>" . "<br>" . "總共" . $result -> rowcount() . "筆資料";
		?>

	</table><br /><br />

</body>
</html>
