class CfgPatches
{
	class 95th_Legion_Vehicles
	{
        author="95th Aux Team";
        name="95th Legion Vehicles";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
		};
		units[] = {
			"95th_LAAT_Mrk2",
			"95th_TX_130"
		};
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
        crew = "95th_Trooper_Pilot";
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
			"\95th_Vehicles\Data\LAAT\Hull_CO.paa",
			"\95th_Vehicles\Data\LAAT\Wings_CO.paa",
			"\95th_Vehicles\Data\LAAT\Weapons_CO.paa",
			"\95th_Vehicles\Data\LAAT\Weapon_Details_CO.paa",
			"\95th_Vehicles\Data\LAAT\Interior_CO.paa"
		};
	};

	class 3as_saber_m1;
	class 95th_TX_130 : 3as_saber_m1
	{
		author="95th Aux";
        crew = "95th_Trooper_Base";
		faction="95th_Legion";
		displayname="95th TX-130";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\95th_Vehicles\Data\Saber\Hull.paa",
			"\95th_Vehicles\Data\Saber\Weapons.paa",
		};
	};
}; 