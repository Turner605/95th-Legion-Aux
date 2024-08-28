class JLTS_CloneVestHolster;
class JLTS_CloneVestAirborne;
class JLTS_CloneVestRecon;
class JLTS_CloneVestSuspender;
class JLTS_CloneVestARC;
class 3AS_V_Katarn_Vest_Demo;
class 3AS_V_Katarn_Vest_Tech;
class 3AS_Katarn_Vest_Sniper;
class 3AS_Katarn_Vest_Team_Leader;

class JLTS_CloneVestReconOfficer;
class JLTS_CloneVestOfficer;
class JLTS_CloneVestOfficer2;
class JLTS_CloneVestKama;


class VestItem;
class ItemInfo;

#if VEST_STANDARD_SET == 1
    class AUX_95th_Vest_Standard_Rifleman_##PLAYER_NAME## : JLTS_CloneVestHolster {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
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
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
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
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
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
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
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

    class AUX_95th_Vest_Standard_Medic_##PLAYER_NAME## : JLTS_CloneVestAirborne {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            "",
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\medic.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
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
            Role = "Medic";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Standard_AT_##PLAYER_NAME## : JLTS_CloneVestAirborne {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            "",
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\at.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
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
            Role = "AT";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Heavy_##PLAYER_NAME## : JLTS_CloneVestAirborne {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            "",
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\heavy.paa) 
        };
        class ItemInfo: VestItem {
            uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
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
            Role = "Heavy";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Marksman_##PLAYER_NAME## : JLTS_CloneVestRecon {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\marksman.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
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
            Role = "Marksman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Riot_##PLAYER_NAME## : JLTS_CloneVestRecon {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\riot.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
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
            Role = "Riot";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Flame_##PLAYER_NAME## : JLTS_CloneVestRecon {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\flame.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
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
            Role = "Flame";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Stealth_##PLAYER_NAME## : JLTS_CloneVestRecon {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\stealth.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
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
            Role = "Stealth";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Support_##PLAYER_NAME## : JLTS_CloneVestRecon {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\support.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
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
            Role = "Support";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Standard_Tech_##PLAYER_NAME## : JLTS_CloneVestRecon {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\tech.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
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
            Role = "Tech";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Engineer_##PLAYER_NAME## : JLTS_CloneVestSuspender {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\engineer.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
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
            Role = "Engineer";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
    
    class AUX_95th_Vest_Standard_Crewman_##PLAYER_NAME## : JLTS_CloneVestSuspender {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\standard\crewman.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
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
            Role = "Crewman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if VEST_ARC_SET == 1
    class AUX_95th_Vest_ARC_Rifleman_##PLAYER_NAME## : JLTS_CloneVestARC {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\arc.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
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
            Type = "ARC";
            Rank = "CT";
            Role = "Rifleman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if VEST_COMMANDO_SET == 1
	class AUX_95th_Vest_Commando_Engineer_##PLAYER_NAME## : 3AS_V_Katarn_Vest_Demo { 
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\commando\engineer.paa) 
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Commando";
            Rank = "CT";
            Role = "Engineer";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
	};

	class AUX_95th_Vest_Commando_Tech_##PLAYER_NAME## : 3AS_V_Katarn_Vest_Tech { 
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\commando\tech.paa) 
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Commando";
            Rank = "CT";
            Role = "Tech";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
	};

	class AUX_95th_Vest_Commando_Marksman_##PLAYER_NAME## : 3AS_Katarn_Vest_Sniper { 
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\commando\marksman.paa) 
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Commando";
            Rank = "CT";
            Role = "Marksman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
	};

	class AUX_95th_Vest_Commando_Support_##PLAYER_NAME## : 3AS_Katarn_Vest_Team_Leader { 
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\commando\support.paa) 
        };
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Vests_Squad_##SQUAD_KEY##);
            Type = "Commando";
            Rank = "CT";
            Role = "Support";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
	};
#endif

#if VEST_OFFICER_SET == 1
    class AUX_95th_Vest_Sergeant_Rifleman_##PLAYER_NAME## : JLTS_CloneVestReconOfficer {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\officer\officer.paa), 
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\officer\sergeant_top.paa) 
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
            containerClass = "Supply190";
            hiddenSelections[]= { "camo1", "camo2" };
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
            Rank = "CS";
            Role = "Rifleman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Lieutenant_Rifleman_##PLAYER_NAME## : JLTS_CloneVestOfficer {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\officer\officer.paa)
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestCommander.p3d";
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
            Rank = "CL";
            Role = "Rifleman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_CIO_Rifleman_##PLAYER_NAME## : JLTS_CloneVestOfficer2 {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\officer\officer.paa)
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
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
            Rank = "CIO";
            Role = "Rifleman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Vest_Kama_Rifleman_##PLAYER_NAME## : JLTS_CloneVestKama {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Vests); 
	    maximumLoad=150;
        picture=QUOTE(\AUX_95th_Helmets\Data\Insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\vests\officer\officer.paa)
        };
        class ItemInfo: VestItem {
		    uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
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
            Rank = "Kama";
            Role = "Rifleman";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif