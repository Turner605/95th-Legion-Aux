params ["_requester"];

if (!isServer) exitWith {};

private _name = "HQ";

[[_name, _requester], {
	params ["_name", "_requester"];

	_requester addAction ["<t color='#00fb21'>Request Pickup</t>", {
		params ["_target","_caller","_id","_args"];
		_args params ["_name"];

		private _allPilots = [];
		_allPilots = allPlayers select {
			(side _x == blufor) &&
			((vehicle _x) isKindOf "Helicopter" || (vehicle _x) isKindOf "Plane")
		};

		[[_name], {
			params ["_name"];
			1 cutText ["<t color='#ffffff' size='1'>Pickup Requested from " + _name + ".</t>", "PLAIN", 2, true, true, true];
		}] remoteExec ["call", _allPilots];
	},[_name]];
}] remoteExec ["call", 0, true];