<?php
    $n = $_REQUEST['1'];
    $s = 0;
    for($i=0;$i<2*$n;$i++){
        if($i%2==1){
            $s+=$i;

        }
    }
    echo "sum is:",$s;

?>

<form method='post'>
    <input type='number' name='1' />
    <input type='submit' />

</form>