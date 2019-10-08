<?php
    // $name = $_REQUEST['user_input'];
    // global $count ;
    // $count = 10;
    // echo $name;
    // if(0==false){
    //     echo 'oh shit';
    // }
  //echo strrchr("My is name i hmanhu","is");
 // echo nl2br("One line.\nAnother line.");
        // $n = 4;

        // echo "<table border='1px'>";
        // for($i=0;$i<4;$i++)
        // {
        //     echo "<tr>";
        //     for($j=0;$j<4;$j++)
        //     {
        //         echo "<td>".$i*$j."</td>";
        //     }
        //     echo "</tr>";
        // }
        // echo "</table>";

        echo $_SERVER['REMOTE_PORT'];
 
   
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
<form action='/q1.php' method='get'>
    <input name='user_input'/>
    <input type='submit' />
</form>
</body>
</html>