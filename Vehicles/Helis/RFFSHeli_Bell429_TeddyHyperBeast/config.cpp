class CfgPatches
{
	class RFFSHeli_Bell429_TeddyHyperBeast_Heli
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Parts",
			"DZ_Vehicles_Wheeled",
			"DZ_Scripts",
			"DZ_Data",
			"RFFSHeli_Bell429_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_Bell429_TeddyHyperBeast_Heli
	{
		dir="RFFSHeli_Bell429_TeddyHyperBeast";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_Bell429_TeddyHyperBeast";
		credits="";
		author="TeddyHyperBeast";
		authorID="";
		version="version 1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_Bell429_TeddyHyperBeast/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_Bell429;
	class RFFSHeli_Bell429_TeddyHyperBeast: RFFSHeli_Bell429
	{
		scope=2;
		displayName="Bell 429 Helicopter - TeddyHyperBeast";
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa",
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_right_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\body.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
		};
	};
	class RFFSHeli_Bell429_DriverDoor;
	class RFFSHeli_Bell429_CodriverDoor;
	class RFFSHeli_Bell429_Cargo1;
	class RFFSHeli_Bell429_Cargo2;
	class RFFSHeli_Bell429_Cargo3;
	class RFFSHeli_Bell429_Cargo4;
	class RFFSHeli_Bell429_interior;
	class RFFSHeli_Bell429_rearseats;
	class RFFSHeli_Bell429_skids;

	class RFFSHeli_Bell429_interior_TeddyHyperBeast: RFFSHeli_Bell429_interior
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat"
		};
	};		
	class RFFSHeli_Bell429_rearseats_TeddyHyperBeast: RFFSHeli_Bell429_rearseats
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat"
		};
	};		
	class RFFSHeli_Bell429_skids_TeddyHyperBeast: RFFSHeli_Bell429_skids
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat"
		};
	};	
	class RFFSHeli_Bell429_DriverDoor_TeddyHyperBeast: RFFSHeli_Bell429_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\glass_ca.rvmat"
		};
	};
	class RFFSHeli_Bell429_CodriverDoor_TeddyHyperBeast: RFFSHeli_Bell429_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right",
			"camo_glass"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa",
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_right_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\glass_ca.rvmat"
		};
	};
	class RFFSHeli_Bell429_Cargo1_TeddyHyperBeast: RFFSHeli_Bell429_Cargo1
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\glass_ca.rvmat"
		};
	};
	class RFFSHeli_Bell429_Cargo2_TeddyHyperBeast: RFFSHeli_Bell429_Cargo2
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa",
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_right_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\glass_ca.rvmat"
		};
	};
	class RFFSHeli_Bell429_Cargo3_TeddyHyperBeast: RFFSHeli_Bell429_Cargo3
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\glass_ca.rvmat"
		};
	};
	class RFFSHeli_Bell429_Cargo4_TeddyHyperBeast: RFFSHeli_Bell429_Cargo4
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa",
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_right_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\body.rvmat",
			"RFFSHeli_Bell429\data\glass_ca.rvmat"
		};
	};
	class RFFSHeli_Bell429_wreck;
	class RFFSHeli_Bell429_TeddyHyperBeast_Wreck: RFFSHeli_Bell429_Wreck
	{
		hiddenSelections[]=
		{
			"camo",
			"camo_right"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_TeddyHyperBeast_co.paa",
			"RFFSHeli_Bell429_TeddyHyperBeast\data\body_right_TeddyHyperBeast_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"rffsheli_bell429\data\defaultdestruct.rvmat",
			"rffsheli_bell429\data\defaultdestruct.rvmat"
		};
	};
};