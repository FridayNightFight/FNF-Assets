for '_i' from 1 to 4 do { (_this select 0) setPylonLoadout [_i, ''] }; { (_this select 0) removeWeaponTurret [_x, [-1]]; } forEach ((_this select 0) weaponsTurret [-1]); { (_this select 0) removeMagazinesTurret [_x, [-1]]; } forEach ((_this select 0) magazinesTurret [-1]); (_this select 0) addWeaponTurret ['rhs_weap_CMFlareLauncher',[-1]]; (_this select 0) addMagazineTurret ['60Rnd_CMFlareMagazine', [-1]]; (_this select 0) addWeaponTurret ['RHS_weap_gau19',[0]]; (_this select 0) addMagazineTurret ['rhsusf_mag_gau19_melb_left', [0],750]; (_this select 0) enableVehicleSensor ['ActiveRadarSensorComponent',false];


'https://steamcommunity.com/workshop/filedetails/?id=680808574'

// if (this && count (thisList select {_x isKindOf "Helicopter" && !(isEngineOn _x)}) != 0) then {
// 	true
// };

if (count (("RaceTask" call BIS_fnc_taskChildren) select {
    !(_x call BIS_fnc_taskCompleted);
}) > 1) then {
_obj setVariable ["raceFinished", false, true];
}