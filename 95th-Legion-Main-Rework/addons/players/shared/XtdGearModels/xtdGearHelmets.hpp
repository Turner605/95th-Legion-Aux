author = "95th Aux Team";
options[] = {"Phase", "Type", "Player", "Variant"};

class Phase {
	alwaysSelectable = 1;
	labels = "Phase";
	values[] = {"P1","P2","Marine"};
	class P1 { label = "P1"; description = "Phase 1"; };
	class P2 { label = "P2"; description = "Phase 2"; };
};

class Type {
	alwaysSelectable = 1;
	labels = "Type";
	values[] = {"Basic", "P1_ARF", "P1_Engineer", "Pilot", "P1_SpecOps", "P1_Hazard", "P1_Cold_Assault", "P1_Commando", "P2_Airborne", "P2_Barc", "Marine"};
	class Basic { label = "Basic"; description = "Basic P1 Helmet"; };
	class P1_ARF { label = "ARF"; description = "ARF Helmet"; };
	class P1_Engineer { label = "Engineer"; description = "Engineer Helmet"; };
	class Pilot { label = "Pilot"; description = "Pilot Helmet"; };
	class P1_SpecOps { label = "SpecOps"; description = "SpecOps Helmet"; };
	class P1_Hazard { label = "Hazard"; description = "Hazard Helmet"; };
	class P1_Cold_Assault { label = "Cold Assault"; description = "Cold Assault Helmet"; };
	class P1_Commando { label = "Commando"; description = "Commando Helmet"; };
	class P2_Airborne { label = "Airborne"; description = "Airborne Helmet"; };
	class P2_Barc { label = "Barc"; description = "Barc Helmet"; };
	class Marine { label = "Marine"; description = "Marine Helmet"; };
};

class Variant {
	alwaysSelectable = 0;
	labels = "Variant";
	values[] = {"Standard","RTO","Modular"};
	class Standard { label = "Standard"; description = "Standard"; };
	class RTO { label = "RTO"; description = "RTO"; };
	class Modular { label = "Modular"; description = "Modular"; };
};