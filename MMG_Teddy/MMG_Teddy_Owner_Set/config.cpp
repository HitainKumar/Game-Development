class CfgPatches
{
	class Teddy_own_Clothing
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
	class striker_helmet_base;
	class Teddy_Owner_MMG_Striker_Helmet: striker_helmet_base
	{
		displayName="Teddy's Striker Helmet";
		scope=2;
		varWetMax=0.249;	
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_Visor.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Helmet.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Helmet.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Helmet.paa"};
	};
	class mk5_vest_base;
	class Teddy_Owner_MMG_MKV_Vest: mk5_vest_base
	{
		displayName="Teddy's Owner MK5 Vest";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Vest.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Vest.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Vest.paa"};
	};
	class TacticalGloves_ColorBase;
	class Teddy_Owner_MMG_Tactical_Gloves: TacticalGloves_ColorBase
	{
		displayName="Teddy's Owner Tactical Gloves";
		scope=2;
		varWetMax=0.249;		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Gloves.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Gloves.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_Gloves.paa"};
	};
	class supplybag_base;
	class Teddy_Owner_MMG_Supply_Bag: supplybag_base
	{
		displayName="Teddy's Owner Supply Bag";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,15};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_SupplyBag.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_SupplyBag.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_SupplyBag.paa"};
	};
	class PlateCarrierHolster_ColorBase;
	class Teddy_Owner_MMG_Holster: PlateCarrierHolster_ColorBase
	{
		displayName="Teddy's Owner Holster";
		scope=2;
		varWetMax=0.249;	
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa"};
	};
	class double_magpouch_base;
	class Teddy_Owner_MMG_Double_MagPouch: double_magpouch_base
	{
		displayName="Teddy's Owner VIP Double Mag Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,5};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa"};
	};
	class tactical_pouch_base;
	class Teddy_Owner_MMG_Tactical_MagPouch: tactical_pouch_base
	{
		displayName="Teddy's Owner VIP Tactical Mag Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,5};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa"};
	};
	class mk5_grenade_pouch_base;
	class Teddy_Owner_MMG_Grenade_Pouch: mk5_grenade_pouch_base
	{
		displayName="Teddy's Owner VIP  Grenade Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,4};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa"};
	};
	class mk5_utility_pouch_base;
	class Teddy_Owner_MMG_Utility_Pouch: mk5_utility_pouch_base
	{
		displayName="Teddy's Owner Utility Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,5};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa"};
	};
	class JPCMed_Pouch_base;
	class Teddy_Owner_MMG_Med_Pouch: JPCMed_Pouch_base
	{
		displayName="Teddy's Owner Med Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,6};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore_2.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore_2.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore_2.paa"};
	};
	class combatpants_base;
	class Teddy_Owner_MMG_Combat_Pants: combatpants_base
	{
		displayName="Teddy's Owner Combat Pants";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_CombatPants.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_CombatPants.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_CombatPants.paa"};
	};
	class operatorshirt_base;
	class Teddy_Owner_MMG_Operator_Shirt: operatorshirt_base
	{
		displayName="Teddy's Owner Operator Shirt";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OperatorShirt.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OperatorShirt.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OperatorShirt.paa"};
	};
	class falconbelt_base;
	class Teddy_Owner_MMG_Falcon_Belt: falconbelt_base
	{
		displayName="Teddy's Owner Falcon Belt";
		scope=2;
		varWetMax=0.249;	
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Owner_MMG_OpsCore.paa"};
	};
	class supplybag_base;
	class Teddy_MMG_Asger_Supplybag: supplybag_base
	{
		displayName="Teddy's Viking Special - Asger's Supply Bag";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,16};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_Supplybag.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_Supplybag.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_Supplybag.paa"};
	};
	class operatorshirt_base;
	class Teddy_MMG_Asger_OperatorShirt: operatorshirt_base
	{
		displayName="Teddy's Viking Special - Asger's Operator Shirt";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_OperatorShirt.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_OperatorShirt.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_OperatorShirt.paa"};
	};
	class combatpants_base;
	class Teddy_MMG_Asger_CombatPants: combatpants_base
	{
		displayName="Teddy's Viking Special - Asger's Combat Pants";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_CombatPants.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_CombatPants.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_CombatPants.paa"};
	};
	class mk5_vest_base;
	class Teddy_MMG_Asger_MKV_Armor: mk5_vest_base
	{
		displayName="Teddy's Viking Special - Asger's MK5 Vest";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,8};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_MKV_Armor.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_MKV_Armor.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_MKV_Armor.paa"};
	};
	class JPCMed_Pouch_base;
	class Teddy_MMG_Asger_JPCMedpouch: JPCMed_Pouch_base
	{
		displayName="Teddy's Viking Special - Asger's Med Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={10,4};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_JPCMedpouch.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_JPCMedpouch.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_JPCMedpouch.paa"};
	};
	class tactical_pouch_base;
	class Teddy_MMG_Asger_TacticalPouch: tactical_pouch_base
	{
		displayName="Teddy's Viking Special - Asger's Tactical Mag Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={8,5};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_TacticalPouch.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_TacticalPouch.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_TacticalPouch.paa"};
	};
	class double_magpouch_base;
	class Teddy_MMG_Asger_DoubleMagPouch: double_magpouch_base
	{
		displayName="Teddy's Viking Special - Asger's Double Mag Pouch";
		scope=2;
		varWetMax=0.249;
		itemsCargoSize[]={8,5};		
		heatIsolation=1;
		biological=1;
		chemical=1;
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_DoubleMagPouch.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_DoubleMagPouch.paa",
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_MMG_Asger_DoubleMagPouch.paa"};
	};
	class Flag_Base;
	class Teddy_Asger_VikingSpecial_Flag: Flag_Base
	{
		displayName="Titan's Sigma VIP Flag";
		scope=2;
		varWetMax=0.249;		
		hiddenSelectionsTextures[]={
		"Teddy_Clothings\MMG_Teddy\MMG_Teddy_Owner_Set\data\Teddy_Asger_VikingSpecial_Flag.paa"
		};	
	};
};