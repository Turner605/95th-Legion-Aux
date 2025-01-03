#define NEW_95TH_LAAT_TEXTURE(textureName) class ##textureName## {\
	displayName = QUOTE(textureName);\
	author=QUOTE(95th Aux Team);\
	factions[] = {QUOTE(AUX_95th_Legion_Faction_Vehicles)};\
	textures[] = {\
		QUOTE(\z\AUX_95th\addons\vehicles\laat\data\##textureName##\Hull.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laat\data\##textureName##\Wings.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laat\data\Default\Weapons.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laat\data\Default\Weapon_Details.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laat\data\##textureName##\Interior.paa)\
	};\
};