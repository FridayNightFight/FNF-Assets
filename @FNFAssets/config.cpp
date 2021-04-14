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
			"FNF_OPF_2b14_w",
			"FNF_OPF_2b14_d",
			"FNF_OPF_2b14_wint",
			"FNF_IND_GUER_2b14",
			"FNF_BLU_AH1Z_W",
			"FNF_BLU_AH1Z_D",
			"FNF_BLU_MkVSOC_w",
			"FNF_BLU_MkVSOC_d",
			"FNF_BLU_SpeedboatMinigun_w",
			"FNF_BLU_SpeedboatMinigun_d",
			"FNF_OPF_SpeedboatHMG",
			"FNF_OPF_BRDM2_w",
			"FNF_OPF_BRDM2_d",
			"FNF_IND_BRDM2_cdf",
			"FNF_IND_BRDM2_guer",
			"FNF_OPF_BRDM2_HQ_w",
			"FNF_OPF_BRDM2_HQ_d",
			"FNF_IND_BRDM2_HQ_cdf",
			"FNF_IND_BRDM2_HQ_guer",
			"FNF_OPF_BRDM2UM_w",
			"FNF_OPF_BRDM2UM_d",
			"FNF_IND_BRDM2UM_cdf",
			"FNF_IND_BRDM2UM_guer",
			"FNF_OPF_btr80_msv_w",
			"FNF_OPF_btr80_msv_d",
			"FNF_IND_btr80_cdf",
			"FNF_OPF_btr70_msv_w",
			"FNF_OPF_btr70_msv_d",
			"FNF_IND_btr70_cdf",
			"FNF_OPF_btr60_msv_w",
			"FNF_OPF_btr60_msv_d",
			"FNF_IND_btr60_cdf",
			"FNF_BLU_CH47F_w",
			"FNF_BLU_CH47F_d",
			"FNF_OPF_GAZ_ARMED_o",
			"FNF_OPF_GAZ_ARMED_3tone",
			"FNF_BLU_AH6M_w",
			"FNF_BLU_AH6M_d",
			"FNF_BLU_M1117_w",
			"FNF_BLU_M1117_wint",
			"FNF_IND_M1117_o",
			"FNF_BLU_M113_M2_w",
			"FNF_BLU_M113_M2_d",
			"FNF_BLU_M113_M2_wint",
			"FNF_IND_M113_M2",
			"FNF_BLU_M113_M240_w",
			"FNF_BLU_M113_M240_d",
			"FNF_BLU_M113_M240_wint",
			"FNF_IND_M113_M240",
			"FNF_BLU_M113_w",
			"FNF_BLU_M113_d",
			"FNF_BLU_M113_wint",
			"FNF_IND_M113",
			"FNF_BLU_M252_w",
			"FNF_BLU_M252_d",
			"FNF_BLU_M252_USMC_w",
			"FNF_BLU_M252_USMC_d",
			"FNF_IND_CDF_M252",
			"FNF_IND_Mi24D",
			"FNF_OPF_Mi24P_gray",
			"FNF_OPF_Mi24P_w",
			"FNF_OPF_Mi24P_wint",
			"FNF_OPF_Mi24VT_gray",
			"FNF_OPF_Mi24VT_w",
			"FNF_OPF_Mi24VT_wint",
			"FNF_OPF_Mi8AMTSH_w",
			"FNF_OPF_Mi8AMTSH_gray",
			"FNF_IND_Mi8AMTSH_camo",
			"FNF_OPF_Mi8MTV3_gray",
			"FNF_OPF_Mi8MTV3_w",
			"FNF_OPF_Mi8AMT_gray",
			"FNF_OPF_Mi8AMT_w",
			"FNF_IND_Mi8AMT_camo",
			"FNF_OPF_Mi8MT_gray",
			"FNF_OPF_Mi8MT_w",
			"FNF_OPF_Mi8T_gray",
			"FNF_OPF_Mi8T_w",
			"FNF_IND_Offroad_M2_cdf",
			"FNF_IND_Offroad_M2_guer_w",
			"FNF_IND_Offroad_M2_guer_d",
			"FNF_IND_Offroad_cdf",
			"FNF_IND_Offroad_guer_w",
			"FNF_IND_Offroad_guer_d",
			"FNF_OPF_UAZ_DShKM_w",
			"FNF_IND_UAZ_DShKM_cdf",
			"FNF_IND_UAZ_DShKM_guer",
			"FNF_OPF_UAZ_w",
			"FNF_OPF_UAZ_d",
			"FNF_IND_UAZ_cdf",
			"FNF_IND_UAZ_guer",
			"FNF_OPF_UAZ_open_w",
			"FNF_OPF_UAZ_open_d",
			"FNF_IND_UAZ_open_cdf",
			"FNF_IND_UAZ_open_guer",
			"FNF_BLU_UH1Y_w",
			"FNF_BLU_UH1Y_d",
			"FNF_BLU_UH1Y_UNARMED_w",
			"FNF_BLU_UH1Y_UNARMED_d",
			"FNF_BLU_UH60M_w",
			"FNF_BLU_UH60M_d",
			"FNF_BLU_UH60M_UNARMED_w",
			"FNF_BLU_UH60M_UNARMED_d",
			"FNF_BLU_UH60M_ILLUM_w",
			"FNF_BLU_UH60M_ILLUM_d"
		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgEditorCategories //Replacement for Factions
{
	class FNFRUARMYWOOD // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Russian Army Woodland"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 0; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFRUARMYDES // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Russian Army Desert"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 0; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFRUARMYWINT// Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Russian Army Winter"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 0; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFRUNAVY // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - Russian Navy"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 0; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSARMYWOOD // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Army Woodland"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSARMYDES // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Army Desert"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSARMYWINT // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Army Winter"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSMCWOOD // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Marines Woodland"; // Name visible in the list
		priority = 1; //How far down it appears in the menu
		side = 1; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
	};
	class FNFUSMCDES // Faction name, please make it somewhat unique
	{
		displayName = " FNF Assets - US Marines Desert"; // Name visible in the list
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
		displayName = " FNF Assets - Guerilla Forces"; // Name visible in the list
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
	class Trucks
	{
		displayName = "Trucks";
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
	#include "Addons/2b14podnos.hpp"
	#include "Addons/ah1z.hpp"
	#include "Addons/boats.hpp"
	#include "Addons/brdm.hpp"
	#include "Addons/btr.hpp"
	#include "Addons/ch-47.hpp"
	#include "Addons/ch-53.hpp"
	#include "Addons/gaz.hpp"
	#include "Addons/ka-52.hpp"
	#include "Addons/hmmvbluarmy.hpp"
	#include "Addons/hmmvbluusmc.hpp"
	#include "Addons/littlebirds.hpp"
	#include "Addons/m113.hpp"
	#include "Addons/m1117.hpp"
	#include "Addons/m252.hpp"
	#include "Addons/md500.hpp"
	#include "Addons/Mi-8.hpp"
	#include "Addons/Mi-24.hpp"
	#include "Addons/offroad.hpp"
	#include "Addons/statics.hpp"
	#include "Addons/trucksbluarmy.hpp"
	#include "Addons/uaz.hpp"
	#include "Addons/uh-1y.hpp"
	#include "Addons/uh-60m.hpp"

};

class Extended_Init_EventHandlers
{
	#include "Addons/2b14podnosinit.hpp"
	#include "Addons/ah1zinit.hpp"
	#include "Addons/boatsinit.hpp"
	#include "Addons/brdminit.hpp"
	#include "Addons/btrinit.hpp"
	#include "Addons/ch-47init.hpp"
	#include "Addons/gazinit.hpp"
	#include "Addons/ka-52init.hpp"
	#include "Addons/hmmvbluarmyinit.hpp"
	#include "Addons/hmmvbluusmcinit.hpp"
	#include "Addons/littlebirdsinit.hpp"
	#include "Addons/m113init.hpp"
	#include "Addons/m252init.hpp"
	#include "Addons/m1117init.hpp"
	#include "Addons/Mi-8init.hpp"
	#include "Addons/Mi-24init.hpp"
	#include "Addons/offroadinit.hpp"
	#include "Addons/trucksbluarmyinit.hpp"
	#include "Addons/uazinit.hpp"
	#include "Addons/uh-1yinit.hpp"
	#include "Addons/uh-60minit.hpp"

};