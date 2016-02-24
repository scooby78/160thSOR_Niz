//////////////////////		
//Base Soldier Class//
//////////////////////
	
	class B_Soldier_base_F;
	class B_Soldier_TL_F;
	class B_sniper_F;
	class B_spotter_F;
	class B_medic_F;
	class B_officer_F;
	class B_soldier_AR_F;
	class B_Soldier_GL_F;
	class B_Soldier_F;
	class B_soldier_AT_F;
	class B_Pilot_F;
	class B_crew_F;
	class B_recon_TL_F;



/////////////////////////		    
//SOR Niz Faction Units//
/////////////////////////

//Squad Actual	
	class SOR_Actual_NIZ : B_officer_F
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "Squad Actual";
		accuracy = 3.5;
		backpack = "tf_rt1523g_big_bwmod";
		weapons[] = {"RH_M16A1", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put", "Binocular"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};
		linkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 			
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 
			Standard_Equipment
		};
	};

//Commander		
class SOR_Commander_NIZ : B_officer_F

	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "Commander";
		accuracy = 3.5;
		backpack = "tf_rt1523g_big_bwmod";
		weapons[] = {"RH_M16A1", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put", "Binocular"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};
		linkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 			
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26",			
			Standard_Equipment
		};
	};
	
//Mechanised Commander 
class SOR_MechCommand_NIZ : SOR_Commander_NIZ
	
	{
		vehicleclass = "SOR_Infantry_MECH";
		displayName = "Mechanised Commander";
		uniformClass = "rhs_uniform_FROG01_m81";
		linkedItems[] = 
		{	
			"V_Rangemaster_belt",
			"rhs_tsh4_ess",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"V_Rangemaster_belt", 
			"rhs_tsh4_ess",			
			Standard_Equipment
		};
	};	
	
//Air Commander 
class SOR_AirCommand_NIZ : SOR_Commander_NIZ
	
	{
		vehicleclass = "SOR_Infantry_AIR";
		uavHacker = 1; // allows UAV control
		engineer = 1; // allows unit to repair 
		linkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_Cap_headphones",
			"G_Aviator",			
			Airborne_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"rhsusf_iotv_ocp_Rifleman", 
			"H_Cap_headphones",
			"G_Aviator",			
			Airborne_Equipment
		};
	};	

//Platoon RTO
class SOR_RTO_NIZ : B_Soldier_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "RTO";
		backpack = "RTO_Pack_NIZ";
		weapons[] = {"RH_M16A1gl","Throw","Put","rhs_weap_rsp30_green", "Binocular"};
		respawnWeapons[] = {"RH_M16A1gl","Throw","Put","rhs_weap_rsp30_green", "Binocular"};
		Items[] = {Standard_Meds,SL_Equip};
        RespawnItems[] = {Standard_Meds,SL_Equip};
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};
		linkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 
			Standard_Equipment
		};
	};
	
//Teamleader	
	class SOR_Teamleader_NIZ : B_Soldier_TL_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		accuracy = 3.5;		
	    backpack = "";
		weapons[] = {"RH_M16A1", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put", "Binocular"};
		Items[] = {Standard_Meds,SL_Equip};
        RespawnItems[] = {Standard_Meds,SL_Equip};
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};
		linkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m",
			"rhs_6b26", 
			Standard_Equipment
		};		
	};

//Combat Medics
class SOR_Medic_NIZ : B_medic_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		displayName = "Combat Medic";
		uniformClass = "rhs_uniform_FROG01_m81";
		backpack = "SOR_Medic_Pack_NIZ";
		weapons[] = {"RH_M16A1", "Throw", "Put",};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put",};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};	
		linkedItems[] = 
		{	
			"V_HarnessO_brn",
			"rhs_6b26",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"V_HarnessO_brn",
			"rhs_6b26",
			Standard_Equipment
		};
	};


