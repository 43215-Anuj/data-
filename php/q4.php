<?php
    $today = date("Y-m-d");
    $bdate=$_REQUEST['date'];
    $birth_time=strtotime($bdate);
    $current_time=strtotime($today);
    $arr1=explode('-',$bdate);
    $bday_year=$arr1[0];
    $arr2=explode('-',$today);
    $today_year=$arr2[0];

    $year_diff=$today_year-$bday_year;
    
    $new_time=strtotime("+".$year_diff." year",$birth_time);
    if($new_time<$current_time){
        $new_time=strtotime("+1 year",$new_time);
        
    }
    $time_diff=$new_time-$current_time;
    $days=$time_diff/(86400);
    echo "Hurray!, only $days left in your birthday ";


?>

<form method='post' >

<input type='date' name='date' />
<input type='submit' value='submit' />

</form>