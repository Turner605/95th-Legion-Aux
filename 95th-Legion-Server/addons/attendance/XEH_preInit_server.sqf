#include "script_component.hpp"
//only executed on server

addMissionEventHandler ["ExtensionCallback", { 
  params ["_name", "_function", "_data"]; 
   
  if (_function == "AttendanceTracking") exitWith { 
    diag_log _data; 
  }; 

  if (_function == "AuditLogging") exitWith { 
    diag_log _data; 
    _data remoteExec ["systemChat", -2];
  }; 
}]; 
 
"daa" callExtension "callbackReady"; 
