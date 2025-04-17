params ["_auditLoggingWebhook"];

private _fileName = "_AUX_95th_Server_Variables.fxt";

[_fileName] call dss_fnc_open;

// Set Keys
[_fileName, "AuditLoggingWebhook", _auditLoggingWebhook] call dss_fnc_set;

// Write and close
[_fileName] call dss_fnc_write;
[_fileName] call dss_fnc_close;