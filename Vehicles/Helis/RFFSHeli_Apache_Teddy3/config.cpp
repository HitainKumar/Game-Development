class CfgPatches
{
	class RFFSHeli_Apache_Teddy3_Heli
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
			"RFFSHeli_Apache_Heli",
			"RFFSHeli_Core"
		};
	};
};
class CfgMods
{
	class RFFSHeli_Apache_Teddy3_Heli
	{
		dir="RFFSHeli_Apache_Teddy3";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_Apache_Teddy3";
		credits="";
		author="RedFalcon";
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
					"RFFSHeli_Apache_Teddy3/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_Apache;
	class RFFSHeli_Apache_Teddy3: RFFSHeli_Apache
	{
		scope=2;
		displayName="AH-46 Apache Longbow - Teddy3";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Apache_Teddy3\data\apache_Teddy3_ca.paa",
			"RFFSHeli_Apache_Teddy3\data\apache2_Teddy3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Apache\data\apache.rvmat",
			"RFFSHeli_Apache\data\apache2.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
		};
	};
	class RFFSHeli_Apache_DriverDoor;
	class RFFSHeli_Apache_CodriverDoor;

	class RFFSHeli_Apache_DriverDoor_Teddy3: RFFSHeli_Apache_DriverDoor
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Apache_Teddy3\data\apache_Teddy3_ca.paa",
			"RFFSHeli_Apache_Teddy3\data\apache2_Teddy3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Apache\data\apache.rvmat",
			"RFFSHeli_Apache\data\apache2.rvmat"
		};
	};
	class RFFSHeli_Apache_CodriverDoor_Teddy3: RFFSHeli_Apache_CodriverDoor
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Apache_Teddy3\data\apache_Teddy3_ca.paa",
			"RFFSHeli_Apache_Teddy3\data\apache2_Teddy3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_Apache\data\apache.rvmat",
			"RFFSHeli_Apache\data\apache2.rvmat"
		};
	};

	class RFFSHeli_Apache_Wreck;
	class RFFSHeli_Apache_Teddy3_Wreck: RFFSHeli_Apache_Wreck
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_Apache_Teddy3\data\apache_Teddy3_ca.paa",
			"RFFSHeli_Apache_Teddy3\data\apache2_Teddy3_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"rffsheli_Apache\data\apache_destruct.rvmat",
			"rffsheli_Apache\data\apache2_destruct.rvmat"
		};
	};
};