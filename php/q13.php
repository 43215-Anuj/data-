<?php
    $n = $_REQUEST['1'];
    for($i=0;$i<2*$n;$i++){
        if($i%2==0){
            echo $i,'<br>';

        }
    }

?>

<form method='post'>
    <input type='number' name='1' />
    <input type='submit' />

</form>