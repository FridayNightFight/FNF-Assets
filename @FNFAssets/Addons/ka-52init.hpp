// Ka-52

class FNF_OPF_Ka52_w
{
	class LoadoutInit_eh
	{
		serverInit = "for '_i' from 1 to 4 do { (_this select 0) setPylonLoadout [_i, ''] }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); { (_this select 0) removeWeaponTurret [_x, [0]]; } forEach ((_this select 0) weaponsTurret [0]); { (_this select 0) removeMagazinesTurret [_x, [0]]; } forEach ((_this select 0) magazinesTurret [0]); (_this select 0) addWeaponTurret ['rhs_weap_CMFlareLauncher',[-1]]; (_this select 0) addMagazineTurret ['60Rnd_CMFlareMagazine', [-1]]; (_this select 0) addWeaponTurret ['RHS_weap_gau19',[0]]; (_this select 0) addMagazineTurret ['rhsusf_mag_gau19_melb_left', [0], 750]; (_this select 0) enableVehicleSensor ['ActiveRadarSensorComponent',false];";
	};
};

class FNF_OPF_Ka52_gray
{
	class LoadoutInit_eh
	{
		serverInit = "for '_i' from 1 to 4 do { (_this select 0) setPylonLoadout [_i, ''] }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); { (_this select 0) removeWeaponTurret [_x, [0]]; } forEach ((_this select 0) weaponsTurret [0]); { (_this select 0) removeMagazinesTurret [_x, [0]]; } forEach ((_this select 0) magazinesTurret [0]); (_this select 0) addWeaponTurret ['rhs_weap_CMFlareLauncher',[-1]]; (_this select 0) addMagazineTurret ['60Rnd_CMFlareMagazine', [-1]]; (_this select 0) addWeaponTurret ['RHS_weap_gau19',[0]]; (_this select 0) removeMagazineTurret ['rhsusf_mag_gau19_melb_left', [0]]; (_this select 0) addMagazineTurret ['rhsusf_mag_gau19_melb_left', [0], 750]; (_this select 0) enableVehicleSensor ['ActiveRadarSensorComponent',false];";
	};
};