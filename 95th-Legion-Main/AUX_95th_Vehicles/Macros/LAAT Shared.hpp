#define NEW_SHARED_LAAT_CONFIG() scope=2;\
		tas_can_impulse=0;\
		ls_hasImpulse = 1;\
		ls_impulsor_boostSpeed_1 = 400;\
		ls_impulsor_boostSpeed_2 = 800;\
		scopecurator=2;\
		author=95th Aux Team;\
		faction=AUX_95th_Legion_Faction_Vehicles;\
		editorSubcategory=AUX_95th_Legion_Vehicles_Category_Air_Gunships;\
		ace_cargo_space = 26;\
		ace_cargo_hasCargo = 1;\
        crew = AUX_95th_Generic_Unit_P1_Basic_Pilot;\
		weapons[]={95th_LAAT_Light_Cannon,95th_LAAT_Heavy_Cannon,95th_LAAT_Hydras,3as_LAAT_Missile_AA,CMFlareLauncher};\
		magazines[]={\
			3as_PylonMissile_LAAT_8Rnd_Missile_AA,\
			NFL_32Rnd_Proton_Missiles,\
			240Rnd_CMFlare_Chaff_Magazine,240Rnd_CMFlare_Chaff_Magazine,240Rnd_CMFlare_Chaff_Magazine,240Rnd_CMFlare_Chaff_Magazine,\
			Laser_Battery,Laser_Battery,\
			95th_LAAT_Light_Cannon_Magazine,95th_LAAT_Light_Cannon_Magazine,95th_LAAT_Light_Cannon_Magazine\
		};\
		class TextureSources {\
			textureList[] = {Default,1,AUX_95th_76561198051916304,0,AUX_95th_76561198820607430,0,AUX_95th_76561198060130630,0};\
			NEW_95TH_LAAT_TEXTURE(Default)};\
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198051916304)};\
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198820607430)};\
			NEW_95TH_LAAT_TEXTURE(AUX_95th_76561198060130630)};\
		};\
		class ACE_SelfActions: ACE_SelfActions {\
            class addResupplyBomb {\
				displayName = "Load Resupply Drop";\
				condition = "_target call AUX_95th_fnc_checkIsNearResupplyPad";\
				exceptions[] = {}; statement = ''; icon = '';\
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