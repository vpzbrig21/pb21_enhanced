class CfgVehicles {
    class Tank_F;
    class Wheeled_APC_F;
    class Car_F;
    class Truck_F: Car_F {};

    // Marder
    class Redd_Marder_1A5_base: Tank_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				shortName = "ZgKr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"crew","turret_[0,3]"};
                disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				shortName = "Kmpkr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"crew","turret_[0,3]"};
                disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				shortName = "Bv1";
				allowedPositions[] = {"crew","turret_[0,3]"};
				limitedPositions[] = {"cargo_1","cargo_2","cargo_3","turret_[0,1]","turret_[0,2]"};
				numLimitedPositions = 5;
				connectedByDefault = 1;
			};
			class Intercom_2 {
				displayName = "Bordverbindung";
				shortName = "Bv2";
				allowedPositions[] = {"cargo_1","cargo_2","cargo_3","turret_[0,1]","turret_[0,2]","turret_[0,3]"};
				limitedPositions[] = {"driver","gunner","commander"};
				numLimitedPositions = 3;
				connectedByDefault = 1;
			};
		};
		acre_hasInfantryPhone = 1;
		acre_infantryPhoneDisableRinging = 0;
		acre_infantryPhoneCustomRinging[] = {};
		acre_infantryPhoneIntercom[] = {"all"};
		acre_infantryPhoneControlActions[] = {"all"};
		acre_eventInfantryPhone = "QFUNC(noApiFunction)";
    };

    // Gepard
    class Redd_Tank_Gepard_1A2_base: Tank_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				shortName = "ZgKr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","commander","gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				shortName = "Kmpkr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","commander","gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				shortName = "Bv";
				allowedPositions[] = {"driver","commander","gunner"};
				disabledPositions[] = {};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		acre_hasInfantryPhone = 1;
		acre_infantryPhoneDisableRinging = 0;
		acre_infantryPhoneCustomRinging[] = {};
		acre_infantryPhoneIntercom[] = {"all"};
		acre_infantryPhoneControlActions[] = {"all"};
		acre_eventInfantryPhone = "QFUNC(noApiFunction)";
    };

    // Wiesel
    class Redd_Tank_Wiesel_1A4_MK20_base: Tank_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				shortName = "ZgKr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				shortName = "Kmpkr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				shortName = "Bv";
				allowedPositions[] = {"driver","gunner"};
				disabledPositions[] = {};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		acre_hasInfantryPhone = 0;
    };

    class Redd_Tank_Wiesel_1A2_TOW_base: Tank_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				shortName = "ZgKr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander","turret_[0,1]","turret_[1]"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				shortName = "Kmpkr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander","turret_[0,1]","turret_[1]"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				shortName = "Bv";
				allowedPositions[] = {"driver","gunner","commander","turret_[0,1]","turret_[1]"};
				disabledPositions[] = {};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
    };

    // TPz Fuchs
    class Redd_Tank_Fuchs_1A4_Base: Wheeled_APC_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				shortName = "ZgKr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","commander","gunner",{"ffv",{0,3}},{"Turret",{1},{"Turret",{2}}}};
                disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				shortName = "Kmpkr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","commander","gunner",{"ffv",{0,3}},{"Turret",{1},{"Turret",{2}}}};
                disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				shortName = "Bv";
				allowedPositions[] = {"driver","commander","gunner",{"ffv",{0,3}},{"Turret",{1},{"Turret",{2}}}};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		acre_hasInfantryPhone = 0;
    };

    // SpPz Luchs
    class rnt_sppz_2a2_luchs_Base: Wheeled_APC_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				shortName = "ZgKr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","commander","gunner","turret_[0]","turret_[0,0]","turret_[1]","turret_[2]"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				shortName = "Kmpkr";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","commander","gunner","turret_[0]","turret_[0,0]","turret_[1]","turret_[2]"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				shortName = "Bv";
				allowedPositions[] = {"driver","commander","gunner","turret_[0]","turret_[0,0]","turret_[1]","turret_[2]"};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		acre_hasInfantryPhone = 0;
    };

    // Wolf
    class Redd_Tank_LKW_leicht_gl_Wolf_Base: Car_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver",{"cargo",0}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver",{"cargo",0}};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AcreIntercoms	{
			class Intercom_1 {
				displayName = "Bordverbindung";
				allowedPositions[] = {};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		acre_hasInfantryPhone = 0;
    };

    // 5t LKW
    class rnt_lkw_5t_mil_gl_kat_i_base: Truck_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		acre_hasInfantryPhone = 0;
    };

    // 7t LKW
    class rnt_lkw_7t_mil_gl_kat_i_base: Truck_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		acre_hasInfantryPhone = 0;
    };

    class rnt_lkw_10t_mil_gl_kat_i_base: Truck_F {
        class AcreRacks	{
			class Rack_1 {
				displayName = "Zugkreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
			class Rack_2 {
				displayName = "Kompaniekreis";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		acre_hasInfantryPhone = 0;
    };
};