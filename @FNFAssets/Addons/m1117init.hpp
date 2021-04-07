class FNF_BLU_M1117_w
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret [""RHS_MK19"", [0]]; (_this select 0) removeMagazinesTurret [""RHS_96Rnd_40mm_MK19_M430A1"", [0]]; (_this select 0) removeMagazinesTurret [""RHS_96Rnd_40mm_MK19_M1001"", [0]]; (_this select 0) addWeaponTurret [""rhs_weap_m240_m113"", [0]]; for ""_i"" from 1 to 7 do { (_this select 0) addMagazineTurret [""rhs_mag_762x51_M240_200"", [0]]; }; (_this select 0) removeMagazinesTurret [""rhs_mag_200rnd_127x99_mag_Tracer_Red"", [0]]; for ""_i"" from 1 to 5 do { (_this select 0) addMagazineTurret [""rhs_mag_100rnd_127x99_mag_Tracer_Red"", [0]]; }; (_this select 0) animateSource [""DUKE_Hide"", 1, true];";
	};
};

class FNF_BLU_M1117_wint
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0)] spawn {sleep 3; (_this select 0) setObjectTextureGlobal [0, ""#(rgb,8,8,3)color(0.6,0.6,0.6,0.15)""]; (_this select 0) setObjectTextureGlobal [1, ""#(rgb,8,8,3)color(0.8,0.8,0.8,0.2)""]; (_this select 0) setObjectTextureGlobal [2, ""#(rgb,8,8,3)color(0.8,0.8,0.8,0.3)""]; (_this select 0) setObjectTextureGlobal [3, ""#(rgb,8,8,3)color(0.3,0.3,0.3,0.1)""]; (_this select 0) setObjectTextureGlobal [4, ""#(rgb,8,8,3)color(0.3,0.3,0.3,0.05)""];}; (_this select 0) removeWeaponTurret [""RHS_MK19"", [0]]; (_this select 0) removeMagazinesTurret [""RHS_96Rnd_40mm_MK19_M430A1"", [0]]; (_this select 0) removeMagazinesTurret [""RHS_96Rnd_40mm_MK19_M1001"", [0]]; (_this select 0) addWeaponTurret [""rhs_weap_m240_m113"", [0]]; for ""_i"" from 1 to 7 do { (_this select 0) addMagazineTurret [""rhs_mag_762x51_M240_200"", [0]]; }; (_this select 0) removeMagazinesTurret [""rhs_mag_200rnd_127x99_mag_Tracer_Red"", [0]]; for ""_i"" from 1 to 5 do { (_this select 0) addMagazineTurret [""rhs_mag_100rnd_127x99_mag_Tracer_Red"", [0]]; }; clearWeaponCargo (_this select 0); clearItemCargo (_this select 0); clearMagazineCargo (_this select 0); clearBackpackCargo (_this select 0); (_this select 0) animateSource [""DUKE_Hide"", 1, true];";
	};
};

class FNF_IND_M1117_o
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) removeWeaponTurret [""RHS_MK19"", [0]]; (_this select 0) removeMagazinesTurret [""RHS_96Rnd_40mm_MK19_M430A1"", [0]]; (_this select 0) removeMagazinesTurret [""RHS_96Rnd_40mm_MK19_M1001"", [0]]; (_this select 0) addWeaponTurret [""rhs_weap_m240_m113"", [0]]; for ""_i"" from 1 to 7 do { (_this select 0) addMagazineTurret [""rhs_mag_762x51_M240_200"", [0]]; }; (_this select 0) removeMagazinesTurret [""rhs_mag_200rnd_127x99_mag_Tracer_Red"", [0]]; for ""_i"" from 1 to 5 do { (_this select 0) addMagazineTurret [""rhs_mag_100rnd_127x99_mag_Tracer_Red"", [0]]; }; (_this select 0) animateSource [""DUKE_Hide"", 1, true];";
	};
};