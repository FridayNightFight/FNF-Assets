// UH-60M

class FNF_BLU_UH60M_w
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { (_this select 0) animateSource [""Hide_Scopes"", 1, true];};";
	};
};

class FNF_BLU_UH60M_d
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { (_this select 0) animateSource [""Hide_Scopes"", 1, true];};";
	};
};


// UH-60M (Unarmed)

class FNF_BLU_UH60M_UNARMED_w
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_BLU_UH60M_UNARMED_d
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};


// UH-60M (ILLUM)

class FNF_BLU_UH60M_ILLUM_w
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; (_this select 0) setPylonLoadout [1, ""rhs_mag_M257_7"", true, [-1]]; (_this select 0) setPylonLoadout [2, ""rhs_mag_M257_7"", true, [-1]];clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_BLU_UH60M_ILLUM_d
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""60Rnd_CMFlareMagazine"", [-1]]; (_this select 0) setPylonLoadout [1, ""rhs_mag_M257_7"", true, [-1]]; (_this select 0) setPylonLoadout [2, ""rhs_mag_M257_7"", true, [-1]];clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};