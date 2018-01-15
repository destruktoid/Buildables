private["_object","_class","_rel"];
params[
    ["_object",objNull],
    ["_class",""],
    ["_rel",[0,2,0]]
];


_obj = _class createVehicle (getPosATL _object);
[_obj, true, _rel, 180] call ace_dragging_fnc_setCarryable;