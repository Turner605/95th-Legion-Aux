#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        authors[] = {"Turner605", "Outcast", "Taun", "Stitch", "Lisek"};
        author = "95th Aux Team";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@AUX_95th";
        name = "95th Legion";
        
        author = "95th Aux Team";

        picture         = "title_co.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "https://discord.gg/xd6wmWeAHf"; // Website URL, that can accessed from the expansions menu 
        actionName      = "Discord";              // label of button/tooltip in extension menu
        description     = "The 95th Legion discord server."; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] = {1, 0.0, 0.86, 1};
    };
};

class CfgFactionClasses { 
    class AUX_95th_Separatist_Army {displayName = "[95th] Separatist Army Test"; scope=2; scopecurator=2; priority = 1; side = 1;};  
};

class CfgEditorCategories {
    class AUX_95th_Separatist_Army {displayName = "[95th] Separatist Army";};  
};

class CfgEditorSubcategories {
	class AUX_95th_Category_Light_Tanks{displayName="Light Tanks";};
	class AUX_95th_Category_Medium_Tanks{displayName="Medium Tanks";};
	class AUX_95th_Category_Heavy_Tanks{displayName="Heavy Tanks";};
	class AUX_95th_Category_APC{displayName="APCs";};
	class AUX_95th_Category_Speeders{displayName="Speeders";};
	class AUX_95th_Category_Drones{displayName="Drones";};
	class AUX_95th_Category_Gunships{displayName="Gunships";};
	class AUX_95th_Category_Fighters{displayName="Fighters";};
	class AUX_95th_Category_Artillery{displayName="Artillery";};
	class AUX_95th_Category_Turrets{displayName="Turrets";};
	class AUX_95th_Category_Statics{displayName="Statics";};

	class AUX_95th_Category_Droids_B1{displayName="Droids (B1)";};
	class AUX_95th_Category_Droids_Advanced{displayName="Droids (Advanced)";};
	class AUX_95th_Category_Droids_Specialist{displayName="Droids (Specialist)";};
	class AUX_95th_Category_Droids_Commando{displayName="Droids (Commando)";};

	class AUX_95th_Category_Humans{displayName="Humans";};
};
