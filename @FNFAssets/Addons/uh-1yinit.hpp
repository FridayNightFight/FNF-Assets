// UH-1Y (MG)

class FNF_BLU_UH1Y_w
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { (_this select 0) animateSource [""hide_CargoDoors"", 1, true]; (_this select 0) animateSource [""Hide_Scopes"", 1, true]; for ""_i"" from 1 to 2 do { (_this select 0) setPylonLoadout [ _i, """"]; }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; for ""_i"" from 1 to 2 do { { (_this select 0) removeMagazinesTurret [_x, [_i]]; } forEach ((_this select 0) magazinesTurret [_i]); (_this select 0) addWeaponTurret [format[""rhs_weap_m134_minigun_%1"",_i], [_i]]; (_this select 0) addMagazineTurret [""rhs_mag_762x51_m80a1_4000"", [_i], 2000]; }; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_BLU_UH1Y_d
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { (_this select 0) animateSource [""hide_CargoDoors"", 1, true]; (_this select 0) animateSource [""Hide_Scopes"", 1, true]; for ""_i"" from 1 to 2 do { (_this select 0) setPylonLoadout [ _i, """"]; }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; for ""_i"" from 1 to 2 do { { (_this select 0) removeMagazinesTurret [_x, [_i]]; } forEach ((_this select 0) magazinesTurret [_i]); (_this select 0) addWeaponTurret [format[""rhs_weap_m134_minigun_%1"",_i], [_i]]; (_this select 0) addMagazineTurret [""rhs_mag_762x51_m80a1_4000"", [_i], 2000]; }; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};


// UH-1Y (Unarmed)

class FNF_BLU_UH1Y_UNARMED_w
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_BLU_UH1Y_UNARMED_d
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};