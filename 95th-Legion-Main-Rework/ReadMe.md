# 95th Aux Mod
The aux mod for the 95th Legion.

## Credits:
- [HEMTT Template](https://github.com/TACHarsis/hemtt-mod-template)

## Internal Developers Setup Guide
Follow the following to allow building with HEMTT

- [INSTALL HEMTT](https://brettmayson.github.io/HEMTT/installation.html)

# Creating new player gear TODO
Follow the following to create new player gear.

Step 1: Copy the player template from "95th-Legion-Main-Rework\addons\players\ExamplePlayer" to "95th-Legion-Main-Rework\addons\players"
Step 2: Rename the ExamplePlayer properties in "ExamplePlayer\script_component.hpp"
Step 3: Modify the marked values in "ExamplePlayer\script_component.hpp" to enable (1) or disable (0) them.
Step 4: (If needed) Modify the relevant squad in "95th-Legion-Main-Rework\addons\main\xtdGearSquads".
Step 5: Tidy up by deleting any .paa files that you are not using.