<?php
	include ("configure.php");
	
	// 建立與MySQL資料庫的連線
	$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
	
	$ID = isset($_GET['ID']) ? $_GET['ID'] : '';
	$title = isset($_GET['title']) ? $_GET['title'] : '';
	$des = isset($_GET['description']) ? $_GET['description'] : '';
	

	if ($title || $des){
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
				$title_from_db = $row['Title'];
				$desc_from_db  = $row['Description']; 
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
    <form action>
      <label for="title">標題:</label><br>
      <input type="text" id="title" name="title" value="<?php echo $title_from_db; ?>"><br>
	  
      <label for="description">內文:</label><br>
      <textarea id="description" name="description" cols="15" rows="8" style="height: 150px; width: 200px; resize: none;"><?php echo $desc_from_db; ?></textarea><br>
	  
	  <input type="hidden" name="ID", value = <?php echo $ID ?>>
	  
      <input type="submit" value="更新">
	  <input type="button" value="取消" onclick="window.location.href='displaynote.php'">
	  
	  
    </form>
  </body>
</html>

<?php
	$title = isset($_GET['title']) ? $_GET['title'] : '';
	$des = isset($_GET['description']) ? $_GET['description'] : '';
	if (!$title || !$des){
		return;
	}
	
	$query = "UPDATE `note` SET `Title`='$title', `Description`='$des' WHERE `ID` = $ID";

	$link->exec($query);
?>

