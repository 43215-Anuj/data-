<?php
    switch($_POST['lang']){
        case 'hindi':
            echo 'नमस्ते';
            break;
        case 'english':
            echo 'hello';
            break;
        case 'Telegu':
            echo "హలో !";
            break;
        case 'Urdu':
            echo "ہیلو !";
            break;
    }


?>


<form method='post' >
    <select name='lang' >
        <option value='hindi'>Hindi</option>
        <option value='english'>English</option>
        <option value='Telegu'>Telegu</option>
        <option value='Urdu'>Urdu</option>
        <input type='submit'/>
        
</select>

</form>