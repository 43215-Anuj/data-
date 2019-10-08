<?php
if(isset($_POST['choice'])){
    if($_POST['choice']==1){
        $str =  $_POST['string'];
        echo $str . '<br/>'; 
         echo str_replace(' ','',$str);
            
    }
    elseif($_POST['choice']==2){
        $str =  $_POST['string'];
        $substr = $_POST['string2'];
        echo strpos($str,$substr);
    }
    elseif($_POST['choice']==3){
        $str =  $_POST['string'];
        if(preg_match('/^[A-Z+]$/',$str))
            echo 'UpperCase';
        elseif(preg_match('/^[a-z+]$/',$str))
            echo 'LowerCase ';
        else    
            echo 'Contains Special Character';
    }
    elseif($_POST['choice']==4){
        echo preg_replace('/the/','that',$string,1);
       # echo str_replace()


    }
}
?>


<p>1.Remove White Spaces</p>
<p>2.String Contains another String</p>
<p>3.Check if it is lowercase</p>
<p>4.Replace first the with that</p>
<form method='post'>
   Choice: <input name='choice' /><br>
   String:1 <input name='string' /><br>
    String 2<input name='string2' /><br>
    <input type='submit' value='sunmit' />
</form>