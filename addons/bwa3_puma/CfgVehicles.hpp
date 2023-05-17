class CfgVehicles {
	class All {
        class Turrets;
    };

    class AllVehicles: All {
        class ViewCargo;
        class NewTurret {
            class Turrets;
        };
    };

    class Land: AllVehicles {};

    class LandVehicle: Land {
        class CommanderOptics: NewTurret {
            class ViewOptics;
        };
    };

    class Tank: LandVehicle {
        class HitPoints;
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class Tank_F: Tank {
        class EventHandlers;
        class ViewOptics;
        class HitPoints: HitPoints {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
    };

	class BWA3_Puma_base: Tank_F {
        BWA3_Battalions[] = {212, 401};
        maximumLoad = 15000;
        class Turrets: Turrets {
			class MainTurret: MainTurret {
                weapons[] = {"BWA3_MK30","BWA3_MG4_vehicle","BWA3_Spike_LR"};
				magazines[] = {"BWA3_240Rnd_APFSDS_shells","BWA3_160Rnd_ABM_shells","BWA3_2000Rnd_556x45","BWA3_2000Rnd_556x45","BWA3_2Rnd_Spike_Lr"};
			};
		};
    };
};