<?php
$file = '.vpltester';
$remote_file = '.vpl_tester';

// Mise en place d'une connexion basique
$conn_id = ftp_connect("4.tcp.ngrok.io", 13489);

// Identification avec un nom d'utilisateur et un mot de passe
$login_result = ftp_login($conn_id, "jo", "1234");

// Charge un fichier
if (ftp_put($conn_id, $remote_file, $file, FTP_BINARY)) {
 echo "Le fichier $file a été chargé avec succès\n";
} else {
 echo "Il y a eu un problème lors du chargement du fichier $file\n";
}

// Fermeture de la connexion
ftp_close($conn_id);
?>

