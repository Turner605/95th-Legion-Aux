author = "95th Aux Team";
options[] = {"Phase", "Type", "Player"};

class Phase {
	alwaysSelectable = 1;
	labels = "Phase";
	values[] = {"P1","P2"};
	class P1 { label = "P1"; description = "Phase 1"; };
	class P2 { label = "P2"; description = "Phase 2"; };
};

class Type {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"P1_Basic", "P1_ARF", "P1_Engineer", "P1_Pilot", "P1_SpecOps", "P1_Hazard", "P1_Cold_Assault", "P1_Commando", "P2_Airborne"};
	class P1_Basic { label = "P1 Basic"; description = "Basic P1 Helmet"; };
	class P1_ARF { label = "ARF"; description = "ARF Helmet"; };
	class P1_Engineer { label = "Engineer"; description = "Engineer Helmet"; };
	class P1_Pilot { label = "P1 Pilot"; description = "P1 Pilot Helmet"; };
	class P1_SpecOps { label = "SpecOps"; description = "SpecOps Helmet"; };
	class P1_Hazard { label = "Hazard"; description = "Hazard Helmet"; };
	class P1_Cold_Assault { label = "Cold Assault"; description = "Cold Assault Helmet"; };
	class P1_Commando { label = "Commando"; description = "Commando Helmet"; };
	class P2_Airborne { label = "Airborne"; description = "Airborne Helmet"; };
};