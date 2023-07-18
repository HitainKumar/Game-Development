class CfgPatches
{
	class Teddy_JumanjiStarterPack
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
	class Teddy_JumanjiServer_StarterGear_Pants: CargoPants_ColorBase
	{
		scope=2;
		displayName = "Jumanji Pants";
		descriptionShort = "Jumanji Pants by Teddy - Get your custom clothings done on the discord https://discord.gg/eXsYARtADK";
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
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Pants.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Pants.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Pants.paa"
		};
	};		
    class JungleBoots_ColorBase;
	class Teddy_JumanjiServer_StarterGear_Boots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Jumanji Boots";
		descriptionShort = "Jumanji Boots by Teddy - Get your custom clothings done on the discord https://discord.gg/eXsYARtADK";
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
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Boots.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Boots.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Boots.paa"
		};
	};	
    class DryBag_ColorBase;
	class Teddy_JumanjiServer_StarterGear_DryBag: DryBag_ColorBase
	{
		scope=2;
		displayName = "Jumanji Dry Bag";
		descriptionShort = "Jumanji Dry Bag by Teddy - Get your custom clothings done on the discord https://discord.gg/eXsYARtADK";
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
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_DryBag.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_DryBag.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_DryBag.paa"
		};
	};		
    class M65Jacket_ColorBase;
	class Teddy_JumanjiServer_StarterGear_Jacket: M65Jacket_ColorBase
	{
		scope=2;
		displayName = "Jumanji Jacket";
		descriptionShort = "Jumanji Jacket by Teddy - Get your custom clothings done on the discord https://discord.gg/eXsYARtADK";
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
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Jacket.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Jacket.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Jacket.paa"
		};
	};	
    class BaseballCap_ColorBase;
	class Teddy_JumanjiServer_StarterGear_Cap: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "Jumanji Cap";
		descriptionShort = "Jumanji Pants by Teddy - Get your custom clothings done on the discord https://discord.gg/eXsYARtADK";
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
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Cap.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Cap.paa",
			"Jumanji_Clothings\Starter\data\Teddy_JumanjiServer_StarterGear_Cap.paa"
		};
	};		
};