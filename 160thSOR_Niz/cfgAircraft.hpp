/*
	Name: 160th SOR Mod
	Author: Darce
	Date: 08/10/15 
	Description: cfgAircraft.hpp
*/

	class UH1H_LMG;
	class UH1H_Medevac;
	class UH1H_Gunship;
	class Cobra3;

// Transport Helos	
	class SOR_UH1H_LMG : UH1H_LMG
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-1H LMG (C2/P12)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;	
		crew = "SOR_HeliPilot_NIZ";		
		class TransportItems 
		{
			item_xx(ToolKit,1)
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_rsp30_green,2)		
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};
	
	class SOR_UH1H_Medevac : UH1H_Medevac
	{
		faction = SOR_Faction_NIZ;
		vehicleClass = "SOR_Aircraft";
		displayName = "UH-1H MEV (C2/P7)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;		
		driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
		ejectDeadCargo = 1; //test dead eject
		crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
		getInRadius = 3;
		crew = "SOR_MEVPilot_NIZ";
		class TransportItems
		{
			item_xx(ACE_Fielddressing,24)
			item_xx(ACE_morphine,16)
			item_xx(ACE_epinephrine,16)
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
			item_xx(ToolKit,1)
		};		
		class TransportWeapons
		{
			weap_xx(rhs_weap_rsp30_green,2)		
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};
	
// Attack Helos	
	class SOR_UH1H_Gunship : UH1H_Gunship
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-1H Gunship (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		crew = "SOR_HeliPilot_NIZ";	
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,10);
			item_xx(ACE_morphine,4);			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_rsp30_green,2)		
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	
	class SOR_Cobra3 : Cobra3
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Aircraft";
		fuelCapacity = 200; //was 500 
		fuelConsumptionRate = 0.0555; //was 0.0368;
		crew = "SOR_HeliPilot_NIZ";	
	};	