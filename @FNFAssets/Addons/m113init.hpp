// M113A3 (M2)

class FNF_BLU_M113_M2_w
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_BLU_M113_M2_d
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0), ['Desert',1], false] call BIS_fnc_initVehicle; (_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_BLU_M113_M2_wint
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0)] spawn {sleep 3; (_this select 0) setObjectTextureGlobal [0, '#(rgb,8,8,3)color(0.6,0.6,0.6,0.2)']; (_this select 0) setObjectTextureGlobal [1, '#(rgb,8,8,3)color(0.8,0.8,0.8,0.05)']; (_this select 0)  setObjectTextureGlobal [3, '#(rgb,8,8,3)color(0.6,0.6,0.6,0.3)']; (_this select 0) setObjectTextureGlobal [4, '#(rgb,8,8,3)color(0.3,0.3,0.3,0.3)']; (_this select 0) setObjectTextureGlobal [5, '#(rgb,8,8,3)color(0.3,0.3,0.3,0.5)'];}; (_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_IND_M113_M2
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0), ['Olive',1], false] call BIS_fnc_initVehicle; (_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};


// M113A3 (M240)

class FNF_BLU_M113_M240_w
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_BLU_M113_M240_d
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0), ['Desert',1], false] call BIS_fnc_initVehicle; (_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_BLU_M113_M240_wint
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0)] spawn {sleep 3; (_this select 0) setObjectTextureGlobal [0, '#(rgb,8,8,3)color(0.6,0.6,0.6,0.2)']; (_this select 0) setObjectTextureGlobal [1, '#(rgb,8,8,3)color(0.8,0.8,0.8,0.05)']; (_this select 0)  setObjectTextureGlobal [3, '#(rgb,8,8,3)color(0.6,0.6,0.6,0.3)']; (_this select 0) setObjectTextureGlobal [4, '#(rgb,8,8,3)color(0.3,0.3,0.3,0.3)']; (_this select 0) setObjectTextureGlobal [5, '#(rgb,8,8,3)color(0.3,0.3,0.3,0.5)'];}; (_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_IND_M113_M240
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0), ['Olive',1], false] call BIS_fnc_initVehicle; (_this select 0) animateSource ['Hide_Turret_Armor_Front',0]; (_this select 0) animateSource ['Hide_Turret_Armor_Side',0]; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};


// M113A3 (Unarmed)

class FNF_BLU_M113_w
{
	class LoadoutInit_eh
	{
		serverInit = "(_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_BLU_M113_d
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0), ['Desert',1], false] call BIS_fnc_initVehicle; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_BLU_M113_wint
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0)] spawn {sleep 3; (_this select 0) setObjectTextureGlobal [0, '#(rgb,8,8,3)color(0.6,0.6,0.6,0.2)']; (_this select 0) setObjectTextureGlobal [1, '#(rgb,8,8,3)color(0.8,0.8,0.8,0.05)']; (_this select 0)  setObjectTextureGlobal [3, '#(rgb,8,8,3)color(0.6,0.6,0.6,0.3)']; (_this select 0) setObjectTextureGlobal [4, '#(rgb,8,8,3)color(0.3,0.3,0.3,0.3)']; (_this select 0) setObjectTextureGlobal [5, '#(rgb,8,8,3)color(0.3,0.3,0.3,0.5)'];}; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};

class FNF_IND_M113
{
	class LoadoutInit_eh
	{
		serverInit = "[(_this select 0), ['Olive',1], false] call BIS_fnc_initVehicle; (_this select 0) animateSource ['IFF_Panels_Hide',1];";
	};
};
