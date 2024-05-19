<?php
	$file = fopen("board.txt", "r") or die("Unable to open file!");
	while(!feof($file)) {
		echo fgets($file) . "<br>";
	}
	
	fclose($file);
?>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Practice 5</title>
</head>
<body>


</body>
</html>
