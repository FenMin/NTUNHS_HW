<?php
	include ("configure.php");
	
	$ID = isset($_GET['ID']) ? $_GET['ID'] : '';
	
	if (!$ID){
		header("Location: displaynote.php");
		
	}
	
	try{
		$link = new PDO('mysql:host='.$hostname.';dbname='.$database.';charset=utf8mb4', $username, $password);
		$link->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
		$query = "DELETE FROM `note` WHERE `note`.`ID`=$ID";
		$link->exec($query);
		
		header("Location: displaynote.php");
	}
	catch (PDOException $e)
	{
		// 顯示錯誤訊息
		echo $e->getMessage();
	}
?>
