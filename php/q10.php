<?php
    if($_POST['1']>=$_POST['2'] && $_POST['1']>=$_POST['3'] ){
        echo $_POST['1'];
    }
    else if($_POST['2']>=$_POST['3']){
        echo $_POST['2'];
    }
    else {
         echo $_POST['3'];
    }
    

?>

<form method='post'>
    <input  type='number' name='1'/>
    <input type='number' name='2'/>
    <input type='number' name='3'/>
    <input type='submit' />
</form>