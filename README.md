# 95th Legion Aux

## Adding new helmets:
To add new helmets you need to do the following:

- 95th-Legion-Main\AUX_95th_Helmets\Config\\(Name Of File).hpp
    - Add a new one line macro of the helmet type
- 95th-Legion-Main\AUX_95th_Helmets\config.cpp
    - Add to XtdGearModels with the helmets you want to display
- 95th-Legion-Main\AUX_95th_Objects\Init\XEH_preInit.sqf
    - Add name to the "_playerCustomsList" if not already in there

## Adding new vests:

To add new vests you need to do the following:
- 95th-Legion-Main\AUX_95th_Vests\Config\Officers.hpp
    - Add a new one line macro
- 95th-Legion-Main\AUX_95th_Vests\config.cpp
    - Add new changes in the XtdGearModels specifically only for the vests you want to show in the arsenal
- 95th-Legion-Main\AUX_95th_Objects\Init\XEH_preInit.sqf
    - Add the following lines with the name of your vest in the vests category
        - "AUX_95th_Vest_Sergeant_##name##"
        - "AUX_95th_Vest_Lieutenant_##name##"
        - "AUX_95th_Vest_CIO_##name##"
        - "AUX_95th_Vest_Kama_##name##"
- 95th-Legion-Aux\95th-Legion-Main\AUX_95th_Vests\Data\Officers\
    - Add the texture files in the correct path with the correct names, have a look at existing if unsure

## Credit Links:
- https://github.com/dedmen/DAA_Mod