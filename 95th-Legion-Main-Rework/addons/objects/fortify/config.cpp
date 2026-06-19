#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_Fortify_Blaster_Turret"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared", "A3_Static_F", "3AS_Static_BlasterTurret"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class 3AS_Barricade_2_C_prop;
    class 3AS_Short_Wall_Bunker;
    class Land_lsb_fob_hBarrier_ramp;
    class Land_lsb_fob_hBarrier_wall;

    class AUX_95th_Fortify_Barricade : 3AS_Barricade_2_C_prop {
        displayName="Barricade";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class AUX_95th_Fortify_Bunker: 3AS_Short_Wall_Bunker {
        displayName="Bunker";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class AUX_95th_Fortify_Ramp: Land_lsb_fob_hBarrier_ramp {
        displayName="Ramp";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class AUX_95th_Fortify_Wall: Land_lsb_fob_hBarrier_wall {
        displayName="Wall";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
    };

    class Land;
	class LandVehicle: Land {};

	class StaticWeapon: LandVehicle {
		class Turrets {
			class MainTurret;
		};
	};

	class StaticMGWeapon: StaticWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class ViewOptics;
			};
		};
	};

    class HMG_01_base_F: StaticMGWeapon {
        class AnimationSources;
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

    class HMG_01_A_base_F: HMG_01_base_F {
        class AnimationSources: AnimationSources {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

	class 3AS_HeavyRepeater_Base: StaticMGWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class ViewOptics: ViewOptics {};
			};
		};
	};

	class 3AS_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};

    class AUX_95th_Fortify_Turret: 3AS_HeavyRepeater_Unarmoured {
        displayName="Heavy Repeater";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
        class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				class ViewOptics {
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
			};
		};
    };

    class 3AS_BlasterTurret_base: HMG_01_A_base_F {
        class AnimationSources: AnimationSources {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics: ViewOptics {};
            };
        };
    };

    class 3AS_BlasterTurret: 3AS_BlasterTurret_base {
        class AnimationSources: AnimationSources {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics: ViewOptics {};
            };
        };
    };

    class AUX_95th_Fortify_Blaster_Turret: 3AS_BlasterTurret {
        displayName="Blaster Turret";
        editorCategory="AUX_95th_Objects_Generic";
        editorSubcategory="AUX_95th_Objects_Fortify";
        model = "3AS\3AS_Static\BlasterTurret\Model\BlasterTurret.p3d";
        weapons[] = {"FakeWeapon", "HMG_static"};
        magazines[] = {"FakeWeapon", "100Rnd_127x99_mag_Tracer_Red"};
        class AnimationSources: AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "HMG_static";
            };

            class muzzle_source_rot {
                source = "ammorandom";
                weapon = "HMG_static";
            };

            class minigun {
                source = "revolving";
                weapon = "HMG_static";
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "RscOptics_crows";
                animationSourceBody = "Mainturret";
                Body = "Mainturret";
                animationSourceGun = "Maingun";
                Gun = "Maingun";
                optics = 1;
                viewGunnerInExternal = 1;
                gunnerForceOptics = 0;
                gunnerOpticsModel = "\A3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
                selectionFireAnim = "zasleh";
                weapons[] = {"HMG_static"};
                magazines[] = {
                    "100Rnd_127x99_mag_Tracer_Red",
                    "100Rnd_127x99_mag_Tracer_Red",
                    "100Rnd_127x99_mag_Tracer_Red"
                };
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGun[] = {"usti hlavne", "usti hlavne1"};

                class ViewOptics: ViewOptics {
                    initFov = 0.75;
                    minFov = 0.25;
                    maxFov = 1.25;
                };
            };
        };
    };
};

#include "CfgEventHandlers.hpp"