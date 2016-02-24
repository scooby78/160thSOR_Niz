/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/09/15 02:05
	Description: cfgCrates.hpp
*/

	class Gunrack1;
	class ACE_medicalSupplyCrate;
	class Box_NATO_Ammo_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Grenades_F;
	class B_supplyCrate_F;
	class Box_NATO_Support_F;	
	class Land_MetalCase_01_large_F;
	class Box_NATO_WpsSpecial_F;

	
/////////////////
//Static stores//
/////////////////

//Special weapons boxes//
	class SOR_Gunrack1_NIZ : Gunrack1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gun Rack [Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems{};		
		class TransportWeapons
		{
		
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_Box_NATO_WpsSpecial_F_NIZ : Box_NATO_WpsSpecial_F
	{
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems{};		
		class TransportWeapons
		{
		
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	

//PJ medical supply box//	
		class SOR_PJ_Box_F_NIZ : Land_MetalCase_01_large_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Box PJ Medical[Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;

		class TransportItems
		{
			item_xx(ACE_FieldDressing,40);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);			
			item_xx(ACE_bloodIV_500,10);				
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_PJMedicPack_NIZ,3)
		};
	};


///////////////////////
//Hand Liftable Boxes//
///////////////////////

// Ammo Box	
	class SOR_A_Box_F_NIZ : Box_NATO_Ammo_F
	{
		displayName = "Box [Ammo]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(RH_30Rnd_556x45_M855A1,40)
			mag_xx(rhsusf_mag_7x45acp_MHP,10)
			mag_xx(hlc_100Rnd_762x51_B_M60E4,6)
		};
		class TransportBackpacks{};
	};	

	
// Medical Box 
	class SOR_M_Box_F_NIZ : ACE_medicalSupplyCrate
	{
		displayName = "Box [Medical]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;

		class TransportItems
		{
			item_xx(ACE_FieldDressing,40);
			item_xx(ACE_morphine,18);
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_NIZ,1)
		};
	};
	
	
// Grenades Box	
	class SOR_G_Box_F_NIZ : Box_NATO_Grenades_F
	{
		displayName = "Box [Grenades]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;		
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(rhs_weap_rpg26,4)
		};
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,20)
			mag_xx(1Rnd_Smoke_Grenade_shell,10)			
			mag_xx(1Rnd_SmokeRed_Grenade_shell,10)			
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)			
		};
		class TransportBackpacks{};
	};	
	
	
// Support Equipment Box	
	class SOR_S_Box_F_NIZ : Box_NATO_Support_F
	{
		displayName = "Box [Equipment]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems
		{
			item_xx(ACE_CableTie,10)
			item_xx(Toolkit,2)
			item_xx(ACE_EarPlugs,10)
			item_xx(ACE_Flashlight_MX991,20)
			item_xx(ACE_RangeCard,3)
			item_xx(RH_Saker762_wdl,10)
			item_xx(RH_qdss_nt4_wdl,20)
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};	
	

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// Ammo Crate		
	class SOR_A_Crate_F_NIZ : B_supplyCrate_F
	{
		displayName = "Crate [Ammo]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(rhs_weap_rpg26,4)
		};
		class TransportMagazines
		{
			mag_xx(RH_30Rnd_556x45_M855A1,100)
			mag_xx(rhsusf_mag_7x45acp_MHP,40)
			mag_xx(hlc_100Rnd_762x51_B_M60E4,16)		
			mag_xx(1Rnd_HE_Grenade_shell,10)
			mag_xx(1Rnd_Smoke_Grenade_shell,10)			
			mag_xx(1Rnd_SmokeRed_Grenade_shell,10)	
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)
		};
		class TransportBackpacks{};
	};
	
// All in one Crate		
	class SOR_AM_Crate_F_NIZ : B_supplyCrate_F
	{
		displayName = "Crate [Ammo&Med]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems
		{
			item_xx(ACE_CableTie,5)
			item_xx(ACE_FieldDressing,90);
			item_xx(ACE_morphine,50);
		};		
		class TransportWeapons
		{
			weap_xx(rhs_weap_rpg26,4)
		};
		class TransportMagazines
		{
			mag_xx(RH_30Rnd_556x45_M855A1,80)
			mag_xx(rhsusf_mag_7x45acp_MHP,40)
			mag_xx(hlc_100Rnd_762x51_B_M60E4,16)		
			mag_xx(1Rnd_HE_Grenade_shell,10)
			mag_xx(1Rnd_Smoke_Grenade_shell,10)			
			mag_xx(1Rnd_SmokeRed_Grenade_shell,10)	
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_NIZ,3)
		};
	};
	
// HGM Crate	
	class SOR_HMG_Crate_F_NIZ : B_supplyCrate_F
	{
		displayName = "Crate [HMG]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(RHS_M2_MiniTripod_Bag,2)
			pack_xx(RHS_M2_Gun_Bag,2)
		};
	};
	
// Mortar Crate	
	class SOR_MOR_Crate_F_NIZ : B_supplyCrate_F
	{
		displayName = "Crate [MORTAR]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(B_Mortar_01_weapon_F,2)
			pack_xx(B_Mortar_01_support_F,2)
		};
	};

