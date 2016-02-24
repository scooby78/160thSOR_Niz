/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 12/11/15 
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

	class rhsusf_m113_usarmy;

//M11A3 Armor 500	
	class SOR_rhsusf_m113_usarmy_NIZ : rhsusf_m113_usarmy
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);
			item_xx(ACE_Track,2)
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_rpg26,2)
			weap_xx(RH_M16A1,2)
		};
		class TransportMagazines
		{
			mag_xx(RH_30Rnd_556x45_M855A1,20)
			mag_xx(hlc_100Rnd_762x51_T_M60E4,2)
		};
		class TransportBackpacks{};
	};	