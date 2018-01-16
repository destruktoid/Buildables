private["_object","_class","_rel"];
params[
    ["_object",objNull],
    ["_class",""],
    ["_rel",[0,2,0]],
    ["_dir",0]
];


_obj = _class createVehicle (getPosATL _object);
[_obj, true, _rel, _dir] call ace_dragging_fnc_setCarryable;