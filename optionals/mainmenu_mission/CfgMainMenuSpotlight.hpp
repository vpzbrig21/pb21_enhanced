class CfgMainMenuSpotlight {
    class pb21_mission1 {
        text = "Mission 1";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_mission\data\pb21_mission1_co.paa";
        video = "\z\pb21\addons\mainmenu_mission\data\pb21_menuIntro_internal.ogv";
        action = "connectToServer ['94.130.245.243', 2312, 'papa21'];";
        actionText = "Missionsserver 1";
        condition = "true";
    };
    class pb21_mission2 {
        text = "Mission 2";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_mission\data\pb21_mission2_co.paa";
        video = "\z\pb21\addons\mainmenu_mission\data\pb21_menuIntro_internal.ogv";
        action = "connectToServer ['94.130.245.243', 2322, 'papa21'];";
        actionText = "Missionsserver 2";
        condition = "true";
    };
    class pb21_mission3 {
        text = "Mission 3";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_mission\data\pb21_mission3_co.paa";
        video = "\z\pb21\addons\mainmenu_mission\data\pb21_menuIntro_internal.ogv";
        action = "connectToServer ['94.130.245.243', 2332, 'papa21'];";
        actionText = "Missionsserver 3";
        condition = "true";
    };
    class pb21_mission4 {
        text = "Mission 4";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_mission\data\pb21_mission4_co.paa";
        video = "\z\pb21\addons\mainmenu_mission\data\pb21_menuIntro_internal.ogv";
        action = "connectToServer ['94.130.245.243', 2342, 'papa21'];";
        actionText = "Missionsserver 4";
        condition = "true";
    };
    // Remove default Spotlights
    delete Bootcamp;
    delete EastWind;
    delete ApexProtocol;
    class Orange_Campaign {condition = "false";};
    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    class Tacops_Campaign_01 {condition = "false";};
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_03;
    delete Tanks_Campaign_01;
    delete Contact_Campaign;
    delete OldMan;
    delete SP_FD14;
    class AoW_Showcase_Future {condition = "false";};
    delete AoW_Showcase_AoW;
    delete gm_campaign_01;
};