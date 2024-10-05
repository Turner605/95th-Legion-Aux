#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {
            "AUX_95th_SeparatistPolice_SquadLeader",
            "AUX_95th_SeparatistPolice_Rifleman",
            "AUX_95th_SeparatistPolice_Sniper",
            "AUX_95th_SeparatistPolice_Heavy",
            "AUX_95th_SeparatistPolice_Riot",
            "AUX_95th_SeparatistPolice_Transport_Flatbed",
            "AUX_95th_SeparatistPolice_Transport_Open",
            "AUX_95th_SeparatistPolice_Transport_Armoured",
            "AUX_95th_SeparatistPolice_APC",
            "AUX_95th_SeparatistPolice_Falcon"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "AUX_95th_main", 
            "AUX_95th_units_shared", 
            "optre_vehicles_air",
            "sc_wheeled",
            "sc_equipment"
        };
        authors[] = {"Turner"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgFactionClasses { 
    class AUX_95th_Faction_SeparatistPolice {displayName = "[95th] Separatist Police"; scope=2; scopecurator=2; priority = 1; side = 1;};  
};

class CfgEditorCategories{
	class AUX_95th_Faction_SeparatistPolice{displayName = "[95th] Separatist Police";};
};

class CfgEditorSubcategories {
	class AUX_95th_Faction_SeparatistPolice_Category_Ground_Infantry{displayName="Infantry";};
	class AUX_95th_Faction_SeparatistPolice_Category_Ground_APC{displayName="APCs";};
	class AUX_95th_Faction_SeparatistPolice_Category_Ground_Car{displayName="Cars";};
	class AUX_95th_Faction_SeparatistPolice_Category_Ground_Helicopter{displayName="Helicopters";};
};

class CfgVehicles {
    class SC_SE_MP_Officer;
    class SC_SE_MP_Rifleman_L;
    class SC_SE_MP_Rifleman_H;
    class SC_Scion_Empire_Metro_Police_Scion_Empire_Metro_Police_SWAT_Sniper;
    class SC_Scion_Empire_Metro_Police_Scion_Empire_Metro_Police_SWAT;
    
    class OPTRE_UNSC_falcon_PD;
    class SC_Scion_Empire_Metro_Police_SC_Metro_Police_G12_Flatbed;
    class SC_Scion_Empire_Metro_Police_SC_Metro_Police_G12_Open;
    class SC_Scion_Empire_Metro_Police_SC_Metro_Police_G12_Armored;
    class SC_Scion_Empire_Metro_Police_SC_Metro_Police_Sauru_APC;

    class AUX_95th_SeparatistPolice_SquadLeader : SC_SE_MP_Officer{
        displayName="Squad Leader";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Infantry";
        weapons[]={"WM_E11D", "Throw", "Put"};
        respawnWeapons[]={"WM_E11D", "Throw", "Put"};
        magazines[]={"WM_E11D_Mag", "WM_E11D_Mag", "WM_E11D_Mag", "WM_E11D_Mag", "WM_E11D_Mag"};
        respawnMagazines[]={"WM_E11D_Mag", "WM_E11D_Mag", "WM_E11D_Mag", "WM_E11D_Mag", "WM_E11D_Mag"};
    };

    class AUX_95th_SeparatistPolice_Rifleman : SC_SE_MP_Rifleman_L{
        displayName="Rifleman";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Infantry";
        weapons[]={"WM_E11", "Throw", "Put"};
        respawnWeapons[]={"WM_E11", "Throw", "Put"};
        magazines[]={"WM_E11_Mag", "WM_E11_Mag", "WM_E11_Mag", "WM_E11_Mag", "WM_E11_Mag"};
        respawnMagazines[]={"WM_E11_Mag", "WM_E11_Mag", "WM_E11_Mag", "WM_E11_Mag", "WM_E11_Mag"};
    };

    class AUX_95th_SeparatistPolice_Sniper : SC_Scion_Empire_Metro_Police_Scion_Empire_Metro_Police_SWAT_Sniper{
        displayName="Sniper";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Infantry";
        weapons[]={"WM_DLT19X", "Throw", "Put"};
        respawnWeapons[]={"WM_DLT19X", "Throw", "Put"};
        magazines[]={"WM_DLT19X_Magazine", "WM_DLT19X_Magazine", "WM_DLT19X_Magazine", "WM_DLT19X_Magazine", "WM_DLT19X_Magazine"};
        respawnMagazines[]={"WM_DLT19X_Magazine", "WM_DLT19X_Magazine", "WM_DLT19X_Magazine", "WM_DLT19X_Magazine", "WM_DLT19X_Magazine"};
    };

    class AUX_95th_SeparatistPolice_Heavy : SC_SE_MP_Rifleman_H{
        displayName="Heavy";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Infantry";
        weapons[]={"WM_T21", "Throw", "Put"};
        respawnWeapons[]={"WM_T21", "Throw", "Put"};
        magazines[]={"WM_T21_mag", "WM_T21_mag", "WM_T21_mag"};
        respawnMagazines[]={"WM_T21_mag", "WM_T21_mag", "WM_T21_mag"};
    };

    class AUX_95th_SeparatistPolice_Riot : SC_Scion_Empire_Metro_Police_Scion_Empire_Metro_Police_SWAT{
        displayName="Riot";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Infantry";
        weapons[]={"AUX_95th_Riot_Comet", "Throw", "Put"};
        respawnWeapons[]={"AUX_95th_Riot_Comet", "Throw", "Put"};
        magazines[]={"AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine"};
        respawnMagazines[]={"AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine", "AUX_95th_AUX_95th_Riot_Comet_Magazine"};
    };

    class AUX_95th_SeparatistPolice_Transport_Flatbed: SC_Scion_Empire_Metro_Police_SC_Metro_Police_G12_Flatbed{
        displayName="Transport (Flatbed)";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Car";
        crew="AUX_95th_SeparatistPolice_Rifleman";
    };

    class AUX_95th_SeparatistPolice_Transport_Open: SC_Scion_Empire_Metro_Police_SC_Metro_Police_G12_Open{
        displayName="Transport (Open)";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Car";
        crew="AUX_95th_SeparatistPolice_Rifleman";
    };

    class AUX_95th_SeparatistPolice_Transport_Armoured: SC_Scion_Empire_Metro_Police_SC_Metro_Police_G12_Armored{
        displayName="Transport (Armoured)";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Car";
        crew="AUX_95th_SeparatistPolice_Rifleman";
    };

    class AUX_95th_SeparatistPolice_APC: SC_Scion_Empire_Metro_Police_SC_Metro_Police_Sauru_APC{
        displayName="APC (Unarmed)";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_APC";
        crew="AUX_95th_SeparatistPolice_Rifleman";
    };

    class AUX_95th_SeparatistPolice_Falcon: OPTRE_UNSC_falcon_PD{
        displayName="Falcon";
        faction="AUX_95th_Faction_SeparatistPolice";
        editorCategory="AUX_95th_Faction_SeparatistPolice";
        editorSubcategory="AUX_95th_Faction_SeparatistPolice_Category_Ground_Helicopter";
        crew="AUX_95th_SeparatistPolice_Rifleman";
    };
};

#include "CfgEventHandlers.hpp"