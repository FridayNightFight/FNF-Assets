// AH-6M

class FNF_BLU_AH6M_w
{
	class LoadoutInit_eh
	{
		serverInit = "for ""_i"" from 1 to 4 do { (_this select 0) setPylonLoadout [_i, """"] }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) setPylonLoadout [2, ""rhs_mag_m134_pylon_3000"", true, [-1]]; (_this select 0) setPylonLoadout [4, ""rhsusf_mag_gau19_melb_right"", true, [-1]]; (_this select 0) setAmmoOnPylon [4, 800]; (_this select 0) addWeaponTurret [""rhs_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]];";
	};
};

class FNF_BLU_AH6M_d
{
	class LoadoutInit_eh
	{
		serverInit = "for ""_i"" from 1 to 4 do { (_this select 0) setPylonLoadout [_i, """"] }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) setPylonLoadout [2, ""rhs_mag_m134_pylon_3000"", true, [-1]]; (_this select 0) setPylonLoadout [4, ""rhsusf_mag_gau19_melb_right"", true, [-1]]; (_this select 0) setAmmoOnPylon [4, 800]; (_this select 0) addWeaponTurret [""rhs_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]];";
	};
};