class CfgPatches
{
	class RFFSHeli_LittleBird_Teddy10_mod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RFFSHeli_LittleBird_Heli"
		};
	};
};
class CfgMods
{
	class RFFSHeli_LittleBird_Teddy10_mod
	{
		dir="RFFSHeli_LittleBird_Teddy10";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_LittleBird_Teddy10";
		credits="RedFalcon";
		author="";
		authorID="";
		version="version 1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_LittleBird_Teddy10/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_LittleBird_Teddy10/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_LittleBird_Teddy10/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_LittleBird;
	class RFFSHeli_LittleBird_Teddy10: RFFSHeli_LittleBird
	{
		scope=2;
		displayName="MH-6M Little Bird - Bt King - Titan RP";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_LittleBird_Teddy10\data\body_Teddy10_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_LittleBird\data\body.rvmat"
		};
	};
};