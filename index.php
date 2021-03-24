<!DOCTYPE html>
<html>

<body>

	<h1>FNF Assets</h1>


	<?php
	// require('../vendor/autoload.php');

	echo '<p>Hello World</p>';
	echo "";
	echo "";

	if (getenv('DATABASE_URL')) {
		$dbopts = parse_url(getenv('DATABASE_URL') . "sslmode=require");

		$servername = $dbopts["host"];
		$username = $dbopts["user"];
		$password = $dbopts["pass"];
		$port = $dbopts["port"];
	} else {
		$servername = "ec2-34-195-233-155.compute-1.amazonaws.com";
		$username = "xdspfemnpunbtj";
		$password = "3ae047ad8d9823e69cf3108719d00f35f8839ad535897a2fad6cf41a4c57224f";
		$port = 5432;
	};


	// Create connection
	$mysqli = mysqli_init();
	// $mysqli->options(MYSQLI_OPT_SSL_VERIFY_SERVER_CERT, false);
	$mysqli->ssl_set(NULL, NULL, "/etc/ssl/certs/ca-bundle.crt", NULL, NULL);
	$mysqli->real_connect($servername, $username, $password, "d4bl01oo4fre8m", $port);

	// Check connection
	if ($mysqli->connect_errno) {
		echo "Failed to connect to MySQL: " . $mysqli->connect_error;
		exit();
	}
	echo "<p>Connected successfully<p>";
	echo "";
	echo "";



	$query = "SELECT ASSETS.FACTION,
			ASSETS.DISPLAYNAME,
			ASSETS.PILOTSEATS,
			wep1wep.DISPLAYNAME as PilotWep1,
			wep1mag.CALIBER as PilotWep1Caliber,
			wep1mag.AMMO as PilotWep1Ammo,
			ASSETS.PILOTWEAPON1MAGCOUNT as PilotWep1Mags,
			wep2wep.DISPLAYNAME as PilotWep2,
			wep2mag.CALIBER as PilotWep2Caliber,
			wep2mag.AMMO as PilotWep2Ammo,
			ASSETS.PILOTWEAPON2MAGCOUNT as PilotWep2Mags,
			wep3wep.DISPLAYNAME as PilotWep3,
			wep3mag.CALIBER as PilotWep3Caliber,
			wep3mag.AMMO as PilotWep3Ammo,
			ASSETS.PILOTWEAPON3MAGCOUNT as PilotWep3Mags
		FROM ASSETS
		left JOIN WEAPONS wep1wep ON ASSETS.PilotWEAPON1 = wep1wep.CLASSNAME
		left JOIN MAGAZINES wep1mag ON ASSETS.PilotWEAPON1MAG = wep1mag.CLASSNAME
		left JOIN WEAPONS wep2wep ON ASSETS.PilotWEAPON2 = wep2wep.CLASSNAME
		left JOIN MAGAZINES wep2mag ON ASSETS.PilotWEAPON2MAG = wep2mag.CLASSNAME
		left JOIN WEAPONS wep3wep ON ASSETS.PilotWEAPON3 = wep2wep.CLASSNAME
		left JOIN MAGAZINES wep3mag ON ASSETS.PilotWEAPON3MAG = wep2mag.CLASSNAME
		;";

	$status = $mysqli->stat;
	echo "$status";
	
	?>
	
	<h2>Air Assets<h2>

	<?php

	echo '<table border="0" cellspacing="2" cellpadding="2"> 
	<tr> 
		<td> <font face="Arial">displayname</font> </td> 
		<td> <font face="Arial">pilotseats</font> </td> 
		<td> <font face="Arial">pilotwep1</font> </td> 
		<td> <font face="Arial">pilotwep1caliber</font> </td> 
		<td> <font face="Arial">pilotwep1ammo</font> </td> 
		<td> <font face="Arial">pilotwep1mags</font> </td> 
		<td> <font face="Arial">pilotwep2</font> </td> 
		<td> <font face="Arial">pilotwep2caliber</font> </td> 
		<td> <font face="Arial">pilotwep2ammo</font> </td> 
		<td> <font face="Arial">pilotwep2mags</font> </td> 
		<td> <font face="Arial">pilotwep3</font> </td> 
		<td> <font face="Arial">pilotwep3caliber</font> </td> 
		<td> <font face="Arial">pilotwep3ammo</font> </td> 
		<td> <font face="Arial">pilotwep3mags</font> </td> 
	</tr>';

	if ($result = $mysqli->query($query, MYSQLI_USE_RESULT)) {
		while ($row = $result->fetch_assoc()) {
			$displayname = $row["displayname"];
			$pilotseats = $row["pilotseats"];
			$pilotwep1 = $row["pilotwep1"];
			$pilotwep1caliber = $row["pilotwep1caliber"];
			$pilotwep1ammo = $row["pilotwep1ammo"];
			$pilotwep1mags = $row["pilotwep1mags"];
			$pilotwep2 = $row["pilotwep2"];
			$pilotwep2caliber = $row["pilotwep2caliber"];
			$pilotwep2ammo = $row["pilotwep2ammo"];
			$pilotwep2mags = $row["pilotwep2mags"];
			$pilotwep3 = $row["pilotwep3"];
			$pilotwep3caliber = $row["pilotwep3caliber"];
			$pilotwep3ammo = $row["pilotwep3ammo"];
			$pilotwep3mags = $row["pilotwep3mags"];

			echo '<tr> 
				<td>' . $displayname . '</td> 
				<td>' . $pilotseats . '</td> 
				<td>' . $pilotwep1 . '</td> 
				<td>' . $pilotwep1caliber . '</td> 
				<td>' . $pilotwep1ammo . '</td> 
				<td>' . $pilotwep1mags . '</td> 
				<td>' . $pilotwep2 . '</td> 
				<td>' . $pilotwep2caliber . '</td> 
				<td>' . $pilotwep2ammo . '</td> 
				<td>' . $pilotwep2mags . '</td> 
				<td>' . $pilotwep3 . '</td> 
				<td>' . $pilotwep3caliber . '</td> 
				<td>' . $pilotwep3ammo . '</td> 
				<td>' . $pilotwep3mags . '</td> 
			</tr>';
			echo "</table>";
		}
		$result->free();
	}

	$mysqli->close();



	?>



</body>

</html>