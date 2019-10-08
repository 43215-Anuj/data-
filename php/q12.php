<?php

function prime($n){
    
    for($i=2;$i<=$n-2;$i++){
        if($n%$i==0){
            return false;
        }
    }
    return true;
}
    if(isset($_POST['1'])){
        if(prime($_POST['1'])){
            echo 'prime';
        }
        else{
            echo 'notprime';
        }
    }

?>

<form method='post'>
    <input type='number' name='1' />
    <input type='submit' />

</form>