class CfgPatches
{
	class 95th_Props
	{
        author="95th Aux Team";
        name="95th Legion Props";
		requiredAddons[]=
		{
			"ace_main",
            "3AS_Prop_Crates",
			"3as_GNK_Prop"
		};
		units[] = {
            "95th_Platoon_Ammo_Crate",
            "95th_Platoon_Medical_Crate",
            "95th_Platoon_Explosives_Crate",
            "95th_Vehicle_Ammo_Crate",
            "95th_Vehicle_Fuel_Crate",
			"95th_Arsenal"
        };
	};
};

class CfgEditorCategories{
	class 95th_Props{displayName = "[95th] Props";};
};

class CfgEditorSubcategories{
	class 95th_Crates{displayName="[95th] Supply Crates";};
	class 95th_Misc{displayName="[95th] Misc";};
};

class CfgVehicles {
	class CargoNet_01_box_F;

	class 95th_Crate_Base: CargoNet_01_box_F
	{
		scope=1;
		scopecurator=2;
		author="95th Aux Team";
        editorCategory="95th_Props";
		editorSubcategory="95th_Crates";
        maximumLoad=2000;

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 90;

        ace_cargo_size = 4;
        ace_cargo_canLoad = 1;
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

		displayName="Base Crate";
	};

    class 95th_Platoon_Ammo_Crate : 95th_Crate_Base {
		scope=2;
		displayName="[95th] Platoon Ammo Crate";
        model="\3as\3as_props\crates\crate5-3.p3d";
		editorPreview="\3as\3as_props\crates\data\3as_crate4_3_prop.jpg";

		class TransportMagazines
		{
			class _xx_JLTS_DC15A_mag{magazine="JLTS_DC15A_mag"; count=1;};
		};

		class TransportWeapons
		{
			class _xx_JLTS_DC15A_plastic{weapon="JLTS_DC15A_plastic"; count=1;};
		};

		class TransportItems
		{
            //Squad Shield ect
		};
    };

    class 95th_Platoon_Medical_Crate : 95th_Crate_Base {
		scope=2;
		displayName="[95th] Platoon Medical Crate";
        model="\3as\3as_props\crates\Small_Box_5.p3d";
		editorPreview="3as\3as_props\crates\data\3as_Small_Box_5_prop.jpg";

		class TransportItems
		{
			class _xx_ACE_packingBandage{name="ACE_packingBandage"; count=50;};
			class _xx_ACE_elasticBandage{name="ACE_elasticBandage";count=50;};
		};
    };

    class 95th_Platoon_Explosives_Crate : 95th_Crate_Base {
		scope=2;
		displayName="[95th] Platoon Explosives Crate";
		model="3as\3as_props\crates\3as_ExplodeBarrel_1.p3d";
		editorPreview="\3as\3as_props\crates\data\3as_crate3_1_prop.jpg";

		class TransportItems
		{
			//Explosives here
            //detonators ect
		}; 
    };

    class 95th_Vehicle_Ammo_Crate : 95th_Crate_Base {
		scope=2;
		displayName="[95th] Vehicle Ammo Crate";
        model="\3as\3as_props\crates\crate3-1.p3d";
		editorPreview="\3as\3as_props\crates\data\3as_crate3_1_prop.jpg";
        ace_rearm_defaultSupply = 1200;
        maximumLoad=0;
    };

    class 95th_Vehicle_Fuel_Crate : 95th_Crate_Base {
		scope=2;
		displayName="[95th] Vehicle Fuel Crate";
		model="3as\3as_props\crates\3as_ExplodeBarrel_3.p3d";
		editorPreview="\3as\3as_props\crates\data\3as_crate3_1_prop.jpg";
        ace_refuel_fuelCargo = 3000;
        ace_refuel_hooks[] = {{0,0,0},{0,0,0}};
        maximumLoad=0;
    };

	class 3as_GNK;
	class 95th_Arsenal: 3as_GNK
	{
		displayName="[95th] Arsenal Gonk";
		editorCategory="95th_Props";
		editorSubcategory="95th_Misc";
	};
};