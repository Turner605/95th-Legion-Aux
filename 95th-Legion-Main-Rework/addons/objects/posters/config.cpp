#include "script_component.hpp"

class CfgPatches {
    class DOUBLES(PREFIX,COMPONENT) {
        name = COMPONENT_NAME;
        units[] = {"AUX_95th_UserTexture_1m", "AUX_95th_UserTexture_10m"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"AUX_95th_main", "AUX_95th_objects_shared"};
        authors[] = {"Turner"};
        VERSION_CONFIG;
    };
};

class CfgVehicles {
	class NonStrategic;
	class UserTexture1m_F: NonStrategic {};

	class AUX_95th_UserTexture_1m: UserTexture1m_F {
		author = "95th Aux Team";
		displayName = "User Texture 1m";
		editorCategory = "AUX_95th_Objects_Generic";
		editorSubcategory = "AUX_95th_Objects_Misc";
		class Attributes {
			class ObjectTextureCustom0 {
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "getObjectTextures _this select 0";
			};
			class ObjectMaterialCustom0 {
				displayName = "$STR_3den_object_attribute_objectmaterialcustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objectmaterialcustom_tooltip";
				property = "ObjectMaterialCustom0";
				control = "Edit";
				expression = "_this setObjectMaterialGlobal [0,_value]";
				defaultValue = "getObjectMaterials _this select 0";
			};
		};
	};

	class AUX_95th_UserTexture_10m: AUX_95th_UserTexture_1m {
		author = "95th Aux Team";
		displayName = "User Texture 10m";
	};

};


#include "CfgEventHandlers.hpp"