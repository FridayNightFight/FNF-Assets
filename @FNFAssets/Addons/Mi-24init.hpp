

// Mi-24D

class FNF_IND_Mi24D
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { for ""_i"" from 1 to 6 do { (_this select 0) setPylonLoadout [_i, """"]; }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhs_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; for ""_i"" from 1 to 3 do { (_this select 0) removeMagazinesTurret [""rhs_mag_762x54mm_100"", [_i]]; for ""_y"" from 1 to 6 do { (_this select 0) addMagazineTurret [""rhs_mag_762x54mm_250"", [_i]]; }; }; (_this select 0) animateSource [""HIDE_weapon_holders"", 1, true]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};


// Mi-24P

class FNF_OPF_Mi24P_gray
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { for ""_i"" from 1 to 6 do { (_this select 0) setPylonLoadout [_i, """"]; }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhs_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; for ""_i"" from 1 to 3 do { (_this select 0) removeMagazinesTurret [""rhs_mag_762x54mm_100"", [_i]]; for ""_y"" from 1 to 6 do { (_this select 0) addMagazineTurret [""rhs_mag_762x54mm_250"", [_i]]; }; }; (_this select 0) animateSource [""HIDE_weapon_holders"", 1, true]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_OPF_Mi24P_camo
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { for ""_i"" from 1 to 6 do { (_this select 0) setPylonLoadout [_i, """"]; }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhs_weap_DIRCM_Lipa"",[-1]]; for ""_i"" from 1 to 9 do { (_this select 0) addMagazineTurret [""rhs_mag_DIRCM_Lipa"", [-1]]; }; (_this select 0) addWeaponTurret [""RHS_weap_gau19"", [-1]]; (_this select 0) addMagazineTurret [""rhsusf_mag_gau19_melb_right"", [-1]]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

// Mi-24VT

class FNF_OPF_Mi24VT_gray
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhs_weap_DIRCM_Lipa"",[-1]]; for ""_i"" from 1 to 9 do { (_this select 0) addMagazineTurret [""rhs_mag_DIRCM_Lipa"", [-1]]; }; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_OPF_Mi24VT_camo
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret [""rhs_weap_DIRCM_Lipa"",[-1]]; for ""_i"" from 1 to 9 do { (_this select 0) addMagazineTurret [""rhs_mag_DIRCM_Lipa"", [-1]]; }; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};



