#include "script_component.hpp"
//only executed on server

addMissionEventHandler ["ExtensionCallback", { 
  params ["_name", "_function", "_data"]; 
   
  if (_function == "AttendanceTracking") exitWith { 
    diag_log _data; 
  }; 
}]; 
 
"daa" callExtension "callbackReady"; 
