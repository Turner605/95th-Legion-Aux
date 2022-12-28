class CfgPatches
{
	class 95th_Legion_Groups
	{
        author="95th Aux Team";
        name="95th Legion Groups";
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor"
		};
		units[] = {};
	};
};

class CfgGroups 
{
    class West 
    {
		name="$STR_A3_CfgGroups_West0";
        side=1;
        class 95th_Legion 
        {
            name = "95th Legion";
            class 95th_Infantry
            {
            	name = "Infantry";
				class 95th_FireTeam
				{
					side = 1;
					faction = "95th_Legion";
					name="Fire Team";
					class Unit0
					{
						side = 0;
						vehicle = "95th_Trooper_Sergeant";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "95th_Trooper_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "95th_Trooper_Base";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "95th_Trooper_Base";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
            	};
            };
        };
    };
};