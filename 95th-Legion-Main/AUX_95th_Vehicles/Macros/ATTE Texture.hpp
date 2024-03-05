#define NEW_95TH_ATTE_TEXTURE(name) class ##name## {\
	displayName = ##name##;\
	author=95th Aux Team;\
	factions[] = {AUX_95th_Legion_Faction_Vehicles};\
	textures[] = {\
		\AUX_95th_Vehicles\Data\ATTE\##name##\Shell.paa,\
		\AUX_95th_Vehicles\Data\ATTE\##name##\Cockpit.paa,\
		\AUX_95th_Vehicles\Data\ATTE\##name##\Detail.paa,\
		\AUX_95th_Vehicles\Data\ATTE\##name##\Legs.paa,\
		\AUX_95th_Vehicles\Data\ATTE\##name##\Glass.paa,\
		\AUX_95th_Vehicles\Data\ATTE\##name##\Armor.paa\
	};
