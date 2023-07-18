class CfgPatches
{
	class Teddy_MMG
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
    class MMG_MK_III_Armor_black;
	class Teddy_MMG_MK_III_armor_Raider: MMG_MK_III_Armor_black
	{
		displayName="Titan MK3 Armour Raider";
		itemsCargoSize[]={10,10};
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_MKIII_ARMOR_ADMIN.paa",
			"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_MKIII_ARMOR_ADMIN.paa",
			"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_MKIII_ARMOR_ADMIN.paa"
		};
	};
    class IMP_Bag_Rifle_ColorBase;
	class Teddy_ES_Gunbag_Admin_Purple: IMP_Bag_Rifle_ColorBase
	{
		displayName="Teddy's ES GUNBAG - Admin";
		scope=2;
		itemsCargoSize[]={10,20};
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[] = {"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_ES_Gunbag_Admin_Purple.paa"};
	};
    class IMP_Helmet_RoninHeavy_ColorBase ;
	class Teddy_ES_Ronin_Heavy_Admin:  IMP_Helmet_RoninHeavy_ColorBase
	{
		displayName="Teddy's ES RoninHeavy - Admin";
		scope=2;
		varWetMax=0.249;
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[] = {"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_ES_Ronin_Heavy_Admin.paa"};
	};
    class combatpants_base;
	class Teddy_MMG_Combatpants_Admin: combatpants_base
	{
		displayName="Teddy's Admin Combat Pants";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_Combatpants_Admin.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_Combatpants_Admin.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_Combatpants_Admin.paa"};
	};
    class operatorshirt_base;
	class Teddy_MMG_OperatorShirt_Admin: operatorshirt_base
	{
		displayName="Teddy's Admin Operator Shirt";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,10};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_OperatorShirt_Admin.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_OperatorShirt_Admin.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Admin_Set\data\Teddy_MMG_OperatorShirt_Admin.paa"};
	};
}