class SOR_M60AR_NIZ : B_soldier_AR_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "AutoRifleman M60";
		backpack = "SOR_M60_Pack_NIZ";
		weapons[] = {"hlc_lmg_m60", "Throw", "Put"};
		respawnWeapons[] = {"hlc_lmg_m60", "Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};		
		magazines[] =
		{
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"ACE_HandFlare_Green",
			"ACE_HandFlare_Green",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"hlc_100Rnd_762x51_B_M60E4"
		};
		respawnMagazines[] =
		{
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"ACE_HandFlare_Green",
			"ACE_HandFlare_Green",
			"rhs_mag_m18_green",
			"rhs_mag_m18_green",
			"hlc_100Rnd_762x51_B_M60E4"
		};
		linkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
	};

class SOR_Grenadier_NIZ : B_Soldier_GL_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		backpack = "SOR_GD_Pack_NIZ";
		weapons[] = {"RH_M16A1gl", "Throw", "Put"};
		respawnWeapons[] = {"RH_M16A1gl", "Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};
		linkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
	};

class SOR_Rifleman_NIZ : B_Soldier_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		backpack = "SOR_Rifleman_Pack_NIZ";
		weapons[] = {"RH_M16A1", "Throw", "Put",};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put",};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};		
		linkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
	};					

class SOR_RiflemanAT_NIZ : B_soldier_AT_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "Rifleman AT";
		backpack = "SOR_M60_Pack_NIZ";		
		weapons[] = {"RH_M16A1", "rhs_weap_rpg26", "Throw", "Put"};
		respawnWeapons[] = {"RH_M16A1", "rhs_weap_rpg26","Throw", "Put"};
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
		magazines[] = {Standard_Mags};
		respawnMagazines[] = {Standard_Mags};
		linkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_vydra_3m" ,
			"rhs_6b26",
			Standard_Equipment
		};
	};				
		
//Heli Pilots
class SOR_HeliPilot_NIZ : B_Pilot_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_AIR";
		uniformClass = "rhs_uniform_FROG01_m81";
		engineer = 1; // allows unit to repair 
		displayName = "Heli Pilot";
		backpack = "";		
		weapons[] = {"rhsusf_weap_m1911a1", "Throw", "Put",};
		respawnWeapons[] = {"rhsusf_weap_m1911a1", "Throw", "Put",};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = {Std_m1911a1};
		respawnMagazines[] = {Std_m1911a1};	
		linkedItems[] = 
		{	
			"H_Cap_headphones",
			"G_Aviator",			
			Airborne_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"H_Cap_headphones",
			"G_Aviator",			
			Airborne_Equipment
		};
	};

//Heli Crew Engineers
class SOR_HeliCrew_NIZ : B_crew_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_AIR";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "Heli Crew";
		backpack = "SOR_Repair_Pack_NIZ";
		engineer = 1; // allows unit to repair 
		weapons[] = {"rhsusf_weap_m1911a1", "Throw", "Put",};
		respawnWeapons[] = {"rhsusf_weap_m1911a1", "Throw", "Put",};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = {Std_m1911a1};
		respawnMagazines[] = {Std_m1911a1};	
		linkedItems[] = 
		{	
			"H_Cap_headphones", 			
			Airborne_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"H_Cap_headphones",
			Airborne_Equipment
		};
	};

//Jet Pilots
class SOR_JetPilot_NIZ : B_Pilot_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_AIR";
		displayName = "Jet Pilot";		
		backpack = "ACE_NonSteerableParachute";
		engineer = 1; // allows unit to repair 
		weapons[] = {"rhsusf_weap_m1911a1","Throw", "Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw", "Put"};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = {Std_m1911a1};
		respawnMagazines[] = {Std_m1911a1};	
		linkedItems[] = 
		{	
			"rhs_zsh7a",
			"G_Aviator",			
			Airborne_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"rhs_zsh7a",
			"G_Aviator",			
			Airborne_Equipment
		};
	};
	
