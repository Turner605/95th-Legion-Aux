#define NEW_95TH_LAAT_TEXTURE(name) class ##name## {\
	displayName = ##name##;\
	author=95th Aux Team;\
	factions[] = {95th_Legion_Faction_Clones};\
	textures[] = { \
		\95th_Vehicles\Data\LAAT\##name##\Hull.paa,\
		\95th_Vehicles\Data\LAAT\##name##\Wings.paa,\
		\95th_Vehicles\Data\LAAT\Default\Weapons.paa,\
		\95th_Vehicles\Data\LAAT\Default\Weapon_Details.paa,\
		\95th_Vehicles\Data\LAAT\##name##\Interior.paa\
	};