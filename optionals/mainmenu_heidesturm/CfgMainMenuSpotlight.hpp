class CfgMainMenuSpotlight {
    class pb21_heidesturm {
        text = "Heidesturm";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_birthday\data\pb21_heidesturm_co.paa";
        video = "\z\pb21\addons\mainmenu_birthday\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['23.88.70.217', 2602, 'event21'];";
        actionText = "Heidesturm";
        condition = "true";
    };
    class pb21_heudesturmtc {
        text = "Heidesturm TC";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_birthday\data\pb21_heidesturmtc_co.paa";
        video = "\z\pb21\addons\mainmenu_birthday\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['23.88.70.217', 2612, 'event21'];";
        actionText = "Heidesturm TC";
        condition = "true";
    };

    //deactivate all other menus
    class AoW_Showcase_AoW {condition = "false";};
    class AoW_Showcase_Future {condition = "false";};
    class ApexProtocol {condition = "false";};
    class Bootcamp {condition = "false";};
    class Contact_Campaign {condition = "false";};
    class EastWind {condition = "false";};
    class OldMan {condition = "false";};
    class Orange_Campaign {condition = "false";};
    class Orange_CampaignGerman {condition = "false";};
    class Orange_Showcase_IDAP {condition = "false";};
    class Orange_Showcase_LoW {condition = "false";};
    class SP_FD14 {condition = "false";};
    class Tacops_Campaign_01 {condition = "false";};
    class Tacops_Campaign_02 {condition = "false";};
    class Tacops_Campaign_03 {condition = "false";};
    class Tanks_Campaign_01 {condition = "false";};
    class gm_campaign_01 {condition = "false";};
};