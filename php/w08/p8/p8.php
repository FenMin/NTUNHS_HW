<?php
/*
	題目說明：
	  擷取新聞各大版網頁，然後儲存至1.htm~5.htm，並結合Practice 6  (W08-2)，提供一搜尋當日新聞的功能。
*/

	// 5個新聞的連結($URLLink[0] ~ $URLLink[4])
	$URLLink = array("https://www.nownews.com/cat/news-global/", "https://www.nownews.com/cat/sport/", "https://www.nownews.com/cat/society/", "https://www.nownews.com/cat/column/", "https://www.nownews.com/cat/finance/");
	
	$Keyword = isset($_GET["Keyword"])?$_GET["Keyword"]:"";

	
	for ($i=1; $i<=5; $i++){
		$fr = file_get_contents($URLLink[$i-1]);
		file_put_contents("$i.htm",$fr);
	}
?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 8</title>
</head>
<body>

<form action="" method="GET">
關鍵字：
	<input type="text" name="Keyword" value="<?php echo $Keyword; ?>" /><input type="submit" />
</form>

<?php

	for ($i=1; $i<=5; $i++){
		$file = fopen("$i.htm", "r");
		$flag = 0;
		
		while(!feof($file)){
			$line_str = fgets($file);
			if (strpos($line_str , $Keyword) !== False){
				echo nl2br($line_str) . "<br>";
				$flag = 1;
			}
			
		}
		
		if ($flag == 1){
			echo "<a href='$i.htm'>$i.htm</a><br>";
		}
	}

?>

</body>
</html>
