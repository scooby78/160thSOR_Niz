class cfgWeapons 
{
	class RH_m4_wdl;
	class srifle_DMR_06_olive_F;
	
	class 160_RH_m4_wdl: RH_m4_wdl 
	{
		class LinkedItems 
		{
			class LinkedItemsMuzzle
			{
				item = "RH_qdss_nt4_wdl";
				slot = "MuzzleSlot";
			};	
		};
	};
	
	class 160_srifle_DMR_06_olive_F: srifle_DMR_06_olive_F 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_KHS_old";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "RH_Saker762_wdl";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_oli";
				slot = "UnderBarrelSlot";
			};				
		};
	};	
};
