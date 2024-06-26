#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"pb21_main","bwa3_puma"};
        skipWhenMissingDependencies = 1;
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
