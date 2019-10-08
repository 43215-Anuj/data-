<?php
    function my_fact($num){
        if($num==1 || $num == 0){
            return 1;
        }
        else return $num * my_fact($num-1);
    }

    echo my_fact($_POST['1']);

?>

<form method='post' >
    <input type='number' name='1' />
    <input type='submit' />
</form>