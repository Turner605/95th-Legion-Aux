class XtdGearModels {
	class CfgWeapons {
		class AUX_95th_Weapons_Primary_DC15A {
            author = "95th Aux Team";
            options[] = {"Variant", "Texture"};

            class Variant {
                alwaysSelectable = 1;
                labels = "Texture";
                values[] = {"Standalone", "UGL"};
                class Standalone { label = "Standalone"; description = "Standalone"; };
                class UGL { label = "UGL"; description = "UGL"; };
            };

            class Texture {
                alwaysSelectable = 1;
                labels = "Texture";
                values[] = {"Metal", "Wooden"};
                class Metal { label = "Metal"; description = "Metal"; };
                class Wooden { label = "Wooden"; description = "Wooden"; };
            };
		};

		class AUX_95th_Weapons_Primary_DC15C: AUX_95th_Weapons_Primary_DC15A {
            
        };


        class AUX_95th_Weapons_Primary_Example {
            author = "95th Aux Team";
            options[] = {"Role", "Weapon", "Variant", "Texture"};

            class Role {
                alwaysSelectable = 1;
                labels = "Role";
                values[] = {"Basic", "Marksman", "Heavy", "NCO", "Flamer", "Grenadier"};
                class Basic { label = "Basic"; description = "Basic Weapons"; };
                class Marksman { label = "Marksman"; description = "Marksman Weapons"; };
                class Heavy { label = "Heavy"; description = "Heavy Weapons"; };
                class NCO { label = "NCO"; description = "NCO Weapons"; };
                class Flamer { label = "Flamer"; description = "Flamer Weapons"; };
                class Grenadier { label = "Grenadier"; description = "Grenadier Weapons"; };
            };

            class Weapon {
                alwaysSelectable = 1;
                labels = "Weapon";
                values[] = {"DC15C", "DC15L", "DC15S", "DC15X", "DP23", "DW32S", "Westar_M5", "Z6"};
                class DC15C { label = "DC15A"; description = "DC15A"; };
                class DC15L { label = "DC15A"; description = "DC15A"; };
                class DC15S { label = "DC15A"; description = "DC15A"; };
                class DC15X { label = "DC15A"; description = "DC15A"; };
                class DP23 { label = "DC15A"; description = "DC15A"; };
                class DW32S { label = "DC15A"; description = "DC15A"; };
                class Westar_M5 { label = "DC15A"; description = "DC15A"; };
                class Z6 { label = "DC15A"; description = "DC15A"; };
            };

            class Variant {
                alwaysSelectable = 1;
                labels = "Texture";
                values[] = {"Standalone", "UGL"};
                class Standalone { label = "Standalone"; description = "Standalone"; };
                class UGL { label = "UGL"; description = "UGL"; };
            };

            class Texture {
                alwaysSelectable = 1;
                labels = "Texture";
                values[] = {"Metal", "Wooden"};
                class Metal { label = "Metal"; description = "Metal"; };
                class Wooden { label = "Wooden"; description = "Wooden"; };
            };
		};
    };
};
