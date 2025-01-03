#define NEW_SHARED_LAAT_CONFIG() scope=2;\
		tas_can_impulse=0;\
		ls_hasImpulse = 1;\
		ls_impulsor_boostSpeed_1 = 400;\
		ls_impulsor_boostSpeed_2 = 800;\
		scopecurator=2;\
		author=QUOTE(95th Aux Team);\
		faction=QUOTE(AUX_95th_Legion_Faction_Vehicles);\
		editorSubcategory=QUOTE(AUX_95th_Legion_Vehicles_Category_Air_Gunships);\
		ace_cargo_space = 26;\
		ace_cargo_hasCargo = 1;\
        crew = QUOTE(AUX_95th_Unit_P1_Basic_Trooper);\
		weapons[]={\
			QUOTE(95th_LAAT_Light_Cannon),\
			QUOTE(95th_LAAT_Heavy_Cannon),\
			QUOTE(95th_LAAT_Hydras),\
			QUOTE(3as_LAAT_Missile_AA),\
			QUOTE(CMFlareLauncher)\
		};\
		magazines[]={\
			QUOTE(3as_PylonMissile_LAAT_8Rnd_Missile_AA),\
			QUOTE(NFL_32Rnd_Proton_Missiles),\
			QUOTE(240Rnd_CMFlare_Chaff_Magazine),QUOTE(240Rnd_CMFlare_Chaff_Magazine),QUOTE(240Rnd_CMFlare_Chaff_Magazine),QUOTE(240Rnd_CMFlare_Chaff_Magazine),\
			QUOTE(Laser_Battery),QUOTE(Laser_Battery),\
			QUOTE(95th_LAAT_Light_Cannon_Magazine),QUOTE(95th_LAAT_Light_Cannon_Magazine),QUOTE(95th_LAAT_Light_Cannon_Magazine)\
		};\
		class ACE_SelfActions: ACE_SelfActions {\
            class addResupplyBomb {\
				displayName = "Load Resupply Drop";\
				condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
				exceptions[] = {}; statement = ""; icon = "";\
				class addAmmoBomb {\
					displayName = "Load Ammo Drop";\
					condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
					exceptions[] = {};\
					statement = "[_target, _player, 'Ammo'] call AUX_95th_fnc_handleLoadResupplyBomb;";\
				};\
				class addMedicalBomb {\
					displayName = "Load Medical Drop";\
					condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
					exceptions[] = {};\
					statement = "[_target, _player, 'Medical'] call AUX_95th_fnc_handleLoadResupplyBomb;";\
				};\
				class addExplosivesBomb {\
					displayName = "Load Explosives Drop";\
					condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
					exceptions[] = {};\
					statement = "[_target, _player, 'Explosives'] call AUX_95th_fnc_handleLoadResupplyBomb;";\
				};\
				class addVehicleAmmoBomb {\
					displayName = "Load Vehicle Ammo Drop";\
					condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
					exceptions[] = {};\
					statement = "[_target, _player, 'VehicleAmmo'] call AUX_95th_fnc_handleLoadResupplyBomb;";\
				};\
				class addVehicleFuelBomb {\
					displayName = "Load Vehicle Fuel Drop";\
					condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
					exceptions[] = {};\
					statement = "[_target, _player, 'VehicleFuel'] call AUX_95th_fnc_handleLoadResupplyBomb;";\
				};\
			};\
		};