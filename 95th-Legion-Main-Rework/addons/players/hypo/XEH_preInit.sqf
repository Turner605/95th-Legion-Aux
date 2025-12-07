#include "script_component.hpp"

private _playername = QUOTE(PLAYER_NAME);

private _macroArray = [
    ["AUX_95th_Helmet_P1_Basic_", HELMET_P1_BASIC],
    ["AUX_95th_Helmet_P1_Engineer_", HELMET_P1_ENGINEER],
    ["AUX_95th_Helmet_P1_ARF_", HELMET_P1_ARF],
    ["AUX_95th_Helmet_P1_Pilot_", HELMET_P1_PILOT],
    ["AUX_95th_Helmet_P1_SpecOps_", HELMET_P1_SPECOPS],
    ["AUX_95th_Helmet_P1_Hazard_", HELMET_P1_HAZARD],
    ["AUX_95th_Helmet_P1_Cold_Assault_", HELMET_P1_COLD_ASSAULT],
    ["AUX_95th_Helmet_P1_Commando_", HELMET_P1_COMMANDO],
    ["AUX_95th_Helmet_P2_Airborne_", HELMET_P2_AIRBORNE],
    ["AUX_95th_Helmet_P2_Barc_", HELMET_P2_BARC],
    ["AUX_95th_Helmet_P2_Marine_", HELMET_P2_MARINE_SET],
    ["AUX_95th_Helmet_P2_Marine_Modular_", HELMET_P2_MARINE_SET],
    ["AUX_95th_Helmet_P2_Marine_RTO_", HELMET_P2_MARINE_SET],



    ["AUX_95th_Uniform_P1_Basic_", UNIFORM_P1_BASIC],
    ["AUX_95th_Uniform_P1_MC_", UNIFORM_P1_MC],
    ["AUX_95th_Uniform_P1_Cold_Assault_", UNIFORM_P1_COLDASSAULT],
    ["AUX_95th_Uniform_P1_Commando_", UNIFORM_P1_COMMANDO],
    ["AUX_95th_Uniform_P1_Marine_", UNIFORM_P2_MARINE],

    ["AUX_95th_Backpack_Belt_Light_Shown_", BACKPACK_BELT_LIGHT],
    ["AUX_95th_Backpack_Belt_Light_Hidden_", BACKPACK_BELT_LIGHT],
    ["AUX_95th_Backpack_Belt_Light_RTO_Shown_", BACKPACK_BELT_LIGHT],
    ["AUX_95th_Backpack_Belt_Light_RTO_Hidden_", BACKPACK_BELT_LIGHT],

    ["AUX_95th_Backpack_Mini_Light_Shown_", BACKPACK_MINI_LIGHT],
    ["AUX_95th_Backpack_Mini_Light_Hidden_", BACKPACK_MINI_LIGHT],
    ["AUX_95th_Backpack_Mini_Light_RTO_Shown_", BACKPACK_MINI_LIGHT],
    ["AUX_95th_Backpack_Mini_Light_RTO_Hidden_", BACKPACK_MINI_LIGHT],

    ["AUX_95th_Backpack_Micro_Light_Shown_", BACKPACK_MICRO_LIGHT],
    ["AUX_95th_Backpack_Micro_Light_Hidden_", BACKPACK_MICRO_LIGHT],
    ["AUX_95th_Backpack_Micro_Light_RTO_Shown_", BACKPACK_MICRO_LIGHT],
    ["AUX_95th_Backpack_Micro_Light_RTO_Hidden_", BACKPACK_MICRO_LIGHT],

    ["AUX_95th_Backpack_Rucksack_Light_Shown_", BACKPACK_RUCKSACK_LIGHT],
    ["AUX_95th_Backpack_Rucksack_Light_Hidden_", BACKPACK_RUCKSACK_LIGHT],
    ["AUX_95th_Backpack_Rucksack_Light_RTO_Shown_", BACKPACK_RUCKSACK_LIGHT],
    ["AUX_95th_Backpack_Rucksack_Light_RTO_Hidden_", BACKPACK_RUCKSACK_LIGHT],

    ["AUX_95th_Backpack_Rucksack_Heavy_Shown_", BACKPACK_RUCKSACK_HEAVY],
    ["AUX_95th_Backpack_Rucksack_Heavy_Hidden_", BACKPACK_RUCKSACK_HEAVY],
    ["AUX_95th_Backpack_Rucksack_Heavy_RTO_Shown_", BACKPACK_RUCKSACK_HEAVY],
    ["AUX_95th_Backpack_Rucksack_Heavy_RTO_Hidden_", BACKPACK_RUCKSACK_HEAVY],

    ["AUX_95th_Backpack_Rucksack_Medic_Shown_", BACKPACK_RUCKSACK_MEDIC],
    ["AUX_95th_Backpack_Rucksack_Medic_Hidden_", BACKPACK_RUCKSACK_MEDIC],
    ["AUX_95th_Backpack_Rucksack_Medic_RTO_Shown_", BACKPACK_RUCKSACK_MEDIC],
    ["AUX_95th_Backpack_Rucksack_Medic_RTO_Hidden_", BACKPACK_RUCKSACK_MEDIC],

    ["AUX_95th_Backpack_Rucksack_Ordnance_Shown_", BACKPACK_RUCKSACK_ORDNANCE],
    ["AUX_95th_Backpack_Rucksack_Ordnance_Hidden_", BACKPACK_RUCKSACK_ORDNANCE],
    ["AUX_95th_Backpack_Rucksack_Ordnance_RTO_Shown_", BACKPACK_RUCKSACK_ORDNANCE],
    ["AUX_95th_Backpack_Rucksack_Ordnance_RTO_Hidden_", BACKPACK_RUCKSACK_ORDNANCE],

    ["AUX_95th_Backpack_JT12_Light_Shown_", JETPACK_JT12_LIGHT],
    ["AUX_95th_Backpack_JT12_Light_RTO_Shown_", JETPACK_JT12_LIGHT],

    ["AUX_95th_Backpack_JT12_Medic_Shown_", JETPACK_JT12_MEDIC],
    ["AUX_95th_Backpack_JT12_Medic_RTO_Shown_", JETPACK_JT12_MEDIC],

    ["AUX_95th_Backpack_JT14_Light_Shown_", JETPACK_JT14_LIGHT],
    ["AUX_95th_Backpack_JT14_Light_RTO_Shown_", JETPACK_JT14_LIGHT],

    ["AUX_95th_Backpack_Commando_Heavy_RTO_Shown_", BACKPACK_COMMANDO_HEAVY],
    ["AUX_95th_Backpack_Flamer_Light_RTO_Shown_", BACKPACK_FLAMER],
    ["AUX_95th_Backpack_Moral_Light_RTO_Shown_", BACKPACK_MORAL],



    ["AUX_95th_Vest_Standard_Rifleman_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Pilot_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Jet_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Grenadier_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Medic_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_AT_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Heavy_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Marksman_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Riot_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Flame_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Stealth_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Support_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Tech_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Engineer_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Crewman_", VEST_STANDARD_SET],
    ["AUX_95th_Vest_Standard_Drone_Operator_", VEST_STANDARD_SET],

    ["AUX_95th_Vest_ARC_Rifleman_", VEST_ARC_SET],

    ["AUX_95th_Vest_Sergeant_Rifleman_", VEST_OFFICER_SET],
    ["AUX_95th_Vest_Lieutenant_Rifleman_", VEST_OFFICER_SET],
    ["AUX_95th_Vest_CIO_Rifleman_", VEST_OFFICER_SET],
    ["AUX_95th_Vest_Kama_Rifleman_", VEST_OFFICER_SET],

    ["AUX_95th_Vest_Commando_Engineer_", VEST_COMMANDO_SET],
    ["AUX_95th_Vest_Commando_Tech_", VEST_COMMANDO_SET],
    ["AUX_95th_Vest_Commando_Marksman_", VEST_COMMANDO_SET],
    ["AUX_95th_Vest_Commando_Support_", VEST_COMMANDO_SET],

    ["AUX_95th_Vest_Marine_Rifleman_", VEST_MARINE_SET]

];

[_playername, _macroArray] call AUX_95th_fnc_addPlayerGearToArsenal;