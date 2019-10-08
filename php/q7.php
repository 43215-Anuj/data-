<?php
    $conn = mysqli_connect('localhost','root','password','test');
    if($conn && isset($_POST['username']) ){
        $name =  $_POST['username'];
        $password = $_POST['password'];
        $sql = "select * from user_info where name='$name' and password='$password';";
        $sql2 = "select * from user_info;";
        $p = mysqli_query($conn,$sql);
        $r = mysqli_fetch_all($p);
       // print_r($r);
        if(count($r)>=1){
            print_r($r[0][0]);
            echo "Welcome";
        }
        else{
            echo 'Enter valid cred';
        }
    }
    else{
        echo 'database error';
    }

?>

<form method='post'>
    UserName<input name='username' />
    Password<input name='password' />
    <input type='submit' name='submit'/>
</form>