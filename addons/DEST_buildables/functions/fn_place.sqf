/*
Land_BagFence_Long_F
Land_BagFence_Round_F
Land_BagFence_Short_F
*/
private["_class"];
_class = _this select 0;

DEST_changeHeight = {
    _change = _this select 0;
    _nheight = (SANDBAG_obj getvariable "height") + (_change / 30);
    SANDBAG_obj attachto [player,[0,2,_nheight],"pelvis"];
    SANDBAG_obj setvariable ["height",_nHeight];
};

SANDBAG_obj = createvehicle [_class, [0,0,0], [], 0, "CAN_COLLIDE"]; 
SANDBAG_obj enableSimulation false;
SANDBAG_obj setvariable ["height",0];
SANDBAG_obj attachto [player,[0,2,0],"pelvis"]; 
SANDBAG_obj setDir 180;
initaction = ["sbg_pickup", "Deconstruct", "", {player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1"; waituntil {(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1")}; deletevehicle _target; for "_i" from 1 to 5 do {player additem "ACE_Sandbag_empty"};}, {isNull attachedTo (_this select 0)}] call ace_interact_menu_fnc_createAction;  
[SANDBAG_obj, 0, ["ACE_MainActions"], initaction] call ace_interact_menu_fnc_addActionToObject;
DEST_scrollEVH = (findDisplay 46) displayAddEventHandler ["MouseZChanged","[_this select 1] spawn DEST_changeHeight"];