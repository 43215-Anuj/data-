<?php
    $conn =  mysqli_connect('localhost','root','password','test');

    if(!$conn){
        echo 'eeror'.mysqli_connect_error();
    }
    $sql = 'select * from user_info';
    $sql2 = "insert into user_info values('chocho')";
 
  //  mysqli_query($conn,$sql);
    $result = mysqli_query($conn,$sql);
   $names = mysqli_fetch_all($result,MYSQLI_ASSOC);
    //$single = mysqli_fetch_assoc($result);
   // $single2 = mysqli_fetch_assoc($result);
    print_r($single2);
    foreach($names as $key=>$value)
    {
        print_r($value);
        echo "<br/>";
    }
    //print_r($names);
 
// $arr = explode('@','himanshu@dewan.com');


// list($username,$domain) = $arr;
// $assoc = compact('username','domain');
// print_r($assoc);
    
?>