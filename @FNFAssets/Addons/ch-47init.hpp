// CH-47F

class FNF_BLU_CH47F_w
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""120Rnd_CMFlareMagazine"", [-1]]; (_this select 0) animateSource [""Hide_Scopes"", 1, true]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};

class FNF_BLU_CH47F_d
{
	class LoadoutInit_eh
	{
		init = "if (isServer) then { { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); (_this select 0) addWeaponTurret [""rhsusf_weap_CMFlareLauncher"",[-1]]; (_this select 0) addMagazineTurret [""120Rnd_CMFlareMagazine"", [-1]]; (_this select 0) animateSource [""Hide_Scopes"", 1, true]; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); };";
	};
};