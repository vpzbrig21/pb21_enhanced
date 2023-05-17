class CfgMainMenuSpotlight {
    class pb21_event1 {
        text = "Event 1";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_event\data\pb21_event1_co.paa";
        video = "\z\pb21\addons\mainmenu_event\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['94.130.245.243', 2402, 'event21'];";
        actionText = "Eventserver 1";
        condition = "true";
    };
    class pb21_event1tc {
        text = "Event 1 TC";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_event\data\pb21_event1tc_co.paa";
        video = "\z\pb21\addons\mainmenu_event\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['94.130.245.243', 2412, 'event21'];";
        actionText = "Eventserver 1 TC";
        condition = "true";
    };
    class pb21_event2 {
        text = "Event 2";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_event\data\pb21_event2_co.paa";
        video = "\z\pb21\addons\mainmenu_event\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['94.130.245.243', 2422, 'event21'];";
        actionText = "Eventserver 2";
        condition = "true";
    };
    class pb21_event2tc {
        text = "Event 2 TC";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu_event\data\pb21_event2tc_co.paa";
        video = "\z\pb21\addons\mainmenu_event\data\pb21_menuIntro_event.ogv";
        action = "connectToServer ['94.130.245.243', 2432, 'event21'];";
        actionText = "Eventserver 2 TC";
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