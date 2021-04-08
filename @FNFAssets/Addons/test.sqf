this animateSource ['hide_ogpkover', 0, true]; this animateSource ['hide_ogpknet', 0, true]; this animateSource ['hide_ogpkbust', 0, true];



call BIS_fnc_diagAARrecord;
_disp = findDisplay 46;
_aardisp = _disp createDisplay "DefaultDialog";
["Init", [_aardisp]] call BIS_fnc_diagAAR;