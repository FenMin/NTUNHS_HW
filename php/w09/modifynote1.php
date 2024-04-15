<?php
	include ("configure.php");
	
	// 建立與MySQL資料庫的連線
	$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
	
	$ID = isset($_GET['ID']) ? $_GET['ID'] : '';
	
	if (!$ID){
		header("Location: displaynote.php");
	}
	
	try
	{
		$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
		$link->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);

		$query = "SELECT `note`.`Title`,`note`.`Description` FROM `note` WHERE `note`.`ID` = $ID";
		$result = $link->query($query);
	
		$row = $result->fetch();
		if ($row) {
			$title = $row['Title'];
			$desc  = $row['Description']; 
		}

	}
	catch (PDOException $e)
	{
		// 顯示錯誤訊息
		echo $e->getMessage();
	}
	
?>
<!DOCTYPE html>
<html>

  <body>
    <form>
      <label for="title">標題:</label><br>
      <input type="text" id="title" name="title" value=<?php echo $title; ?>><br>
	  
      <label for="description">內文:</label><br>
      <textarea id="description" name="description" maxlength="35" style="height: 150px; width: 200px; resize: none;"><?php echo $desc; ?></textarea><br>


      <input type="submit" value="更新">
      <input type="reset" value="取消">
    </form>
  </body>
</html>

<?php
	
	
	
?>

