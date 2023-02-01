class CfgPatches
{
	class 95th_P1_Facewear
	{
        author="95th Aux Team";
        name="95th Legion ACE";
		requiredAddons[]=
		{
			"ace_main"
		};
		units[] = {};
	};
};

class ACEX_Fortify_Presets {
    class 95th_Fortify_Preset_Standard {
        displayName = "[95th] Standard Preset";
        objects[] = {
            {"3AS_Cover2", 5},
            {"3AS_Shield_3_prop", 10},
            {"3AS_Shield_4_prop", 15},
            {"JLTS_portable_shield_gar", 30},
            {"3AS_HeavyRepeater_Armoured", 30},
            {"3AS_Prop_Concrete_Platform_10x10", 30},
            {"TFAR_Land_Communication_F", 30},
            {"3as_FOB_Light_Tall_Prop", 20}
        };
    };
};

