class JLTS_Clone_backpack;
class JLTS_Clone_belt_bag;
class JLTS_Clone_backpack_RTO;
class JLTS_Clone_RTO_pack;
class JLTS_Clone_LR_attachment;
class JLTS_Clone_jumppack_JT12;
class JLTS_Clone_jumppack_mc;

#if BACKPACK_BELT_LIGHT == 1
    class AUX_95th_Backpack_Belt_Light_Shown_##PLAYER_NAME## : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\belt\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Belt";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Belt_Light_Hidden_##PLAYER_NAME## : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Belt";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Belt_Light_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\belt\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Belt";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Belt_Light_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Belt";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if BACKPACK_RUCKSACK_LIGHT == 1
    class AUX_95th_Backpack_Rucksack_Light_Shown_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Light_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Light_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Light_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if BACKPACK_RUCKSACK_HEAVY == 1
    class AUX_95th_Backpack_Rucksack_Heavy_Shown_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\heavy.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Heavy_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Heavy_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\heavy.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Heavy_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if BACKPACK_RUCKSACK_MEDIC == 1
    class AUX_95th_Backpack_Rucksack_Medic_Shown_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\medic.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Medic_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Medic_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\medic.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Medic_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if BACKPACK_RUCKSACK_ORDNANCE == 1
    class AUX_95th_Backpack_Rucksack_Ordnance_Shown_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\ordnance.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Ordnance_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Ordnance_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\rucksack\ordnance.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Rucksack_Ordnance_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if BACKPACK_MINI_LIGHT == 1
    class AUX_95th_Backpack_Mini_Light_Shown_##PLAYER_NAME## : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\mini\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Mini";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Mini_Light_Hidden_##PLAYER_NAME## : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Mini";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Mini_Light_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\mini\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Mini";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Mini_Light_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Mini";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if BACKPACK_MICRO_LIGHT == 1
    class AUX_95th_Backpack_Micro_Light_Shown_##PLAYER_NAME## : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\micro\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Micro";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Micro_Light_Hidden_##PLAYER_NAME## : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Micro";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Micro_Light_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\micro\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Micro";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_Micro_Light_RTO_Hidden_##PLAYER_NAME## : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "Micro";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if JETPACK_JT12_LIGHT == 1
    class AUX_95th_Backpack_JT12_Light_Shown_##PLAYER_NAME## : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\jt12\light.paa) 
        };
        tf_hasLRradio=0;
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        JLTS_isJumppack = 0;
        NSM_jumppack_is_jumppack=1;
        NSM_jumppack_spam_delay=1;
        NSM_jumppack_energy_capacity=200;
        NSM_jumppack_recharge=4;
        NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};
        NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};
        NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "JT12";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_JT12_Light_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\jt12\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        JLTS_isJumppack = 0;
        NSM_jumppack_is_jumppack=1;
        NSM_jumppack_spam_delay=1;
        NSM_jumppack_energy_capacity=200;
        NSM_jumppack_recharge=4;
        NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};
        NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};
        NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "JT12";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if JETPACK_JT12_MEDIC == 1
    class AUX_95th_Backpack_JT12_Medic_Shown_##PLAYER_NAME## : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\jt12\medic.paa) 
        };
        tf_hasLRradio=0;
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        JLTS_isJumppack = 0;
        NSM_jumppack_is_jumppack=1;
        NSM_jumppack_spam_delay=1;
        NSM_jumppack_energy_capacity=200;
        NSM_jumppack_recharge=4;
        NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};
        NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};
        NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "JT12";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_JT12_Medic_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\jt12\medic.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        JLTS_isJumppack = 0;
        NSM_jumppack_is_jumppack=1;
        NSM_jumppack_spam_delay=1;
        NSM_jumppack_energy_capacity=200;
        NSM_jumppack_recharge=4;
        NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};
        NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};
        NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "JT12";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif

#if JETPACK_JT14_LIGHT == 1
    class AUX_95th_Backpack_JT14_Light_Shown_##PLAYER_NAME## : JLTS_Clone_jumppack_mc {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\jt14\light.paa) 
        };
        tf_hasLRradio=0;
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        JLTS_isJumppack = 0;
        NSM_jumppack_is_jumppack=1;
        NSM_jumppack_spam_delay=1;
        NSM_jumppack_energy_capacity=200;
        NSM_jumppack_recharge=4;
        NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};
        NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};
        NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "JT14";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };

    class AUX_95th_Backpack_JT14_Light_RTO_Shown_##PLAYER_NAME## : JLTS_Clone_jumppack_mc {
        author="95th Aux Team";
        displayName=QUOTE([95th] ##SQUAD_NAME## Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\##SQUAD_KEY##.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\##PLAYER_NAME##\data\backpacks\jt14\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        JLTS_isJumppack = 0;
        NSM_jumppack_is_jumppack=1;
        NSM_jumppack_spam_delay=1;
        NSM_jumppack_energy_capacity=200;
        NSM_jumppack_recharge=4;
        NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
        NSM_jumppack_effect_points[]={{"effect1",{0,0.60000002,1}},{"effect2",{0,0.60000002,1}}};
        NSM_jumppack_sound_ignite[]={"NSM_Main\sounds\cdv21Start.ogg"};
        NSM_jumppack_sound_land[]={"NSM_Main\sounds\cdv21End.ogg"};
        NSM_jumppack_sound_idle[]={"NSM_Main\sounds\cdv21Idle.ogg"};
        NSM_jumppack_jump_types[]={{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{12,5,10,0,1,0}}};
        class XtdGearInfo {
            model = QUOTE(AUX_95th_Backpacks_Squad_##SQUAD_KEY##);
            Type = "JT14";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(##PLAYER_NAME_BEAUTIFIED##);
        };
    };
#endif













