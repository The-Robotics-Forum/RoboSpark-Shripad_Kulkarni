<?php
include('db.php');
if(isset($_POST['submit']))
{   $id=$_POST['id'];
    $query="SELECT * FROM `stud_data` WHERE `id`='$id'";
    $run=mysqli_query($con,$query);
    $row=mysqli_num_rows($run);
    if($row)
    { 
        echo "Login Success<br><br>";
        $user_row=mysqli_fetch_assoc($run);
        foreach($user_row as $keys=>$values)
        {   echo "<h3><b><i>";
            echo $keys."  :  ".$values."<br>";
            echo "</i></b></h3>";
        }
    }
    else
    {
        echo "Unsuccessful";
    }
}
?>