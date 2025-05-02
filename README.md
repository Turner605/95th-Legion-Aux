# 95th Aux Mod
The aux mod for the 95th Legion.

## Credits:
- [HEMTT Template](https://github.com/TACHarsis/hemtt-mod-template)
- [HTTP DLL](https://github.com/dedmen/DAA_Mod)
- [File System DLL](https://github.com/Vindicta-Team/FileXT/wiki)

## Links:
- [Trello](https://trello.com/b/kO1jeBKw/95th-legion)

## Internal Developers Setup Guide
To begin working on the aux mod, do the following.

- Step 1: [INSTALL HEMTT](https://hemtt.dev/installation/index.html)
- Step 2: Create a [GITHUB](https://github.com/) account
- Step 3: Install the git cmd and GUI:
  - [GIT](https://git-scm.com/downloads)
  - [GIT Desktop](https://desktop.github.com/download/)

# Creating new player gear
To create new player gear, do the following.

- Step 1: Copy the player template from "95th-Legion-Main-Rework\addons\players\ExamplePlayer" to "95th-Legion-Main-Rework\addons\players"
- Step 2: Rename the ExamplePlayer properties in "ExamplePlayer\script_component.hpp"
- Step 3: Modify the marked values in "ExamplePlayer\script_component.hpp" to enable (1) or disable (0) them.
- Step 4: (If needed) Modify the relevant squad in "95th-Legion-Main-Rework\addons\main\xtdGearSquads".
- Step 5: Tidy up by deleting any .paa files that you are not using.
