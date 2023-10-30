#define NEW_SHARED_LAAT_CONFIG() scope=2;\
		tas_can_impulse=0;\
		ls_hasImpulse = 1;\
		ls_impulsor_boostSpeed_1 = 400;\
		ls_impulsor_boostSpeed_2 = 800;\
		scopecurator=2;\
		author=95th Aux Team;\
		faction=95th_Legion_Faction_Clones;\
		ace_cargo_space = 26;\
		ace_cargo_hasCargo = 1;\
        crew = 95th_Pilot_Unit_Trooper;\
		weapons[]={95th_LAAT_Light_Cannon,95th_LAAT_Heavy_Cannon,95th_LAAT_Hydras,3as_LAAT_Missile_AA,CMFlareLauncher};\
		magazines[]={\
			3as_PylonMissile_LAAT_8Rnd_Missile_AA,\
			NFL_32Rnd_Proton_Missiles,\
			240Rnd_CMFlare_Chaff_Magazine,240Rnd_CMFlare_Chaff_Magazine,240Rnd_CMFlare_Chaff_Magazine,240Rnd_CMFlare_Chaff_Magazine,\
			Laser_Battery,Laser_Battery,\
			95th_LAAT_Light_Cannon_Magazine,95th_LAAT_Light_Cannon_Magazine,95th_LAAT_Light_Cannon_Magazine\
		};\
		class TextureSources {\
			textureList[] = {Default,1,Jinter,0,Chip,0};\
			NEW_95TH_LAAT_TEXTURE(Default)};\
			NEW_95TH_LAAT_TEXTURE(Jinter)};\
			NEW_95TH_LAAT_TEXTURE(Chip)};\
		};\
		class UserActions {\
			class AddLAATRespawn {\
				displayName = "Toggle Mobile Respawn";\
				priority = 10; radius = 10; position = camera; showWindow = 0; onlyForPlayer = 0; shortcut = ''; condition = "alive this";\
				statement = "[this, player] spawn NFA_fnc_handleLAATRespawnToggle;";\
			};\
		};