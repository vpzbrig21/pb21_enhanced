class CfgMainMenuSpotlight {
    class pb21_heidesturm {
        text = "Heidesturm";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_birthday\data\pb21_event1_co.paa";
        video = "\z\pb21\addons\mainmenu_birthday\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['94.130.245.243', 2602, 'event21'];";
        actionText = "Heidesturm";
        condition = "true";
    };
    class pb21_heudesturmtc {
        text = "Heidesturm TC";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_birthday\data\pb21_event1tc_co.paa";
        video = "\z\pb21\addons\mainmenu_birthday\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['94.130.245.243', 2612, 'event21'];";
        actionText = "Heidesturm TC";
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