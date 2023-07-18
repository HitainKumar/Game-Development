class CfgPatches
{
	class Teddy_EnceladusStarterPack
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Data",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class CargoPants_ColorBase;
	class Teddy_Enceladus_StarterPants: CargoPants_ColorBase
	{
		scope=2;
		displayName = "Enceladus Starter Pants";
		descriptionShort = "Retextures By Teddy. Enceladus Special - Get yours done at Enceladus Discord https://discord.gg/KcfpT4mbvq";
		itemSize[] = {3,3};
		itemsCargoSize[] = {7,7};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Enceladus_StarterGear\data\Teddy_Enceladus_Pants.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_Pants.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_Pants.paa"
		};
	};		
    class JungleBoots_ColorBase;
	class Teddy_Enceladus_StarterBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Enceladus Starter Boots";
		descriptionShort = "Retextures By Teddy. Enceladus Special - Get yours done at Enceladus Discord https://discord.gg/KcfpT4mbvq";
		itemSize[] = {3,3};
		itemsCargoSize[] = {0,0};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Enceladus_StarterGear\data\Teddy_Enceladus_StarterBoots.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_StarterBoots.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_StarterBoots.paa"
		};
	};	
    class DryBag_ColorBase;
	class Teddy_Enceladus_DryBag: DryBag_ColorBase
	{
		scope=2;
		displayName = "Enceladus Starter Dry Bag";
		descriptionShort = "Retextures By Teddy. Enceladus Special - Get yours done at Enceladus Discord https://discord.gg/KcfpT4mbvq";
		itemSize[] = {5,6};
		itemsCargoSize[] = {9,9};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Enceladus_StarterGear\data\Teddy_Enceladus_DryBag.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_DryBag.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_DryBag.paa"
		};
	};		
    class M65Jacket_ColorBase;
	class Teddy_Enceladus_Shirt: M65Jacket_ColorBase
	{
		scope=2;
		displayName = "Enceladus Starter Jacket";
		descriptionShort = "Retextures By Teddy. Enceladus Special - Get yours done at Enceladus Discord https://discord.gg/KcfpT4mbvq";
		itemSize[] = {3,3};
		itemsCargoSize[] = {7,7};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Enceladus_StarterGear\data\Teddy_Enceladus_Shirt.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_Shirt.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_Shirt.paa"
		};
	};	
    class BaseballCap_ColorBase;
	class Teddy_Enceladus_StarterCap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Enceladus Starter Cap";
		descriptionShort = "Retextures By Teddy. Enceladus Special - Get yours done at Enceladus Discord https://discord.gg/KcfpT4mbvq";
		itemSize[] = {2,2};
		itemsCargoSize[] = {0,0};
		hiddenSelections[]=
		{
			"zbytek",
			"zbytek",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Enceladus_StarterGear\data\Teddy_Enceladus_StarterCap.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_StarterCap.paa",
			"Enceladus_StarterGear\data\Teddy_Enceladus_StarterCap.paa"
		};
	};		
};