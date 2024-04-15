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
	
	<br /><br />
	<div>
		<form action = "/addnote1.php">
			<input type="submit" style="position: absolute; top: 1%; left: 30%; border-radius:5px; border-color: #ccc;" value="新增資料" />
		</form>

		
		<table width="720" align="center" cellpadding="3" cellspacing="0" border="1">
			<!-- 本文 --->
			<tr align=center bgcolor="#FFDD88">
				<td width="150">標題</td>
				<td width="410">內 &nbsp; 文 &nbsp;</td>
				<td width = "80">修改</td>
				<td width = "80">刪除</td>
			</tr>
	</div>
		<?php
			try
			{
				// 建立與MySQL資料庫的連線
				$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
				//錯誤訊息提醒
				$link->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);

				// 用SQL語法呼叫exec()
				$query = "SELECT `note`.`ID`,`note`.`Title`,`note`.`Description` FROM `note` ORDER BY `note`.`Time` DESC";
				$result = $link->query($query);
				// 若是Insert, Update, Delete，不是使用query()，而是使用exec()
				//$count=$link->exec("INSERT INTO `note` ......");

				// $link->exec()的結果會放在$result中；一般為一陣列(Array)，包含N筆資料。
				// 然後，用$result->fetch_array()將此N筆資料，1筆1筆的讀出來，放至$row中。
				//while ($row=$result->fetch_array(MYSQLI_BOTH))	// 原mysqli的讀法
				//while ($row=$result->fetch(PDO::FETCH_ASSOC))		// 指定取出資料的型態	(此種方法亦可)
				while ($row = $result->fetch())						// 同 foreach ($result as $row)
				{
					
					echo "		<tr align=center bgcolor=\"#FFEECC\">       <td><H2>".$row["Title"]."</H2></td>            <td valign=\"top\" align=\"left\">".$row["Description"]."</td>       <td><a href='modifynote1.php?ID=".$row["ID"]."'>修改</a></td>         <td><a href='removenote.php?ID=".$row["ID"]."'>刪除</a> </td></tr>";
	
				}
			}
			catch (PDOException $e)
			{
				// 顯示錯誤訊息
				echo $e->getMessage();
			}
		?>

	</table><br /><br />

</body>
</html>
