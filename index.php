<?php 
include 'config.php';

$suhu_sebelum = $_GET['suhu_sebelum'];
$suhu_terakhir = $_GET['suhu_terakhir'];

$sql = "INSERT INTO suhu (id_suhu, suhu_sebelum, suhu_terakhir, waktu_suhu) VALUES (NULL, '$suhu_sebelum', '$suhu_terakhir', current_timestamp())";

if (mysqli_query($conn, $sql)) {
  echo "New record created successfully";
} else {
  echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}