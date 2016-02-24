/*
	Name: 160th SOR Mod Woodland
	Author: Scooby
	Date: 24/12/15
	Description: cfgGroups.hpp
*/

class CfgGroups 
{
	class West 
	{
		
		class SOR_Groups_W
		{
			name = "SOR Infantry (Woodland)";
			
			class SOR_InfGroups_W 
			{
				name = "SOR Infantry";
				aliveCategory = "Infantry";
				
				class SOR_ComGroup_W 
				{
					name = "Command Unit";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = CAPTAIN;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = CAPTAIN;
						position[] = {-4, 0, 0};
					};
				};
				class SOR_HavocGroup_W
				{
					name = "HAVOC";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_W";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_RTO_W";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_W";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};
				class SOR_INFSquadA_W
					{
					name = "10 Man Squad";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					class Unit7 
					{
						side = 1;
						vehicle = "SOR_Actual_W";
						rank = SERGEANT;
						position[] = {0, -0, 0};
					};
					
					class Unit8 
					{
						side = 1;
						vehicle = "SOR_Medic_W";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};					
					class Unit9 
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10 
					{
						side = 1;
						vehicle = "SOR_M249AR_W";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11 
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12 
					{
						side = 1;
						vehicle = "SOR_Rifleman_W";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13 
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14 
					{
						side = 1;
						vehicle = "SOR_M240AR_W";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15 
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16 
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_W";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_Recon_W
					{
						name = "Sniper Team";
						faction = "SOR_Faction_W";
						side = 1;
						rarityGroup = 0.75;
						class Unit0 
						{
							side = 1;
							vehicle = "SOR_Sniper_W";
							rank = SERGEANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_Spotter_W";
							rank = SERGEANT;
							position[] = {0, -2, 0};
						};
					};				
				class SOR_AngGroup1_W
					{
						name = "Angel Crew";
						faction = "SOR_Faction_W";
						side = 1;
						rarityGroup = 0.75;
		
						class Unit0 
						{
							side = 1;
							vehicle = "SOR_HeliPilot_W";
							rank = LIEUTENANT;
							position[] = {-0, 0, 0};
						};						
						class Unit1 
						{
							side = 1;
							vehicle = "SOR_HeliCrew_W";
							rank = CORPORAL;
							position[] = {-2, 0, 0};
						};						
						class Unit2 
						{
							side = 1;
							vehicle = "SOR_HeliCrew_W";
							rank = CORPORAL;
							position[] = {-4, 0, 0};
						};
						class Unit3 						
						{
							side = 1;
							vehicle = "SOR_HeliCrew_W";
							rank = CORPORAL;
							position[] = {-6, 0, 0};
						};
					};		
				class SOR_PegGroup2_W 
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliCrew_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};
				};	
				class SOR_MEVGroup2_W 
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_W";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_ParaJumper_W";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					
					{
						side = 1;
						vehicle = "SOR_ParaJumper_W";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_W";
						rank = PRIVATE;
						position[] = {-8, 0, 0};
					};
				};
				class SOR_EagleGroup2_W 
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_JetPilot_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_JetPilot_W";
						rank = LIEUTENANT;
						position[] = {-2, 0, 0};
					};
				};						
				class SOR_SabGroup2_W 
				{
					name = "Mechanised Crew";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCommand_W";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechCrew_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MechCrew_W";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_MechCrew_W";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup2_W
				{
					name = "HMG Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HMGActual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HMGGunner_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_W";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HMGRFL_W";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup3_W
				{
					name = "Mortar Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MORActual_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};							
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MORGunner_W";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};							
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MORCarrier_W";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 							
					{
						side = 1;
						vehicle = "SOR_MORRFL_W";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};	
				};					
				class SOR_FireTeamLead_W
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Actual_W";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Medic_W";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};					
				};				
				class SOR_FireTeam1_W
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam2_W
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
				
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240AR_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam3_W
				{
					name = "Fire Team (3)";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_RiflemanAT_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};			
				class SOR_ReconTeam2_W
				{
					name = "Recon Team";
					faction = "SOR_Faction_W";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_ReconLeader_W";
						rank = SERGEANT;
						position[] = {0, 0, 0};
						
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_W";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_W";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Recon_M249AR_W";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ReconSpotter_W";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "SOR_Marksman_W";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
				};
			};
		};
	};
};

	

	

		

	


