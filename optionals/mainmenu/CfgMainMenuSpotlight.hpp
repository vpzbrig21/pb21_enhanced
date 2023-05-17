class CfgMainMenuSpotlight {
    class pb21_trubpl {
        text = "TrUbPl";
        textIsQuote = 0;
        picture = "\z\pb21\addons\mainmenu\data\pb21_trubpl_co.paa";
        video = "\z\pb21\addons\mainmenu\data\pb21_menuIntro_internal.ogv";
        action = "connectToServer ['94.130.245.243', 2302, 'papa21'];";
        actionText = "Truppenübungsplatz";
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