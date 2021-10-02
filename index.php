<h1>Database Conncetion</h1>
<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "pgd-it";

// Create connection
// $conn = new mysqli($servername, $username, $password, $dbname);
$conn = mysqli_connect($servername, $username, $password, $dbname);

$data = mysqli_query($conn, "SELECT `ID No.`,`Name`,`Phone`,`Department`,`Mail Address`,`Address` FROM `ju-13`");
echo "<center><table border=1> <th>ID</th><th>Name</th> <th>Phone</th><th>Department</th><th>Mail Address</th><th>Address</th>";
while ($row = mysqli_fetch_assoc($data)) {
    echo "<tr>";
    echo "<td>" . $row['ID No.'] . "</td>" .
        "<td>" . $row['Name'] . "</td>" .
        "<td>" . $row['Phone'] . "</td>" .
        "<td>" . $row['Department'] . "</td>" .
        "<td>" . $row['Mail Address'] . "</td>" .
        "<td>" . $row['Address'] . "</td>";
    echo "</tr>";
}
echo "</table></center>";
?>