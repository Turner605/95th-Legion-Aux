class CfgPatches
{
	class 95th_P1_Facewear
	{
        author="95th Aux Team";
        name="95th Legion P1 Facewear";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"3as_JLTS_Uniforms",
			"SEA_JLTS_ExtendedArsenal"
		};
		units[] = {};
	};
};

class CfgWeapons
{
	class SEA_CloneNVG_TI;
	class SEA_P1_Rangefinder;
	class NVGoggles;

	class 95th_P1_Nightvision_Macrobinoculars: SEA_CloneNVG_TI
	{
		author="95th Aux Team";
		displayName="[95th] Macrobinoculars";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Rangefinder: SEA_P1_Rangefinder
	{
		author="95th Aux Team";
		displayName="[95th] Rangefinder";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};

	class 95th_P1_Nightvision_Invisible: SEA_CloneNVG_TI
	{
		author="95th Aux Team";
		model=""
		hiddenSelectionsTextures[]={""};
		displayName="[95th] Helmet Upgrade";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};
};