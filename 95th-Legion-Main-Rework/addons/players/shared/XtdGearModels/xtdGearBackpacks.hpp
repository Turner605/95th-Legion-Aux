author = "95th Aux Team";
options[] = {"Player", "Type", "Role", "Visibility", "Radio"};

class Type {
	labels = "Type";
	alwaysSelectable = 1;
	values[] = {"Belt", "Rucksack", "Mini", "Micro", "JT12", "JT14", "Commando", "Flamer"};
	class Belt { label = "Belt"; description = "Belt Bag"; };
	class Rucksack { label = "Backpack"; description = "Rucksack"; };
	class Mini { label = "Mini"; description = "Mini Backpack"; };
	class Micro { label = "Micro"; description = "Micro Backpack"; };
	class JT12 { label = "JT12"; description = "JT12 Jetpack"; };
	class JT14 { label = "JT14"; description = "JT14 Jetpack"; };
	class Commando { label = "Commando"; description = "Commando Backpack"; };
	class Flamer { label = "Flamer"; description = "Flamer Backpack"; };
};

class Role {
	labels = "Type";
	values[] = {"Light", "Heavy", "Medic", "Ordnance"};
	class Light { label = "Light"; description = "Light Bag"; };
	class Heavy { label = "Heavy"; description = "Heavy Backpack"; };
	class Medic { label = "Medic"; description = "Medic Backpack"; };
	class Ordnance { label = "Ordnance"; description = "Ordnance Backpack"; };
};

class Visibility {
	labels = "Visibility";
	values[] = {"Shown", "Hidden"};
	class Shown { label = "Shown"; description = "Visible Backpack"; };
	class Hidden { label = "Hidden"; description = "Invisible Backpack"; };
};

class Radio {
	labels = "Radio";
	values[] = {"Enabled", "Disabled"};
	class Enabled { label = "Enabled"; description = "Enabled Radio"; };
	class Disabled { label = "Disabled"; description = "Disabled Radio"; };
};