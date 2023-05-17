#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"pb21_main","mts_presentation"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgMtsPresentationTopics.hpp"
