class rhsgref_cdf_Mi24D;
class RHS_Mi24P_vvs;
class RHS_Mi24P_vvsc;
class RHS_Mi24Vt_vvs;
class RHS_Mi24Vt_vvsc;

// Mi-24D

class FNF_IND_Mi24D : rhsgref_cdf_Mi24D
{
	editorCategory = "FNFCDF";
	editorSubcategory = "HelicopterArmed";
	side = 2;
	displayName = "Mi-24D"; //Ingame name
	class TransportItems {}; //Cargo Items
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
	typicalCargo[] = {};
};


// Mi-24P

class FNF_OPF_Mi24P_gray : RHS_Mi24P_vvs
{
	editorCategory = "FNFRUNAVY";
	editorSubcategory = "HelicopterArmed";
	side = 0;
	displayName = "Mi-24P (Gray)"; //Ingame name
	class TransportItems {}; //Cargo Items
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
	typicalCargo[] = {};
};

class FNF_OPF_Mi24P_camo : RHS_Mi24P_vvsc
{
	editorCategory = "FNFRUARMY";
	editorSubcategory = "HelicopterArmed";
	side = 0;
	displayName = "Mi-24P (Camo)"; //Ingame name
	class TransportItems {}; //Cargo Items
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
	typicalCargo[] = {};
};


// Mi-24VT

class FNF_OPF_Mi24VT_gray : RHS_Mi24Vt_vvs
{
	editorCategory = "FNFRUNAVY";
	editorSubcategory = "HelicopterArmed";
	side = 0;
	displayName = "Mi-24VT (Gray)"; //Ingame name
	class TransportItems {}; //Cargo Items
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
	typicalCargo[] = {};
};

class FNF_OPF_Mi24VT_camo : RHS_Mi24Vt_vvsc
{
	editorCategory = "FNFRUARMY";
	editorSubcategory = "HelicopterArmed";
	side = 0;
	displayName = "Mi-24VT (Camo)"; //Ingame name
	class TransportItems {}; //Cargo Items
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
	typicalCargo[] = {};
};