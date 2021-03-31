
class RHS_AH1Z;

class FNF_BLU_AH1Z : RHS_AH1Z
{
	editorCategory = "FNFUSMC";
	editorSubcategory = "HelicopterArmed";
	side = 1;
	displayName = "AH-1Z Cobra"; //Ingame name
	class TransportItems {}; //Cargo Items
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
	typicalCargo[] = {};
	/* class Components
	{
		class TransportPylonsComponent
		{
			class pylons
			{
				class pylonTip1 {};
				class pylon2 {};
				class pylon3 {};
				class pylon4 {};
				class pylon5 {};
				class pylonTip6 {};
			};
		};
	}; */
};
/* 
class FNF_BLU_AH1Z : FNF_BLU_AH1Z_base
{
	class Components : Components
	{
		class TransportPylonsComponent : TransportPylonsComponent
		{
			class pylons : pylons
			{
				class pylonTip1 : pylonTip1
				{
					attachment = "FakeMagazine";
				};
				class pylon2 : pylon2
				{
					attachment = "FakeMagazine";
				};
				class pylon3 : pylon3
				{
					attachment = "FakeMagazine";
				};
				class pylon4 : pylon4
				{
					attachment = "FakeMagazine";
				};
				class pylon5 : pylon5
				{
					attachment = "FakeMagazine";
				};
				class pylonTip6 : pylonTip6
				{
					attachment = "FakeMagazine";
				};
			};
		};
	};
};
 */

// find pylon properties
// _pylon_path = configProperties [configFile >> "CfgVehicles" >> "RHS_AH1Z" >> "Components" >> "TransportPylonsComponent" >> "Pylons", "isClass _x"]; 
// _pylons = createHashMap;
// _pylonsSettingsValues = [];
// {
// 	_pylon = configName _x;
// 	_pylons set [_pylon, []];
// 	_pylonSettings = configProperties [_x];
// 	{
// 		_data = _x call BIS_fnc_getCfgData;
// 		// _pylonsSettingsValues pushBack [_pylon, configName _x, _data];
// 		_props = _pylons get _pylon;
// 		_props pushBack format['%1 = %2', configName _x, _data];
// 		_pylons set [_pylon, _props];
// 	} forEach _pylonSettings
// } forEach _pylon_path; 

// _pylonsText = [];
// {
// 	_pylonsText pushBack _x;
// 	_pylonsText pushBack (_y joinString "\n");
// } forEach _pylons;
// copyToClipboard _pylonsText;