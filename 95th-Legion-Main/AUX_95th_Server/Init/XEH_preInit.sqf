addMissionEventHandler ["ExtensionCallback", { 
  params ["_name", "_function", "_data"]; 
   
  if (_function == "AttendanceTracking") exitWith { 
    diag_log _data; 
  }; 
}]; 
 
"daa" callExtension "callbackReady"; 
