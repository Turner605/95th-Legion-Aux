class CfgLights {
	class NFL_Proton_Rocket_Light {
		diffuse[] = {1,0.25,0.75};
		color[] = {1,0.6,0.3};
		ambient[] = {0,0,0};
		brightness = "2 * fireIntensity";
		size = 1;
		intensity = 1000;
		drawLight = 0;
		blinking = 0;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 100;
			hardLimitEnd = 200;
		};
	};
};