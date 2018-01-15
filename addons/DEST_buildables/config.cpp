class CfgPatches
{
    class 160thSOR_Buildables
    {
        author = "destruktoid";
        units[] = {"DEST_Build_Box"};
        requiredVersion = 1.0;
        requiredAddons[] = {"ace_interaction","160th_SOR_Loadouts"};
    };
};

class CfgFunctions
{
    class DEST
    {
        class main
        {
            file = "DEST_buildables\functions";
            class create;
        };
    };
};

class CfgVehicles
{
    class Box_NATO_Equip_F;
    class DEST_Build_Box : BOX_NATO_Equip_F
    {
        editorCategory = "SOR_Cat_Supplies";
        editorSubcategory = "SOR_SubCat_SupplyBoxes";
        vehicleClass = "SOR_SupplyBoxes";
        displayName = "Box [Construction]";
        class ACE_Actions
        {
            class ACE_MainActions
            {
                displayname = "Interactions";
                selection = "";
                distance = 2;
                condition = "true";
                class ACE_DEST_Build
                {
                    displayName = "Build Objects";
                    condition = "true";
                    statement = "";
                    distance = 3;
                    selection = "";
                    
                    class build_sand_short
                    {
                        displayName = "SW Short";
                        condition = "true";
                        statement = "[_target,'Land_BagFence_Short_F',[0,2,0]] spawn DEST_fnc_create;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_sand_long
                    {
                        displayName = "SW Long";
                        condition = "true";
                        statement = "[_target,'Land_BagFence_Long_F',[0,2,0]] spawn DEST_fnc_create;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_sand_round
                    {
                        displayName = "SW Round";
                        condition = "true";
                        statement = "[_target,'Land_BagFence_Round_F',[0,2,0]] spawn DEST_fnc_create;";
                        showDisabled = 0;
                        distance = 2;
                    };
                };
            };
        };
    };
};

//((vehicle player) isEqualTo player) && ((count attachedObjects player) == 0)