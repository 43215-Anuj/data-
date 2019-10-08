<?php

    if(isset($_POST['1'])){
        $a = $_POST['1'];
        $f=true;
        for($i=0,$j=strlen($a)-1;$i<$j;$i++,$j--){
          if($a[$i]!=$a[$j]){
            echo 'not pali';
            $f = false;
            break;
          }
            
        }
        if($f==true){
            echo 'pali';
        }
        

    }
    
    

?>

<form method='post' >
    <input name='1' />
    
    <input type='submit' />
</form>
