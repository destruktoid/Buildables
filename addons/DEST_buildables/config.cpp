class CfgPatches
{
    class DEST_buildables
    {
        author[] = {"destruktoid"};
        units[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ace_interaction"};
    };
};

class CfgFunctions
{
    class DEST
    {
        class main
        {
            file = "DEST_buildables\functions";
            class place;
        };
    };
};



class CfgVehicles
{
    class Man;
    class CAManBase : Man
    {
        class EventHandlers
        {
            init = "SANDBAG_obj = objNull;"
        };
        
        class ACE_SelfActions
        {
            class ACE_DEST_Build
            {
                displayName = "Build Objects";
                condition = "true";
                statement = "";
                showDisabled = 0;
                
                class buildPlace
                {
                    displayName = "Place object";
                    condition = "(SANDBAG_obj in (attachedObjects player))";
                    statement = "player playMoveNow 'AinvPknlMstpSnonWnonDnon_medic_1'; waituntil {(animationState player != 'AinvPknlMstpSnonWnonDnon_medic_1')}; (findDisplay 46) displayRemoveEventHandler ['MouseZChanged', DEST_scrollEVH]; detach SANDBAG_obj; SANDBAG_obj = objNull; for '_i' from 1 to 5 do {player removeitem 'ACE_Sandbag_empty'};";
                    showDisabled = 0;
               };
                
                class buildCancel
                {
                    displayName = "Cancel placement";
                    condition = "(SANDBAG_obj in (attachedObjects player))";
                    statement = "(findDisplay 46) displayRemoveEventHandler ['MouseZChanged', DEST_scrollEVH]; detach SANDBAG_obj; deletevehicle SANDBAG_obj; SANDBAG_obj = objNull;";
                    showDisabled = 0;
                };
                
                class selLong
                {
                    displayName = "Place wall (Long)";
                    condition = "isNull SANDBAG_obj && (({_x == 'ACE_Sandbag_empty'} count items player) >= 5)";
                    statement = "['Land_BagFence_Long_F'] spawn DEST_fnc_place;";
                    showDisabled = 0;
                };
                
                class selShort
                {
                    displayName = "Place wall (Short)";
                    condition = "isNull SANDBAG_obj && (({_x == 'ACE_Sandbag_empty'} count items player) >= 5)";
                    statement = "['Land_BagFence_Short_F'] spawn DEST_fnc_place;";
                    showDisabled = 0;
                };
                
                class selRound
                {
                    displayName = "Place wall (Round)";
                    condition = "isNull SANDBAG_obj && (({_x == 'ACE_Sandbag_empty'} count items player) >= 5)";
                    statement = "['Land_BagFence_Round_F'] spawn DEST_fnc_place;";
                    showDisabled = 0;
                };
            };
        };
    };
};