// MEV Pilot & CO-Pilot
class SOR_MEVPilot_NIZ : SOR_HeliPilot_NIZ

	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_AIR";
		displayName = "MEV Pilot";
		linkedItems[] = 
		{	
			"H_Cap_headphones",
			"G_Aviator",
			Airborne_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"H_Cap_headphones",
			"G_Aviator",			
			Airborne_Equipment
		};   
	};
	
class SOR_ParaJumper_NIZ : B_medic_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_AIR";
		displayName = "Para Jumper";
		backpack = "SOR_PJMedicPack_NIZ";
		uniformClass = "rhs_uniform_FROG01_m81";
		weapons[] = {"RH_M16A1", "Throw", "Put",};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put",};
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
		magazines[] = {Std_m1911a1};
		respawnMagazines[] = {Std_m1911a1};	
		linkedItems[] = 
		{	
			"V_HarnessO_brn",
			"rhs_6b26",
			Airborne_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"V_HarnessO_brn",
			"rhs_6b26",
			Airborne_Equipment
		};
	};

//Recon Units
	class SOR_ReconLeader_NIZ : B_recon_TL_F	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_Recon";
		uniformClass = "rhs_uniform_FROG01_m81";
		displayName = "Recon Lead";
		accuracy = 3.5;
//		cost = 500000;
//		camouflage = 0.6;
//		threat[] = {1.2,0.2,0.2};
		weapons[] = {"160_RH_m4_wdl", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"160_RH_m4_wdl", "Throw", "Put", "Binocular"};
		Items[] = 		
		{
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] = 	
		{
			Recon_Mags
		};						
		respawnMagazines[] =
		{
			Recon_Mags
		};						
		linkedItems[] = 
		{	
			"V_BandollierB_khk", 
			"rhs_Booniehat_m81", 
			Recon_Equipment
		};              
        respawnLinkedItems[] = 
		{	
			"V_BandollierB_khk", 
			"rhs_Booniehat_m81", 
			Recon_Equipment
		};			
	};

	class SOR_ReconJTAC_NIZ : SOR_ReconLeader_NIZ	
	{
		icon =  "iconMan";
		backpack = "tf_rt1523g_big_bwmod";
		displayName = "Recon JTAC";		
	};

	class SOR_ReconRifleman_NIZ : SOR_ReconLeader_NIZ	
	{
		icon =  "iconMan";
		displayName = "Recon Rifleman";
		backpack = "SOR_M60_Pack_NIZ";		
		weapons[] = {"160_RH_m4_wdl", "Throw", "Put",};
		respawnWeapons[] = {"160_RH_m4_wdl", "Throw", "Put",};
		magazines[] =
		{
			Recon_Mags
		};						
		respawnMagazines[] =
		{
			Recon_Mags
		};
	};
	
	class SOR_Recon_M60AR_NIZ : SOR_ReconLeader_NIZ	
	{
		icon =  "iconManMG";
		backpack = "SOR_M60_Pack_NIZ";
		displayName = "Recon AutoRifleman M60";
		weapons[] = {"hlc_lmg_m60", "Throw", "Put"};
		respawnWeapons[] = {"hlc_lmg_m60", "Throw", "Put"};
		Items[] = 		
		{
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		};  
		magazines[] =
		{
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"hlc_100Rnd_762x51_T_M60E4"
		};
		respawnMagazines[] =
		{
			"rhs_mag_m67",
			"rhs_mag_m67",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			"hlc_100Rnd_762x51_T_M60E4"
		};			
	};	
	
	class SOR_ReconSpotter_NIZ : SOR_ReconLeader_NIZ	
	{
		icon =  "iconMan";
		displayName = "Recon Spotter";
		Items[] = 		
		{
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		}; 		
		magazines[] =
		{
			Recon_Mags
		};						
		respawnMagazines[] =
		{
			Recon_Mags
		};		
	};

	class SOR_Marksman_NIZ : SOR_ReconLeader_NIZ	
	{
		icon =  "iconMan";
		displayName = "Recon Marksman";
		weapons[] = {"160_srifle_DMR_06_olive_F", "Throw", "Put",};
		respawnWeapons[] = {"160_srifle_DMR_06_olive_F", "Throw", "Put",};
		Items[] = 		
		{
			Recon_Equip,
			Recon_Meds
		};                
        RespawnItems[] = 
		{
			Recon_Equip,
			Recon_Meds
		}; 
		magazines[] = 	
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
		};						
		respawnMagazines[] =
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
		};	
	};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_MechCrew_NIZ : B_crew_F
	
	{
		faction = SOR_Faction_NIZ;
		vehicleclass = "SOR_Infantry_MECH";
		displayName = "Mechanised Gunner";
		uniformClass = "rhs_uniform_FROG01_m81"; 
		backpack = "SOR_Repair_Pack_NIZ";
		weapons[] = {"rhsusf_weap_m1911a1","Throw", "Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw", "Put"};
		Items[] =
		{
			Standard_Meds
		};  
        RespawnItems[] = 
		{
			Standard_Meds
		};
		magazines[] = {Std_m1911a1};
		respawnMagazines[] = {Std_m1911a1};	
		linkedItems[] = 
		{	
			"V_Rangemaster_belt",
			"rhs_tsh4_ess",
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"V_Rangemaster_belt",
			"rhs_tsh4_ess",
			Standard_Equipment
		};
	};
	
