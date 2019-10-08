<?php
    $conn = mysqli_connect('localhost','root','password','test');
    $email = $_POST['email'];
    if(preg_match('/^[a-zA-Z0-9]+@[a-zA-Z]+\.[a-zA-Z]+$/',$email)){
        echo 'match'.'<br/>';
    }
    else{
        echo 'does not match';
    }
    if($conn){
        $d = strstr($email,'@');
        $domain = substr($d,1);
        echo $domain;
        $sql = "select * from domain where name='$domain'";
        $r = mysqli_query($conn,$sql);
        $result = mysqli_fetch_all($r);
        if(count($result)>=1){
            echo 'Valid Domain';
        }
        else{
            echo 'Invalid Domain';
        }

    }

?>

<form method='post'>
    email<input name='email' />
    <input type='submit' name='submit'/>
</form>
