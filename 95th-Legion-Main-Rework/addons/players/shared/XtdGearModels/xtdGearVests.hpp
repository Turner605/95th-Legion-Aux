author = "95th Aux Team";
options[] = {"Player", "Type", "Rank", "Role"};

class Type {
	labels = "Type";
	alwaysSelectable = 1;
	values[] = {"Standard", "ARC", "Commando"};
	class Standard { label = "Standard"; description = "Standard Vests"; };
	class ARC { label = "ARC"; description = "ARC Vests"; };
	class Commando { label = "Commando"; description = "Commando Vests"; };
};

class Rank {
	labels = "Rank";
	values[] = {"CT", "Kama", "CS", "CL", "CIO"};
	class CT { label = "Trooper"; description = "Standard Vests"; };
	class Kama { label = "Kama"; description = "Kama Vests"; };
	class CS { label = "Sergeant"; description = "Sergeant Vests"; };
	class CL { label = "Lieutenant"; description = "Lieutenant Vests"; };
	class CIO { label = "CIO"; description = "CIO Vests"; };
};

class Role {
	labels = "Role";
	values[] = {"Rifleman" ,"Pilot", "Grenadier", "Jet", "Medic", "AT", "Heavy", "Marksman", "Riot", "Flame", "Stealth", "Tech", "Support", "Engineer", "Crewman", "Drone_Operator"};
	class Rifleman { label = "Rifleman"; description = "Rifleman Vest"; };
	class Grenadier { label = "Grenadier"; description = "Grenadier Vest"; };
	class Jet { label = "Jet"; description = "Jet Trooper Vest"; };
	class AT { label = "AT"; description = "AT Trooper Vest"; };
	class Heavy { label = "Heavy"; description = "Heavy Trooper Vest"; };
	class Marksman { label = "Marksman"; description = "Marksman Trooper Vest"; };
	class Riot { label = "Riot"; description = "Riot Trooper Vest"; };
	class Flame { label = "Flame"; description = "Flame Trooper Vest"; };
	class Stealth { label = "Stealth"; description = "Stealth Trooper Vest"; };
	class Tech { label = "Tech"; description = "Tech Trooper Vest"; };
	class Support { label = "Support"; description = "Support Trooper Vest"; };
	class Engineer { label = "Engineer"; description = "Engineer Trooper Vest"; };
	class Pilot { label = "Pilot"; description = "Pilot Vest"; };
	class Crewman { label = "Crewman"; description = "Crewman Vest"; };
	class Drone_Operator { label = "Drone"; description = "Drone Operator Trooper Vest"; };
};