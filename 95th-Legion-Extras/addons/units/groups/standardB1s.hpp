class AUX_95th_Separatist_Army_B1_Standard {
    name = "B1 Battledroids (Standard)";

    class AUX_95th_Groups_Droid_B1_FireTeam {
        side = 0;
        faction = "AUX_95th_Separatist_Army";
        name="B1 Fire Team";
        class Unit0 {side = 0; vehicle = "JLTS_Droid_B1_E5"; rank = "SERGEANT"; position[] = {0,0,0};};
        class Unit1 {side = 0; vehicle = "JLTS_Droid_B1_E5"; rank = "PRIVATE"; position[] = {5,-5,0};};
        class Unit2 {side = 0; vehicle = "JLTS_Droid_B1_E5"; rank = "PRIVATE"; position[] = {-5,-5,0};};
        class Unit3 {side = 0; vehicle = "JLTS_Droid_B1_AR"; rank = "PRIVATE"; position[] = {10,-10,0};};
    };

    class AUX_95th_Groups_Droid_B1_SniperTeam {
        side = 0;
        faction = "AUX_95th_Separatist_Army";
        name="B1 Sniper Team";
        class Unit0 {side = 0; vehicle = "JLTS_Droid_B1_Sniper"; rank = "SERGEANT"; position[] = {0,0,0};};
        class Unit1 {side = 0; vehicle = "JLTS_Droid_B1_E5"; rank = "PRIVATE"; position[] = {5,-5,0};};
    };
    
    class AUX_95th_Groups_Droid_B1_AssaultTeam_AT {
        side = 0;
        faction = "AUX_95th_Separatist_Army";
        name="B1 Assault Team (AT/AA)";
        class Unit0 {side = 0; vehicle = "JLTS_Droid_B1_Commander"; rank = "SERGEANT"; position[] = {0,0,0};};
        class Unit1 {side = 0; vehicle = "JLTS_Droid_B1_E5"; rank = "PRIVATE"; position[] = {5,0,0};};
        class Unit2 {side = 0; vehicle = "JLTS_Droid_B1_Marine"; rank = "PRIVATE"; position[] = {5,5,0};};
        class Unit3 {side = 0; vehicle = "JLTS_Droid_B1_AT"; rank = "PRIVATE"; position[] = {0,5,0};};
        class Unit4 {side = 0; vehicle = "JLTS_Droid_B1_AR"; rank = "PRIVATE"; position[] = {-5,0,0};};
        class Unit5 {side = 0; vehicle = "JLTS_Droid_B1_SBB3"; rank = "PRIVATE"; position[] = {-5,-5,0};};
        class Unit6 {side = 0; vehicle = "JLTS_Droid_B1_Sniper"; rank = "PRIVATE"; position[] = {10,0,0};};
        class Unit7 {side = 0; vehicle = "JLTS_Droid_B1_E5"; rank = "PRIVATE"; position[] = {10,5,0};};
    };
};