class SOR_MechOperator_NIZ : SOR_MechCrew_NIZ
	
	{
		displayName = "Mechanised Operator";
		backpack = "";
		weapons[] = {"RH_M16A1", "Throw", "Put",};
		respawnWeapons[] = {"RH_M16A1", "Throw", "Put",};
		magazines[] = 	
		{
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_M855A1",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			Std_Pistol
		};						
		respawnMagazines[] =
		{
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_M855A1",
			"rhs_mag_an_m8hc",
			"rhs_mag_an_m8hc",
			Std_Pistol
		};
		linkedItems[] = 
		{	
			"V_Rangemaster_belt",
			"rhs_tsh4", 
			Standard_Equipment
		};
        respawnLinkedItems[] = 
		{	
			"V_Rangemaster_belt",
			"rhs_tsh4",
			Standard_Equipment
		};
	};

class SOR_MechCrewCommander_NIZ : SOR_MechOperator_NIZ
	
	{
		displayName = "Mechanised Crew Commander";
		backpack = "SOR_Mech_Radio";
		cost = 100000;
	};	

class SOR_MechDriver_NIZ : SOR_MechCrew_NIZ
	
	{
		displayName = "Mechanised Driver";
		backpack = "";
	};	
	
//HMG Team
class SOR_HMGActual_NIZ : SOR_Actual_NIZ
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Actual";
		icon =  "iconManLeader";
		backpack = "tf_rt1523g_big_bwmod";
	};
	
class SOR_HMGGunner_NIZ : SOR_Rifleman_NIZ
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Gunner";
		backpack = "RHS_M2_Gun_Bag";
	};	

class SOR_HMGCarrier_NIZ : SOR_Rifleman_NIZ
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Carrier";
		backpack = "RHS_M2_MiniTripod_Bag";
	};

class SOR_HMGRFL_NIZ : SOR_Grenadier_NIZ
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "HMG Rifleman M320";
		backpack = "SOR_GD_Pack_NIZ";
	};	
	
//Mortar Team
class SOR_MORActual_NIZ : SOR_Actual_NIZ
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Actual";
		backpack = "tf_rt1523g_big_bwmod";
	};
	
class SOR_MORGunner_NIZ : SOR_Rifleman_NIZ
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Gunner";
		backpack = "I_Mortar_01_weapon_F";
	};	

class SOR_MORCarrier_NIZ : SOR_Rifleman_NIZ
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Carrier";
		backpack = "I_Mortar_01_support_F";
	};
	
class SOR_MORRFL_NIZ : SOR_Grenadier_NIZ
	
	{
		vehicleclass = "SOR_Infantry_Support";
		displayName = "Mortar Rifleman M320";
		backpack = "SOR_GD_Pack_NIZ";
	};		

