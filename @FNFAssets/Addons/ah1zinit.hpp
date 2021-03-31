class FNF_BLU_AH1Z
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { for ""_i"" from 1 to 6 do { (_this select 0) setPylonLoadout [_i, """"]; }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; { (_this select 0) removeWeaponTurret [_x, [0]]; } forEach ((_this select 0) weaponsTurret [0]); { (_this select 0) removeMagazinesTurret [_x, [0]]; } forEach ((_this select 0) magazinesTurret [0]); (_this select 0) addWeaponTurret [""RHS_weap_m134_pylon"", [0]]; (_this select 0) addMagazineTurret [""rhs_mag_m134_pylon_3000"", [0]]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};