#define NEW_95TH_LAATC_TEXTURE(textureName) class textureName {\
	displayName = QUOTE(textureName);\
	author=QUOTE(95th Aux Team);\
	factions[] = {QUOTE(AUX_95th_Legion_Faction_Vehicles)};\
	textures[] = {\
		QUOTE(\z\AUX_95th\addons\vehicles\laatc\data\##textureName##\Hull.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laatc\data\##textureName##\Wings.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laatc\data\##textureName##\Top.paa),\
		QUOTE(\z\AUX_95th\addons\vehicles\laatc\data\##textureName##\Details_Front.paa)\
	};\
};
