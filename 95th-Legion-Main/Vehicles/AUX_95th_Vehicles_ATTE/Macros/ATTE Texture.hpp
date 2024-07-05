#define NEW_95TH_ATTE_TEXTURE(name) class ##name## {\
	displayName = ##name##;\
	author=95th Aux Team;\
	factions[] = {AUX_95th_Legion_Faction_Vehicles};\
	textures[] = {\
		\AUX_95th_Vehicles_ATTE\Data\##name##\Shell.paa,\
		\AUX_95th_Vehicles_ATTE\Data\##name##\Cockpit.paa,\
		\AUX_95th_Vehicles_ATTE\Data\##name##\Detail.paa,\
		\AUX_95th_Vehicles_ATTE\Data\##name##\Legs.paa,\
		\AUX_95th_Vehicles_ATTE\Data\##name##\Glass.paa,\
		\AUX_95th_Vehicles_ATTE\Data\##name##\Armor.paa\
	};
