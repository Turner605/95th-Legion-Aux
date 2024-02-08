#define NEW_95TH_LAAT_TEXTURE(name) class ##name## {\
	displayName = ##name##;\
	author=95th Aux Team;\
	factions[] = {AUX_95th_Legion_Faction_Vehicles};\
	textures[] = { \
		\AUX_95th_Vehicles\Data\LAAT\##name##\Hull.paa,\
		\AUX_95th_Vehicles\Data\LAAT\##name##\Wings.paa,\
		\AUX_95th_Vehicles\Data\LAAT\Default\Weapons.paa,\
		\AUX_95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa,\
		\AUX_95th_Vehicles\Data\LAAT\##name##\Interior.paa\
	};