class JLTS_Clone_backpack;
class JLTS_Clone_belt_bag;
class JLTS_Clone_backpack_RTO;
class JLTS_Clone_RTO_pack;
class JLTS_Clone_LR_attachment;
class JLTS_Clone_jumppack_JT12;
class JLTS_Clone_jumppack_mc;
class 3AS_B_Katarn_Backpack;
class ReammoBox;
class Bag_Base: ReammoBox{};

#if BACKPACK_BELT_LIGHT == 1
    class AUX_95th_Backpack_Belt_Light_Shown_##PLAYER_NAME : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Belt";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Belt_Light_Hidden_##PLAYER_NAME : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Belt";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Belt_Light_RTO_Shown_##PLAYER_NAME : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\belt\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Belt";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Belt_Light_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_belt_bag {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Belt";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_RUCKSACK_LIGHT == 1
    class AUX_95th_Backpack_Rucksack_Light_Shown_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Light_Hidden_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Light_RTO_Shown_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Light_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_RUCKSACK_HEAVY == 1
    class AUX_95th_Backpack_Rucksack_Heavy_Shown_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\heavy.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Heavy_Hidden_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Heavy_RTO_Shown_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\heavy.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Heavy_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=300;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Heavy";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_RUCKSACK_MEDIC == 1
    class AUX_95th_Backpack_Rucksack_Medic_Shown_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\medic.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Medic_Hidden_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Medic_RTO_Shown_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\medic.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Medic_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Medic";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_RUCKSACK_ORDNANCE == 1
    class AUX_95th_Backpack_Rucksack_Ordnance_Shown_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\ordnance.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Ordnance_Hidden_##PLAYER_NAME : JLTS_Clone_backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Ordnance_RTO_Shown_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\rucksack\ordnance.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Rucksack_Ordnance_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_backpack_RTO {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            type = "Rucksack";
            Role = "Ordnance";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_MINI_LIGHT == 1
    class AUX_95th_Backpack_Mini_Light_Shown_##PLAYER_NAME : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\mini\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Mini";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Mini_Light_Hidden_##PLAYER_NAME : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Mini";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Mini_Light_RTO_Shown_##PLAYER_NAME : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\mini\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Mini";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Mini_Light_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_RTO_pack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Mini";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_MICRO_LIGHT == 1
    class AUX_95th_Backpack_Micro_Light_Shown_##PLAYER_NAME : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\micro\light.paa) 
        };
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Micro";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Micro_Light_Hidden_##PLAYER_NAME : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_hasLRradio=0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Micro";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Micro_Light_RTO_Shown_##PLAYER_NAME : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\micro\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Micro";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_Micro_Light_RTO_Hidden_##PLAYER_NAME : JLTS_Clone_LR_attachment {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=250;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        model="\a3\weapons_f\empty.p3d";
        hiddenSelectionsTextures[]={""};
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Micro";
            Role = "Light";
            Visibility = "Hidden";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if JETPACK_JT12_LIGHT == 1
    class AUX_95th_Backpack_JT12_Light_Shown_##PLAYER_NAME : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\jt12\light.paa) 
        };
        tf_hasLRradio=0;
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        DSS_Jetpack_Dash_Power_Modifier = 1;
        DSS_Jetpack_Dash_Cost = 5;
        DSS_Jetpack_Max_Heat = 40;
        JLTS_isJumppack = 0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "JT12";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_JT12_Light_RTO_Shown_##PLAYER_NAME : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\jt12\light.paa) 
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
        DSS_Jetpack_Dash_Power_Modifier = 1;
        DSS_Jetpack_Dash_Cost = 5;
        DSS_Jetpack_Max_Heat = 40;
        JLTS_isJumppack = 0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "JT12";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if JETPACK_JT12_MEDIC == 1
    class AUX_95th_Backpack_JT12_Medic_Shown_##PLAYER_NAME : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\jt12\medic.paa) 
        };
        tf_hasLRradio=0;
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        DSS_Jetpack_Dash_Power_Modifier = 1;
        DSS_Jetpack_Dash_Cost = 5;
        DSS_Jetpack_Max_Heat = 40;
        JLTS_isJumppack = 0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "JT12";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_JT12_Medic_RTO_Shown_##PLAYER_NAME : JLTS_Clone_jumppack_JT12 {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\jt12\medic.paa) 
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
        DSS_Jetpack_Dash_Power_Modifier = 1;
        DSS_Jetpack_Dash_Cost = 5;
        DSS_Jetpack_Max_Heat = 40;
        JLTS_isJumppack = 0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "JT12";
            Role = "Medic";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if JETPACK_JT14_LIGHT == 1
    class AUX_95th_Backpack_JT14_Light_Shown_##PLAYER_NAME : JLTS_Clone_jumppack_mc {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\jt14\light.paa) 
        };
        tf_hasLRradio=0;
        DSS_Is_Jetpack = 1;
        DSS_Jetpack_Acceleration = 1;
        DSS_Jetpack_Resistance = 1.5;
        DSS_Jetpack_Dash_Power_Modifier = 1.5;
        DSS_Jetpack_Dash_Cost = 5;
        DSS_Jetpack_Max_Heat = 40;
        JLTS_isJumppack = 0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "JT14";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Disabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };

    class AUX_95th_Backpack_JT14_Light_RTO_Shown_##PLAYER_NAME : JLTS_Clone_jumppack_mc {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=150;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\jt14\light.paa) 
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
        DSS_Jetpack_Dash_Power_Modifier = 1.5;
        DSS_Jetpack_Dash_Cost = 5;
        DSS_Jetpack_Max_Heat = 40;
        JLTS_isJumppack = 0;
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "JT14";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_COMMANDO_HEAVY == 1
    class AUX_95th_Backpack_Commando_Heavy_RTO_Shown_##PLAYER_NAME : 3AS_B_Katarn_Backpack {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
	    maximumLoad=400;
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\commando\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Commando";
            Role = "Heavy";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif

#if BACKPACK_FLAMER == 1
    class AUX_95th_Backpack_Flamer_Light_RTO_Shown_##PLAYER_NAME : Bag_Base {
        author="95th Aux Team";
        displayName=QUOTE([95th] SQUAD_NUMBER SQUAD_NAME Backpacks); 
        WBK_BurnEm_FlamethrowerBaloons = "true";
        scope=2; 
        maximumLoad=250; 
        mass=80;
		model="\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
        picture=QUOTE(\z\AUX_95th\addons\players\shared\insignias\SQUAD_KEY.paa);
        hiddenSelections[]={"camo1"};
        hiddenSelectionsTextures[]={
            QUOTE(\z\AUX_95th\addons\players\PLAYER_NAME\data\backpacks\flamer\light.paa) 
        };
        tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range=16000;
        tf_subtype="digital_lr";
        class XtdGearInfo {
            model = QUOTE(DOUBLES(AUX_95th_Backpacks_Squad,SQUAD_KEY));
            Type = "Flamer";
            Role = "Light";
            Visibility = "Shown";
            Radio = "Enabled";
            Player = QUOTE(PLAYER_NAME_BEAUTIFIED);
        };
    };
#endif