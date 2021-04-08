// Mk.V SOC

class FNF_BLU_MkVSOC_w
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret ['RHS_MKV_MK19', [3]]; (_this select 0) removeMagazinesTurret ['RHS_48Rnd_40mm_MK19_M430A1', [3]]; (_this select 0) addWeaponTurret ['RHS_MKV_M134', [3]]; for '_i' from 1 to 2 do { (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Red', [3]]; };";
	};
};

class FNF_BLU_MkVSOC_d
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret ['RHS_MKV_MK19', [3]]; (_this select 0) removeMagazinesTurret ['RHS_48Rnd_40mm_MK19_M430A1', [3]]; (_this select 0) addWeaponTurret ['RHS_MKV_M134', [3]]; for '_i' from 1 to 2 do { (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Red', [3]]; };";
	};
};


// Speedboat Minigun

class FNF_BLU_SpeedboatMinigun_w
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret ['GMG_40mm', [0]]; (_this select 0) removeMagazinesTurret ['96Rnd_40mm_G_belt', [0]]; (_this select 0) addWeaponTurret ['LMG_Minigun', [0]]; for '_i' from 1 to 2 do { (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Red', [0]]; }; (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Red', [1]];";
	};
};

class FNF_BLU_SpeedboatMinigun_d
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret ['GMG_40mm', [0]]; (_this select 0) removeMagazinesTurret ['96Rnd_40mm_G_belt', [0]]; (_this select 0) addWeaponTurret ['LMG_Minigun', [0]]; for '_i' from 1 to 2 do { (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Red', [0]]; }; (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Red', [1]];";
	};
};


// Speedboat HMG

class FNF_OPF_SpeedboatHMG
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret ['GMG_40mm', [0]]; (_this select 0) removeMagazinesTurret ['96Rnd_40mm_G_belt', [0]]; (_this select 0) addWeaponTurret ['LMG_Minigun', [0]]; for '_i' from 1 to 2 do { (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Green', [0]]; }; (_this select 0) addMagazineTurret ['2000Rnd_762x51_Belt_T_Green', [1]];";
	};
};