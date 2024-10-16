class AUX_95th_Shield_Small : 3as_planetaryshield_501w {
	displayName="Shield (Small)";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Shields";
};

class 3as_planetaryshield_NoE_50;
class AUX_95th_Shield_Test : 3as_planetaryshield_NoE_50 {
	displayName="Shield (Test)";
	editorCategory="AUX_95th_Objects";
	editorSubcategory="AUX_95th_Shields";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsMaterials[] = {"AUX_95th_Objects_Depricated\Data\Test Shield\shield50n2.rvmat"};

	class UVAnimations {
		class camo {
			type = "translation";
			source = "time";
			sourceAddress = "loop";
			section = "camo";
			minValue = 0;
			maxValue = 1;
			offset0[] = {0,0};
			offset1[] = {1,0};
		};
	};
};