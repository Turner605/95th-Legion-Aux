class CfgPatches
{
	class 95th_Legion_Backpacks
	{
        author="95th Aux Team";
        name="95th Legion Backpacks";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
		};
		weapons[] = {};
		units[] = {};
	};
};

class CfgVehicles
{

    //************************************************************************************************************************************************************************************************
    //*****             Vehicles                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
	class Helicopter;
	class Items_base_F;
	class House_F;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class ACE_selfActions;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
	};

	class 3as_LAAT_Mk2;
	class 95th_LAAT_Mrk2: 3as_LAAT_Mk2
	{
		author="95th Aux";
		displayname="95th LAAT/I Mk.2";
		faction="95th_Legion";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Vehicles\Data\Hull_CO.paa",
			"\95th_Vehicles\Data\Wings_CO.paa",
			"\95th_Vehicles\Data\Weapons_CO.paa",
			"\95th_Vehicles\Data\Weapon_Details_CO.paa",
			"\95th_Vehicles\Data\Interior_CO.paa"
		};
	};
}; 