#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_settings"};
        authors[] = {"Turner605", "Outcast", "Taun", "Stitch", "Lisek"};
        author = "95th Aux Team";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@AUX_95th_Extras";
        name = "95th Legion Extras";
        
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
