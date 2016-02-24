/*
	Name: 160th SOR Mod Uniform
	Author: Scooby
	Date: 03/01/16
	cfgBackpacks.hpp
*/


	class tf_rt1523g_big_bwmod;
	class B_FieldPack_khk;


/////////////////////////
//Custom Packs NIZ//
/////////////////////////
//Custom Medic Pack	
	class SOR_Medic_Pack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ Medic";
		class TransportMagazines
		{
			mag_xx(rhs_mag_an_m8hc,8);
			mag_xx(rhs_mag_m18_green,4);
			mag_xx(ACE_HandFlare_Green,1);
		};		
		class TransportItems
		{
			item_xx(ACE_FieldDressing,30);
			item_xx(ACE_morphine,10);
			item_xx(ACE_epinephrine,10);
		};
	};

//Custom Parajumper Pack		
	class SOR_PJMedicPack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ Paramedic";
		class TransportMagazines
		{
			mag_xx(rhs_mag_an_m8hc,5);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(ACE_HandFlare_Green,1);
		};
		class TransportItems
		{
			item_xx(ACE_bloodIV_500,6);
			item_xx(ACE_FieldDressing,30);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);
			item_xx(rhsusf_acc_ACOG,1)			
		};		
	};	
		
//Custom m249 Pack		
	class SOR_M60_Pack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ M60";
		class TransportMagazines
		{
			mag_xx(hlc_100Rnd_762x51_B_M60E4,2);
		};
	};
	

//Repair Pack With Toolkit	
	class SOR_Repair_Pack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ Repair";
		class TransportItems
		{
			item_xx(Toolkit,1);
		};	
	};
	
//Custom Grenadier Pack	
	class SOR_GD_Pack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ GD";
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,10);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
			mag_xx(UGL_FlareWhite_F,3);
			mag_xx(UGL_FlareGreen_F,3);
			mag_xx(1Rnd_Smoke_Grenade_shell,5);
		};	
	};	
	
//Custom RTO Pack
class RTO_Pack_NIZ : tf_rt1523g_big_bwmod 
		{		
			scope = 1;
			displayName = "Pack NIZ RTO";
			class TransportMagazines
			{	
				mag_xx(1Rnd_SmokeRed_Grenade_shell,10)
				mag_xx(1Rnd_SmokeGreen_Grenade_shell,4)
				mag_xx(1Rnd_Smoke_Grenade_shell,4)
			};	
		};
		
//Custom Rifleman AT Pack	
	class SOR_RFLAT_Pack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ RFLAT";
		class TransportMagazines
		{
			mag_xx(hlc_100Rnd_762x51_B_M60E4,2)
		};
	};
		
//Custom Rifleman Pack
	class SOR_Rifleman_Pack_NIZ : B_FieldPack_khk
	{
		displayName = "Pack NIZ Rifleman";
		class TransportMagazines
		{
			mag_xx(hlc_100Rnd_762x51_B_M60E4,1);
		};
	};




	











