class CfgPatches
{
	class 95th_Legion_Vehicles
	{
        author="95th Aux Team";
		scope=2;
		scopecurator=2;
        name="95th Legion Vehicles";
		requiredAddons[]=
		{
			"3AS_SaberTank",
			"3AS_LAAT"
		};
		units[] = {
			"95th_LAAT_Mrk2",
			"95th_LAAT_Mrk1",
			"95th_TX_130",
			"95th_RX200"
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
		displayname="[95th] LAAT/I Mk.2";
		author="95th Aux Team";
        crew = "95th_P1_Pilot_Unit_Trooper";
		ace_cargo_space = 26;
		scopecurator=2;
		scope = 2;
		faction="95th_Legion_Faction_Clones";
		hiddenSelectionsTextures[]=
		{
			"\95th_Vehicles\Data\LAAT\Hull_CO.paa",
			"\95th_Vehicles\Data\LAAT\Wings_CO.paa",
			"\95th_Vehicles\Data\LAAT\Weapons_CO.paa",
			"\95th_Vehicles\Data\LAAT\Weapon_Details_CO.paa",
			"\95th_Vehicles\Data\LAAT\Interior_CO.paa"
		};
	};

	class 3as_LAAT_Mk1;
	class 95th_LAAT_Mrk1: 3as_LAAT_Mk1
	{
		displayname="[95th] LAAT/I Mk.1";
		author="95th Aux Team";
		faction="95th_Legion_Faction_Clones";
		ace_cargo_space = 26;
		scopecurator=2;
		scope = 2;
        crew = "95th_P1_Pilot_Unit_Trooper";
	};

	class 3as_saber_m1;
	class 95th_TX_130 : 3as_saber_m1
	{
		author="95th Aux";
		scopecurator=2;
		scope = 2;
        crew = "95th_P1_Unit_Trooper";
		faction="95th_Legion_Faction_Clones";
		displayname="95th TX-130";
		ace_cargo_space = 26;
		hiddenSelectionsTextures[]=
		{
			"\95th_Vehicles\Data\Saber\Hull.paa",
			"\95th_Vehicles\Data\Saber\Weapons.paa",
		};
		class ACE_Cargo {
			class Cargo {
				class track {
					type = "ACE_Track";
					amount = 2;
				};
			};
		};
	};

	class 3AS_RX200_Base;
	class 95th_RX200 : 3AS_RX200_Base
	{
		author="95th Aux";
		scopecurator=2;
		scope = 2;
        crew = "95th_P1_Unit_Trooper";
		faction="95th_Legion_Faction_Clones";
		displayname="95th RX200";
		ace_cargo_space = 26;
		tas_canBlift=1;
		tas_liftVars="[[[[0, -4, -8]]], [0.1], [-0.5]]";
		hiddenSelectionsTextures[]={"\95th_Vehicles\Data\RX200\RX200.paa"};
		class ACE_Cargo {
			class Cargo {
				class track {
					type = "ACE_Track";
					amount = 2;
				};
			};
		};
	};
}; 