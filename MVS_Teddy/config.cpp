class CfgPatches
{
	class Enceldaus_Clothings
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class MVS_Assault_Pack_Tan;
	class Teddy_MVS_Magic_RaidPack: MVS_Assault_Pack_Tan
	{
		displayName="Teddy's Magic BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,20};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Magic_bag.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_bag.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_bag.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_MVS_Magic_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Magic's Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Magic_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_Shirt.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_MVS_Magic_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Magic's Combat Pants";
		itemsCargoSize[]={10,10};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Magic_pants.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_pants.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_pants.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_MVS_Magic_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Magic's Heavy Vest";
		itemsCargoSize[]={10,20};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Magic_vest.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_vest.paa","Enceladus_Clothings\MVS_Teddy\data\Magic_vest.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_MVS_Magic_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Magic's Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Magic_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Magic_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Magic_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Magic_Helmet.paa",
			"Enceladus_Clothings\MVS_Teddy\data\magic_visor.paa"
		};		
	};	
	class MVS_Assault_Pack_Tan;
	class Teddy_MVS_Lunna_RaidPack: MVS_Assault_Pack_Tan
	{
		displayName="Teddy's Lunna BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,20};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Lunna_bagpack.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_bagpack.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_bagpack.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_MVS_Lunna_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Lunna's Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Lunna_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_Shirt.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_MVS_Lunna_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Lunna's Combat Pants";
		itemsCargoSize[]={10,10};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Lunna_pants.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_pants.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_pants.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_MVS_Lunna_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Lunna's Heavy Vest";
		itemsCargoSize[]={10,20};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Lunna_vest.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_vest.paa","Enceladus_Clothings\MVS_Teddy\data\Lunna_vest.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_MVS_Lunna_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Lunna's Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_Helmet.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_visor.paa"
		};		
	};
	class MVS_Assault_Pack_Tan;
	class Teddy_PVP_Blue_RaidPack: MVS_Assault_Pack_Tan
	{
		displayName="Teddy's Blue PVP BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,15};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_PVP_Blue_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Teddy's Blue PVP Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_PVP_Blue_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Teddy's PVP Combat Pants";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_PVP_Blue_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Teddy's Blue PVP Heavy Vest";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_PVP_Blue_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Warrior PVP Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\teddy_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy_Opscore.paa"
		};		
	};
	class MVS_Assault_Pack_Tan;
	class Teddy_PVP_Red_RaidPack: MVS_Assault_Pack_Tan
	{
		displayName=" Teddy's Red PVP BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,15};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_PVP_Red_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Teddy's Pubg PVP Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy1_shirt.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_shirt.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_shirt.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_PVP_Red_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Teddy's Red PVP Combat Pants";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy1_pants.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_pants.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_pants.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_PVP_Red_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Teddy's Red PVP Vest";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_PVP_Red_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Red PVP Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\teddy1_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_visor.paa"
		};		
	};
	class MVS_Assault_Pack_Tan;
	class Teddy_MVS_AiBot_RaidPack: MVS_Assault_Pack_Tan
	{
		displayName=" Teddy's Red  BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,4};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_MVS_AiBot_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Titan AI Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,4};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_Shirt.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_MVS_AiBot_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Titan AI Combat Pants";
		itemsCargoSize[]={10,3};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_MVS_AiBot_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Titan AI Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_AiBot.paa"
		};		
	};
	class MVS_Assault_Pack_Tan; 
	class Teddy_PVP_Yellow_RaidPack: MVS_Assault_Pack_Tan  
	{
		displayName=" Teddy's Yellow PVP BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,15};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_PVP_Yellow_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Teddy's Yellow PVP Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_PVP_Yellow_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Teddy's Yellow PVP Combat Pants";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_PVP_Yellow_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Teddy's Yellow PVP Vest";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_PVP_Yellow_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Yellow PVP Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy2_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_visor.paa"
		};		
	};
	class MVS_Assault_Pack_Tan;
	class Teddy_OwnerOutFit_RaidPack: MVS_Assault_Pack_Tan 
	{
		displayName=" Teddy's BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,20};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_OwnerOutFit_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Teddy's Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Shirt.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Shirt.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_OwnerOutFit_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Teddy's Combat Pants";
		itemsCargoSize[]={10,10};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_OwnerOutFit_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Teddy's Vest";
		itemsCargoSize[]={10,15};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Vest.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Vest.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Vest.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_OwnerOutFit_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_Visor.paa"
		};		
	};
	class MVS_Assault_Pack_Tan;
	class Teddy_OwnerOutFit_Red_RaidPack: MVS_Assault_Pack_Tan 
	{
		displayName=" Teddy's Red BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,20};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_OwnerOutFit_Red_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Teddy's Red Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_OwnerOutFit_Red_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Teddy's Red Combat Pants";
		itemsCargoSize[]={10,10};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_OwnerOutFit_Red_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Teddy's Red Vest";
		itemsCargoSize[]={10,15};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_OwnerOutFit_Red_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Red Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_OwnerOutFit_OpsCore_Red.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_visor.paa"
		};		
	};
	class MVS_Assault_Pack_Tan; 
	class Teddy_PVP_Green_RaidPack: MVS_Assault_Pack_Tan  
	{
		displayName=" Teddy's Green PVP BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,15};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_PVP_Green_Combat_Shirt: MVS_CombatShirt_Base
	{
		displayName="Teddy's Green PVP Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_PVP_Green_Combat_Pants: MVS_CombatPants_Base
	{
		displayName="Teddy's Green PVP Combat Pants";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_PVP_Green_Heavy_Vest: ModularVestSystem_Heavy
	{
		displayName="Teddy's Green PVP Vest";
		itemsCargoSize[]={10,8};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_PVP_Green_Helmet: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Green PVP Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy4_OpsCore.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Lunna_visor.paa"
		};		
	};
	class MVS_Assault_Pack_Tan; 
	class Teddy_MVS_Raidpack_Dragon: MVS_Assault_Pack_Tan  
	{
		displayName=" Teddy's Dragon BagPack";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,20};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Raidpack_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Raidpack_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Raidpack_Dragon.paa"};
	};	
	class MVS_CombatShirt_Base;
	class Teddy_MVS_CombatShirt_Dragon: MVS_CombatShirt_Base
	{
		displayName="Teddy's Dragon Combat Top";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_CombatShirt_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_CombatShirt_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_CombatShirt_Dragon.paa"};
	};
	class MVS_CombatPants_Base;
	class Teddy_MVS_Combatpants_Dragon: MVS_CombatPants_Base
	{
		displayName="Teddy's Dragon Combat Pants";
		itemsCargoSize[]={10,10};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Combatpants_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Combatpants_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Combatpants_Dragon.paa"};
	};
	class ModularVestSystem_Heavy;
	class Teddy_MVS_HeavyVest_Dragon: ModularVestSystem_Heavy
	{
		displayName="Teddy's Dragon Vest";
		itemsCargoSize[]={10,10};		
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_HeavyVest_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_HeavyVest_Dragon.paa","Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_HeavyVest_Dragon.paa"};
	};
	class MVS_WarriorHelmet_Base;
	class Teddy_MVS_Helmet_Dragon: MVS_WarriorHelmet_Base
	{
		displayName="Teddy's Dragon Warrior Helmet";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[] = 
		{
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Helmet_Dragon.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Helmet_Dragon.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Helmet_Dragon.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_OpsCore_Dragon.paa",
			"Enceladus_Clothings\MVS_Teddy\data\Teddy_MVS_Helmet_Visor_Dragon.paa"
		};
	};
};