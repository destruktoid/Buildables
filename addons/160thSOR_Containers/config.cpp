class CfgPatches
{
    class 160thSOR_Containers
    {
        author = "destruktoid";
        units[] = {"DEST_Log_Box","DEST_Build_Box"};
        requiredVersion = 1.0;
        requiredAddons[] = {"ace_interaction","160th_SOR_Loadouts"};
    };
};

class CfgFunctions
{
    class DEST
    {
        class containers
        {
            file = "160thSOR_Containers\functions";
            class logCreate;
            class buildCreate;
        };
    };
};

class CfgVehicles
{
    class Land_Cargo20_military_green_F;
    class DEST_Log_Box : Land_Cargo20_military_green_F
    {
        editorCategory = "SOR_Cat_Supplies";
        editorSubcategory = "SOR_SubCat_SupplyContainers";
        vehicleClass = "SOR_SupplyBoxes";
        displayName = "Resupply Nexus";
        class ACE_Actions
        {
            class ACE_MainActions
            {
                displayname = "Interactions";
                selection = "";
                distance = 3;
                condition = "true";
                class ACE_DEST_Logistics
                {
                    displayName = "Supply Containers";
                    condition = "((vehicle player) isEqualTo player) && ((count attachedObjects player) == 0)";
                    statement = "";
                    distance = 3;
                    selection = "";
                    
                    class log_ammo
                    {
                        displayName = "Ammo";
                        condition = "true";
                        statement = "[_target,'SOR_A_Box_F'] spawn DEST_fnc_logCreate;";
                        showDisabled = 0;
                        distance = 3;
                    };
                    
                    class log_equip
                    {
                        displayName = "Equipment";
                        condition = "true";
                        statement = "[_target,'SOR_S_Box_F'] spawn DEST_fnc_logCreate;";
                        showDisabled = 0;
                        distance = 3;
                    };
                    
                    class log_exp
                    {
                        displayName = "Explosives";
                        condition = "true";
                        statement = "[_target,'SOR_E_Box_F'] spawn DEST_fnc_logCreate;";
                        showDisabled = 0;
                        distance = 3;
                    };
                    
                    class log_grenades
                    {
                        displayName = "Grenades";
                        condition = "true";
                        statement = "[_target,'SOR_G_Box_F'] spawn DEST_fnc_logCreate;";
                        showDisabled = 0;
                        distance = 3;
                    };
                    
                    class log_construction
                    {
                        displayName = "Construction";
                        condition = "true";
                        statement = "[_target,'DEST_Build_Box'] spawn DEST_fnc_logCreate;";
                        showDisabled = 0;
                        distance = 3;
                    };
                    
                    class log_launchers
                    {
                        displayName = "Launcher Boxes";
                        condition = "true";
                        statement = "";
                        showDisabled = 0;
                        distance = 3;
                        
                        class log_launchers_jav
                        {
                            displayName = "Javelin";
                            condition = "true";
                            statement = "[_target,'SOR_Launcher_Box_F_Javelin'] spawn DEST_fnc_logCreate;";
                            showDisabled = 0;
                            distance = 3;
                        };
                        
                        class log_launchers_sting
                        {
                            displayName = "Stinger";
                            condition = "true";
                            statement = "[_target,'SOR_Launcher_Box_F_Stinger'] spawn DEST_fnc_logCreate;";
                            showDisabled = 0;
                            distance = 3;
                        };
                        
                        class log_launchers_at
                        {
                            displayName = "AT";
                            condition = "true";
                            statement = "[_target,'SOR_Launcher_Box_F'] spawn DEST_fnc_logCreate;";
                            showDisabled = 0;
                            distance = 3;
                        };
                    };
                    
                    class log_med
                    {
                        displayName = "Medical Boxes";
                        condition = "true";
                        statement = "";
                        showDisabled = 0;
                        distance = 3;
                        
                        class log_med_des
                        {
                            displayName = "Desert";
                            condition = "true";
                            statement = "[_target,'SOR_M_Box_F'] spawn DEST_fnc_logCreate;";
                            showDisabled = 0;
                            distance = 3;
                        };
                        
                        class log_med_wood
                        {
                            displayName = "Woodland";
                            condition = "true";
                            statement = "[_target,'SOR_M_Box_F_W'] spawn DEST_fnc_logCreate;";
                            showDisabled = 0;
                            distance = 3;
                        };
                    };
                };
            };
        };
    };
    
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
                    condition = "((vehicle player) isEqualTo player) && ((count attachedObjects player) == 0)";
                    statement = "";
                    distance = 3;
                    selection = "";
                    
                    class build_sand_short
                    {
                        displayName = "SW Short";
                        condition = "true";
                        statement = "[_target,'Land_BagFence_Short_F',[0,2,0],180] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_sand_long
                    {
                        displayName = "SW Long";
                        condition = "true";
                        statement = "[_target,'Land_BagFence_Long_F',[0,2,0],180] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_sand_round
                    {
                        displayName = "SW Round";
                        condition = "true";
                        statement = "[_target,'Land_BagFence_Round_F',[0,2,0],180] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_barricde_short
                    {
                        displayName = "SB Short";
                        condition = "true";
                        statement = "[_target,'Land_SandbagBarricade_01_half_F',[0,2.5,0]] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_barricde_tall
                    {
                        displayName = "SB Tall";
                        condition = "true";
                        statement = "[_target,'Land_SandbagBarricade_01_hole_F',[0,2.5,0]] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_hedgehog
                    {
                        displayName = "Hedgehog";
                        condition = "true";
                        statement = "[_target,'Hedgehog',[0,2.5,0]] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                    
                    class build_razorwire
                    {
                        displayName = "Razorwire";
                        condition = "true";
                        statement = "[_target,'Land_Razorwire_F',[0,2.5,0]] spawn DEST_fnc_buildCreate;";
                        showDisabled = 0;
                        distance = 2;
                    };
                };
            };
        };
        
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_carryDirection = 0;
        
        class TransportItems{};		
        class TransportWeapons{};
        class TransportMagazines{};
        class TransportBackpacks{};
    };
};

//((vehicle player) isEqualTo player) && ((count attachedObjects player) == 0)
