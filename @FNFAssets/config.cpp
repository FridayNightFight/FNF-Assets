//Hope this helps you out :)
//Constructed by BroBeans and you are free to use this

class CfgPatches
{
	class FNFAssets
	{

		// Meta information for editor
		name = "FNF Assets";
		author = "FNF Staff Technical Team";
		url = "https://discord.gg/y4Rygfd";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "rhsgref_main","rhssaf_main", "rhsusf_main","rhs_main" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		unit[] = {
			"FNF_BLU_AH1Z",
			"FNF_OPF_Mi8MTV3_gray",
			"FNF_OPF_Mi8MTV3_camo",
			"FNF_OPF_Mi8AMT_gray",
			"FNF_OPF_Mi8AMT_camo",
			"FNF_IND_Mi8AMT_camo",
			"FNF_OPF_Mi8MT_gray",
			"FNF_OPF_Mi8MT_camo",
			"FNF_OPF_Mi8T_gray",
			"FNF_OPF_Mi8T_camo",
			"FNF_OPF_Mi8AMTSH_camo",
			"FNF_OPF_Mi8AMTSH_gray",
			"FNF_IND_Mi8AMTSH_camo",
			"FNF_IND_Mi24D",
			"FNF_OPF_Mi24P_gray",
			"FNF_OPF_Mi24P_camo",
			"FNF_OPF_Mi24VT_gray",
			"FNF_OPF_Mi24VT_camo"
		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgEditorCategories //Replacement for Factions
{
	class FNFRUARMY // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Russian Army"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 0; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFRUNAVY // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Russian Navy"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 0; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSARMY // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Army"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSMC // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Marines"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFCDF // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Chernarussian Movement"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 2; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFGUERILLA // Faction name, please make it somewhat unique
	{
		displayName = " FNF - Guerilla Forces"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 2; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
};


class CfgEditorSubcategories
{
	class HelicopterArmed
	{
		displayName = "Helicopters (Armed)";
	};
	class HelicopterTransport
	{
		displayName = "Helicopters (Unarmed)";
	};
	class CarsArmed
	{
		displayName = "Cars (Armed)";
	};
	class CarsUnarmed
	{
		displayName = "Cars (Unarmed)";
	};
	class IFV
	{
		displayName = "IFVs";
	};
	// EdSubcat_APCs
	// EdSubcat_AAs
	// EdSubcat_Boats
	// EdSubcat_Cars
	// EdSubcat_Planes
	// EdSubcat_Tanks
	// EdSubcat_Turrets
};

class CfgVehicles //Used for defining any vehicle/unit
{
	#include "Addons/ah1z.hpp"
	#include "Addons/brdm.hpp"
	#include "Addons/btr.hpp"
	#include "Addons/Mi-8.hpp"
	#include "Addons/md500.hpp"
	#include "Addons/Mi-24.hpp"
};

class Extended_Init_EventHandlers
{
	#include "Addons/ah1zinit.hpp"
	#include "Addons/btrinit.hpp"
	#include "Addons/Mi-8init.hpp"
	#include "Addons/Mi-24init.hpp"
};