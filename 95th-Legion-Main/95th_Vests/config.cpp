#include "Macros\Basic Vests.hpp"
#include "Macros\Officer Vests.hpp"
#include "Macros\Special Vests.hpp"

class CfgPatches {
	class 95th_Legion_Vests {
        author="95th Aux Team";
        name="95th Legion Vests";
		requiredAddons[]= {
			"JLTS_characters_CloneArmor"
		};
		units[] = {};
	};
};

class XtdGearModels {
	class CfgWeapons {
		class 95th_Basic_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Rifleman" ,"Pilot", "Grenadier", "Jet", "Medic", "AT", "Heavy", "Marksman", "Riot", "Flame", "Stealth", "Tech", "Support", "Engineer", "Crewman"};
				class Rifleman { label = "Rifleman"; description = "Rifleman Vest"; };
				class Pilot { label = "Pilot"; description = "Pilot Vest"; };
				class Grenadier { label = "Grenadier"; description = "Grenadier Vest"; };
				class Jet { label = "Jet"; description = "Jet Trooper Vest"; };

				class AT { label = "AT"; description = "AT Trooper Vest"; };
				class Heavy { label = "Heavy"; description = "Heavy Trooper Vest"; };

				class Marksman { label = "Marksman"; description = "Marksman Trooper Vest"; };
				class Riot { label = "Riot"; description = "Riot Trooper Vest"; };
				class Flame { label = "Flame"; description = "Flame Trooper Vest"; };
				class Stealth { label = "Stealth"; description = "Stealth Trooper Vest"; };
				class Tech { label = "Tech"; description = "Tech Trooper Vest"; };
				class Support { label = "Support"; description = "Support Trooper Vest"; };

				class Engineer { label = "Engineer"; description = "Engineer Trooper Vest"; };
				class Crewman { label = "Crewman"; description = "Crewman Vest"; };
			};
		};

		class 95th_Officer_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Sergeant", "Lieutenant", "Zeus", "Turner", "Outcast"};
				class Sergeant { label = "Sergeant"; description = "Sergeant Vest"; };
				class Lieutenant { label = "Lieutenant"; description = "Lieutenant Vest"; };
				class Zeus { label = "Zeus"; description = "Zeus Vest"; };
				class Turner { label = "Turner"; description = "Turner's Vest"; };
				class Outcast { label = "Outcast"; description = "Outcast's Vest"; };
			};
		};

		class 95th_ARC_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Trooper"};
				class Trooper { label = "Trooper"; description = "ARC Trooper Vest"; };
			};
		};

		class 95th_Commando_Vests {
			label = "";
			author = "95th Aux Team";
			options[] = {"Type"};
			class Type {
				alwaysSelectable = 1;
				labels = "Type";
				values[] = {"Medic","Demo"};
				class Medic { label = "Medic"; description = "Medic Vest"; };
				class Demo { label = "Demo"; description = "Demo Vest"; };
			};
		};
	};
};

class cfgWeapons { 
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestSuspender;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestARC;

	class VestItem;
	class ItemInfo;

	NEW_95TH_VEST_HOLSTER_TYPE(Rifleman)};
	NEW_95TH_VEST_HOLSTER_TYPE(Pilot)};
	NEW_95TH_VEST_HOLSTER_TYPE(Grenadier)};
	NEW_95TH_VEST_HOLSTER_TYPE(Jet)};

	NEW_95TH_VEST_AIRBORNE_TYPE(Medic)};
	NEW_95TH_VEST_AIRBORNE_TYPE(AT)};
	NEW_95TH_VEST_AIRBORNE_TYPE(Heavy)};

	NEW_95TH_VEST_RECON_TYPE(Marksman)};
	NEW_95TH_VEST_RECON_TYPE(Riot)};
	NEW_95TH_VEST_RECON_TYPE(Flame)};
	NEW_95TH_VEST_RECON_TYPE(Stealth)};
	NEW_95TH_VEST_RECON_TYPE(Tech)};
	NEW_95TH_VEST_RECON_TYPE(Support)};

	NEW_95TH_VEST_SUSPENDER_TYPE(Engineer)};
	NEW_95TH_VEST_SUSPENDER_TYPE(Crewman)};

	NEW_95TH_VEST_RECON_NCO_TYPE(Sergeant)};
	NEW_95TH_VEST_OFFICER_LIEUTENANT_TYPE(Lieutenant)};
	NEW_95TH_VEST_OFFICER_ZEUS_TYPE(Zeus)};
	NEW_95TH_VEST_OFFICER_ZEUS_TYPE(Turner)};
	NEW_95TH_VEST_OFFICER_ZEUS_TYPE(Outcast)};

	NEW_95TH_VEST_ARC_TYPE(Trooper)};
	
	class 3AS_V_Katarn_Vest_Demo;
	class 95th_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo {
		displayName = "[95th] Commando Vest";
		hiddenSelectionsTextures[]={"\95th_Vests\Data\Commandos\Vest_Demo.paa"};
		class XtdGearInfo {
			model = "95th_Commando_Vests";
			Type = "Demo";
		};
	};

	class 3AS_V_Katarn_Vest_Tech;
	class 95th_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech {
		displayName = "[95th] Commando Vest";
		hiddenSelectionsTextures[]={"\95th_Vests\Data\Commandos\Vest_Medic.paa"};
		class XtdGearInfo {
			model = "95th_Commando_Vests";
			Type = "Medic";
		};
	};
}; 