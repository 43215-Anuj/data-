<?php
    $conn = mysqli_connect('localhost','root','password','test');
    if($conn){
        $sql = "select * from result ;";
        $r = mysqli_query($conn,$sql);
        $result = mysqli_fetch_all($r);
        print_r($result);
    }
    function print_grade($marks){
        if($marks>90){
            echo 'A';
        }
        elseif($marks>=80){
            echo 'B';
        }
        else{
            echo 'C';
        }
    }

?>

<div>
<?php 

foreach($result as $value) {?>
    <div>name</div><?php echo $value[0] ?><br/>
    <div>marks</div><?php echo $value[1] ?><br />
    <div>grade</div><?php echo print_grade($value[1]) ?><br />
    <hr/>

<?php } ?>
</div>

