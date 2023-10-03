#define NEW_SHARED_LAAT_CONFIG(name) class Components {\
			class SensorsManagerComponent {\
				class Components {\
					class IRSensorComponent: SensorTemplateIR {\
						class AirTarget { minRange = 10; maxRange = 5000; objectDistanceLimitCoef = -1; viewDistanceLimitCoef = 1; };\
						class GroundTarget { minRange = 10; maxRange = 5000; objectDistanceLimitCoef = -1; viewDistanceLimitCoef = 1; };\
						maxTrackableSpeed=125;\
						animDirection=mainGun;\
						angleRangeHorizontal=46;\
						angleRangeVertical=34;\
						aimDown=30;\
					};\
					class VisualSensorComponent: SensorTemplateVisual {\
						class AirTarget { minRange=0; maxRange=0; objectDistanceLimitCoef=-1; viewDistanceLimitCoef=1; };\
						class GroundTarget { minRange=0; maxRange=0; objectDistanceLimitCoef=1; viewDistanceLimitCoef=1; };\
						maxTrackableSpeed=70;\
						animDirection=mainGun;\
						angleRangeHorizontal=46;\
						angleRangeVertical=34;\
						aimdown=-0.25;\
					};\
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar {\
						class AirTarget { minRange=5000; maxRange=5000; objectDistanceLimitCoef=-1; viewDistanceLimitCoef=-1; };\
						class GroundTarget { minRange=4000; maxRange=4000; objectDistanceLimitCoef=-1; viewDistanceLimitCoef=-1; };\
						maxTrackableSpeed=125;\
						angleRangeHorizontal=180;\
						angleRangeVertical=90;\
						groundNoiseDistanceCoef=-1;\
						maxGroundNoiseDistance=-1;\
						minSpeedThreshold=0;\
						maxSpeedThreshold=0;\
						aimDown=30;\
					};\
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar { };\
					class LaserSensorComponent: SensorTemplateLaser { };\
					class NVSensorComponent: SensorTemplateNV { };\
				};\
			};\
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {\
				class Components: components {\
					class EmptyDisplay { componentType=EmptyDisplayComponent; };\
					class MinimapDisplay { componentType=MinimapDisplayComponent; resource=RscCustomInfoAirborneMiniMap; };\
					class CrewDisplay {\
						componentType=CrewDisplayComponent;\
						resource=RscCustomInfoCrew;\
					};\
					class UAVDisplay\
					{\
						componentType=UAVFeedDisplayComponent;\
					};\
					class VehiclePrimaryGunnerDisplay\
					{\
						componentType=TransportFeedDisplayComponent;\
						source=PrimaryGunner;\
					};\
					class VehicleMissileDisplay\
					{\
						componentType=TransportFeedDisplayComponent;\
						source=Missile;\
					};\
					class SensorDisplay\
					{\
						componentType=SensorsDisplayComponent;\
						range[]={4000,2000,16000,8000};\
						resource=RscCustomInfoSensors;\
					};\
				};\
			};\
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {\
				defaultDisplay=SensorDisplay;\
				class Components: components {\
					class EmptyDisplay{componentType=EmptyDisplayComponent;};\
					class MinimapDisplay {\
						componentType=MinimapDisplayComponent;\
						resource=RscCustomInfoAirborneMiniMap;\
					};\
					class CrewDisplay {\
						componentType=CrewDisplayComponent;\
						resource=RscCustomInfoCrew;\
					};\
					class UAVDisplay { componentType=UAVFeedDisplayComponent; };\
					class VehiclePrimaryGunnerDisplay { componentType=TransportFeedDisplayComponent; source=PrimaryGunner; };\
					class VehicleMissileDisplay\
					{\
						componentType=TransportFeedDisplayComponent;\
						source=Missile;\
					};\
					class SensorDisplay\
					{\
						componentType=SensorsDisplayComponent;\
						range[]={4000,2000,16000,8000};\
						resource=RscCustomInfoSensors;\
					};\
				};\
			};\
			class TransportCounterMeasuresComponent;\
		};\