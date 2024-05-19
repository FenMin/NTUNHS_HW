<?php
	include ("configure.php");
	
	// 建立與MySQL資料庫的連線
	$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
	
?>
<!DOCTYPE html>
<html>

  <body>
    <form>
      <label for="title">標題:</label><br>
      <input type="text" id="title" name="title"><br>
	  
      <label for="description">描述:</label><br>
      <textarea id="description" name="description" cols="15" rows="8" style="height: 150px; width: 200px; resize: none;"></textarea><br>


      <input type="submit" value="新增">
      <input type="reset" value="取消">
    </form>
  </body>
</html>

<?php
	$title = isset($_GET['title']) ? $_GET['title'] : '';
	$des = isset($_GET['description']) ? $_GET['description'] : '';
	
	if (!$title || !$des){
		return;
	}
	
	try
	{
		$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
		$link->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
		
		$query = "INSERT INTO `note` (`Title`, `Description`) VALUES ('$title', '$des')";

		$link->exec($query);
		header("Location: displaynote.php");		
	}
	catch (PDOException $e)
	{
		// 顯示錯誤訊息
		echo $e->getMessage();
	}
	

?>

