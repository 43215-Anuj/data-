<?php
    function fib($n){
        if($n==0||$n==1){
            return $n;
        }
        else return fib($n-1)+fib($n-2);
    }
    $n = $_REQUEST['1'];
    for($i=0;$i<$n;$i++){
        echo fib($i),'<br>';
    }


?>




<form method='post' >
    <input type='numbers' name='1' />
    
    <input type='submit' />
</form>