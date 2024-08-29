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
	values[] = {"Basic", "MC", "ColdAssault", "Commando"};
	class Basic { label = "P1 Basic"; description = "Basic Uniform"; };
	class MC { label = "MC"; description = "Marshal Commander Uniform"; };
	class ColdAssault { label = "Cold"; description = "Cold Assault Uniform"; };
	class Commando { label = "Commando"; description = "Commando Uniform"; };
};