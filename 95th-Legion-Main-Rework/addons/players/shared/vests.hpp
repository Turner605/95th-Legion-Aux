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

#if VEST_STANDARD_SET == 1
    class AUX_95th_Vest_Standard_Rifleman_##PLAYER_NAME## : JLTS_CloneVestHolster {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\rifleman.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
            containerClass = "Supply190";
            hiddenSelections[]= { "camo1" };
            mass=80;
            class HitpointsProtectionInfo {
                class Chest { HitpointName="HitChest"; armor=6; PassThrough=0.30000001; };
                class Legs { hitpointName="HitLegs"; armor=6; passThrough=0.30000001; };
                class Arms { hitpointName="HitArms"; armor=4; passThrough=0.30000001; };
            };
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Standard";
            Rank = "CT";
            Role = "Rifleman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Standard_Pilot_##PLAYER_NAME## : JLTS_CloneVestHolster {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\pilot.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
            containerClass = "Supply190";
            hiddenSelections[]= { "camo1" };
            mass=80;
            class HitpointsProtectionInfo {
                class Chest { HitpointName="HitChest"; armor=6; PassThrough=0.30000001; };
                class Legs { hitpointName="HitLegs"; armor=6; passThrough=0.30000001; };
                class Arms { hitpointName="HitArms"; armor=4; passThrough=0.30000001; };
            };
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Standard";
            Rank = "CT";
            Role = "Pilot";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Standard_Jet_##PLAYER_NAME## : JLTS_CloneVestHolster {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\jet.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
            containerClass = "Supply190";
            hiddenSelections[]= { "camo1" };
            mass=80;
            class HitpointsProtectionInfo {
                class Chest { HitpointName="HitChest"; armor=6; PassThrough=0.30000001; };
                class Legs { hitpointName="HitLegs"; armor=6; passThrough=0.30000001; };
                class Arms { hitpointName="HitArms"; armor=4; passThrough=0.30000001; };
            };
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Standard";
            Rank = "CT";
            Role = "Jet";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Standard_Grenadier_##PLAYER_NAME## : JLTS_CloneVestHolster {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\grenadier.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
            containerClass = "Supply190";
            hiddenSelections[]= { "camo1" };
            mass=80;
            class HitpointsProtectionInfo {
                class Chest { HitpointName="HitChest"; armor=6; PassThrough=0.30000001; };
                class Legs { hitpointName="HitLegs"; armor=6; passThrough=0.30000001; };
                class Arms { hitpointName="HitArms"; armor=4; passThrough=0.30000001; };
            };
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Standard";
            Rank = "CT";
            Role = "Grenadier";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif





	// NEW_95TH_VEST_AIRBORNE_TYPE(Medic)};
	// NEW_95TH_VEST_AIRBORNE_TYPE(AT)};
	// NEW_95TH_VEST_AIRBORNE_TYPE(Heavy)};

	// NEW_95TH_VEST_RECON_TYPE(Marksman)};
	// NEW_95TH_VEST_RECON_TYPE(Riot)};
	// NEW_95TH_VEST_RECON_TYPE(Flame)};
	// NEW_95TH_VEST_RECON_TYPE(Stealth)};
	// NEW_95TH_VEST_RECON_TYPE(Tech)};
	// NEW_95TH_VEST_RECON_TYPE(Support)};

	// NEW_95TH_VEST_SUSPENDER_TYPE(Engineer)};
	// NEW_95TH_VEST_SUSPENDER_TYPE(Crewman)};

	// NEW_95TH_VEST_ARC_TYPE(Trooper)};

	// class 3AS_V_Katarn_Vest_Demo;
	// class 95th_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo {
	// 	displayName = "[95th] Commando Vest";
	// 	hiddenSelectionsTextures[]={"\95th_Vests\Data\Commandos\Vest_Demo.paa"};
	// 	class XtdGearInfo {
	// 		model = "95th_Commando_Vests";
	// 		Type = "Demo";
	// 	};
	// };

	// class 3AS_V_Katarn_Vest_Tech;
	// class 95th_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech {
	// 	displayName = "[95th] Commando Vest";
	// 	hiddenSelectionsTextures[]={"\95th_Vests\Data\Commandos\Vest_Medic.paa"};
	// 	class XtdGearInfo {
	// 		model = "95th_Commando_Vests";
	// 		Type = "Medic";
	// 	};
	// };










