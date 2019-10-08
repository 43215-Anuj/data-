<?php
    $n = $_REQUEST['1'];
    for($i=0;$i<$n;$i++){
        for($j=0;$j<$i;$j++){
            echo "*";
        }
        echo '<br>';
    }

?>


<form method='post' >
    <input type='numbers' name='1' />
    
    <input type='submit' />
</form>