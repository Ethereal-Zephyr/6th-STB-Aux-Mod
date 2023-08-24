class cfgPatches
{
  class 6STB_6th_Shock_Trooper_Battalion
  {
    units[]={"6STB_109th_ArmorCrew","6STB_109th_Pilot","6STB_109th_AirCrew","6STB_109th_AirCrew_V","6STB_109th_AT_Specialist","6STB_109th_Autorifleman","6STB_109th_Breacher","6STB_109th_Marksman","6STB_109th_Medic","6STB_109th_RTO","6th_Gunfighter_Warlock","FA188_Warlock","6th_Pelican_ST","6th_M12_LRV","6th_Oryx","6th_APC77","6th_APC77_M"};
    weapons[]={"6STB_OPTRE_M7","6STB_OPTRE_M6G_SF_OPTRE_M6G_FlashlightOPTRE_M6G_Scope"};
    requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","ace_hearing","A3_Weapons_F","OPTRE_Weapons_MG","OPTRE_Weapons_Pistol","OPTRE_UNSC_Units_Army","A3_Characters_F","ace_medical_treatment"};
  };
};

class cfgFactionClasses
{
  class 6STB_6th_Shock_Trooper_Battalion
  {
    icon="";
    displayName = "6th Shock Trooper Battalion";
    side=1;
    priority=1;
  };
};

class cfgEditorCategories
{
	class 6th_Shock_Trooper_Battalion
	{
		displayName = "6th Shock Trooper Battalion";
	};
};

class cfgEditorSubcategories
{
	class 6STB_109th_M
	{
		displayName = "109th Marine Regiment";
	};
	class 6STB_INF
	{
		displayName = "Infantry";
	};
	class 6STB_Mechanized
	{
		displayName = "Mechanized";
	};
	class 6STB_Rotary
	{
		displayName = "Rotary";
	};
	class 6STB_FW
	{
		displayName = "Fixed Wing"
	};
};

class cfgWeapons
{
  class 6STB_MA5B;
  class 6STB_MA45ATAC;
  class 6STB_MA37K;
  class 6STB_M7;
  class 6STB_M73;
  class 6STB_M6C;
  class 6STB_M392;
};

class cfgVehicles
{	
	class OPTRE_UNSC_Marine_Pilot;
	class OPTRE_UNSC_Army_Soldier_Crewman_WDL;
	class VES_Rifleman_MA5B_URB;
	
  class 6STB_109th_ArmorCrew: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Armored Crewman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","Marine_Backpack","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","VES_HUD_Balaclava_G_Black"};
    backpack="";
  };
  class 6STB_109th_Pilot: OPTRE_UNSC_Marine_Pilot
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Aviator";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL","VES_CH252_URB_Vacuum_Gold","VES_M52A_URB_Vest_B","Marine_Backpack","OPTRE_NVG_UL"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL","VES_CH252_URB_Vacuum_Gold","VES_M52A_URB_Vest_B","OPTRE_NVG_UL"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_AirCrew: OPTRE_UNSC_Marine_Pilot
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Air Crewman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","Marine_Backpack","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","VES_HUD_Balaclava_G_Black"};
    backpack="Marine_Backpack";
  };
   class 6STB_109th_AirCrew_V: OPTRE_UNSC_Marine_Pilot
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Air Crewman (V)";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
     magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_CNM","VES_CH252_URB_Vacuum","VES_M52A_URB_Vest_B","Marine_Backpack","OPTRE_NVG_CNM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_CNM","VES_CH252_URB_Vacuum","VES_M52A_URB_Vest_B","OPTRE_NVG_CNM"};
    backpack="Marine_Backpack";
  };
	
	class 6STB_109th_Autorifleman: VES_Rifleman_MA5B_URB
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Autorifleman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M73","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_OPTRE_M73","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T"};
    respawnMagazines[]={"6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_A","Marine_Backpack","VES_NVG_COLLAR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_A","VES_NVG_COLLAR"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_AT_Specialist: VES_Rifleman_MA5B_URB
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment AT Specialist";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_MA37K","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
	respawnWeapons[]={"6STB_MA37K","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Grenadier_A","Marine_Backpack","VES_HUD_Balaclava_G_Beast"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Grenadier_A","VES_HUD_Balaclava_Beast"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_Breacher: VES_Rifleman_MA5B_URB
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Breacher";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M45ATAC","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M45ATAC","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    respawnMagazines[]={"OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Breacher_A","Marine_Backpack","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Breacher_A","VES_HUD_Balaclava_G_Black"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_Marksman: VES_Rifleman_MA5B_URB
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Marksman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M392","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M392","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_C","Marine_Backpack","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_C","G_Bandanna_blk"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_Medic: VES_Rifleman_MA5B_URB
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Corpsman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_MA37K","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA37K","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Medical","VES_M52A_URB_Corpsman_A","Medical_Satchel","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Medical","VES_M52A_URB_Corpsman_A","VES_HUD_Balaclava_G_Black"};
    backpack="Medical_Satchel";
  };
  class 6STB_109th_RTO: VES_Rifleman_MA5B_URB
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment RTO";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Radio","VES_M52A_URB_Rifleman_C","OPTRE_ANPRC_521_Black","OPTRE_HUD_g_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Radio","VES_M52A_URB_Rifleman_C","OPTRE_HUD_g_Glasses"};
    backpack="OPTRE_ANPRC_521_Black";
  };
	
	class LandVehicle;
	class OPTRE_M12_LRV;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
	};
	class OPTRE_M494: APC_Tracked_03_base_F
	{
	};
	class B_APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class AnimationSources;
	};
	class VES_IFV76_A: B_APC_Wheeled_01_cannon_F
	{
	};
	class VES_IFV76: VES_IFV76_A
	{
	};
	
	//Motorized
	class 6th_M12_LRV: OPTRE_M12_LRV
	{
		author="6th STB S-5";
		scope=2;
		scopeCurator=2;
		displayName="[6th] M12 LRV (ATACS)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\Warthog\ATACSFG\M12_Tombstone_Jungle_Upper.paa",
			"Vehicles\Ground\Warthog\Base\M12_Base_Lower.paa",
			"Vehicles\Ground\Warthog\ATACSFG\M12_Jungle_Turret.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};
	
	//Mechanized
	class 6th_APC77: VES_IFV76
	{
		displayName="APC-77 Badger (Transport)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\APC77\APC77.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CN_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_C_CO.paa"
		};
	};
	class 6th_APC77_M: 6th_APC77
	{
		displayName="APC-77 Badger (Medical)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\APC77_M\APC77_M.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CN_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_C_CO.paa"
		};
	};
	class 6th_Oryx: OPTRE_M494
	{
		scope=2;
		scopeCurator=2;
		author="R. Walker";
		displayName="[6th] Oryx IFV";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		side=1;
		LODDriverTurnedIn=1100;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="pip_commander_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=2.5;
				material=-1;
				name="telo";
				visual="hull";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class HitLTrack
			{
				armor=1.25;
				material=-1;
				name="pasL";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitRTrack
			{
				armor=1.25;
				material=-1;
				name="pasP";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
		};
		maxSpeed=100;
		normalSpeedForwardCoef=0.80000002;
		idleRpm=700;
		armor=600;
		damageResistance=0.02;
		crewVulnerable=0;
		crewExplosionProtection=1;
		armorLights=1;
		armorStructural=4;
		transportSoldier=6;
		forceHideDriver=1;
		driverForceOptics=0;
		viewdriverInExternal=1;
		getInAction="GetInMRAP_01";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic02",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic01",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright"
		};
		class UserActions
		{
			class CargoDoorOpen
			{
				userActionID=60;
				displayName="Open Cargo Door";
				displayNameDefault="Open Cargo Door";
				textToolTip="Open Cargo Door";
				position="cargodoor_axis";
				radius=6;
				priority=2;
				onlyForPlayer=0;
				condition="((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",1]";
				animPeriod=5;
			};
			class CargoDoorClose: CargoDoorOpen
			{
				userActionID=61;
				displayName="Close Cargo Door";
				displayNameDefault="Close Cargo Door";
				textToolTip="Close Cargo Door";
				priority=2;
				condition="((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",0]";
				animPeriod=5;
			};
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Oryx";
				displayName="Press SPACEBAR to Flip Oryx";
				position="";
				radius=6;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 2]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-12;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						gunBeg="usti hlavne3";
						gunEnd="konec hlavne3";
						weapons[]=
						{
							"OPTRE_M247H_RCWS",
							"Laserdesignator_mounted"
						};
						magazines[]=
						{
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"Laserbatteries"
						};
						turretInfoType="RscOptics_APC_Wheeled_01_gunner";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						memoryPointGunnerOutOptics="commanderview";
						gunnerForceOptics=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						class ViewOptics: RCWSOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1,7};
						};
						startEngine=0;
						viewGunnerInExternal=1;
						LODTurnedIn=1100;
						selectionFireAnim="zasleh3";
					};
				};
				memoryPointGun="usti hlavne2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				weapons[]=
				{
					"autocannon_40mm_CTWS",
					"OPTRE_M247T_Coax",
					"OPTRE_M670_ATGM_Launcher",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"SmokeLauncherMag"
				};
				minElev=-12;
				maxElev=35;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				selectionFireAnim="zasleh2";
				gun="maingun";
				body="mainturret";
				gunAxis="Osa Hlavne";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				LODTurnedIn=1100;
				turretAxis="OsaVeze";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3,4,7};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usePip=1;
			};
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="OPTRE_M503_30mm_Autocannon";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M670_ATGM_Launcher";
			};
			class CargoDoorAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class showCamonetHull
			{
				displayName="Attach Hull Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBags",
					1
				};
				mass=-50;
			};
			class showCamonetTurret
			{
				displayName="Attach Turret Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBagsTurret",
					1
				};
				mass=-50;
			};
			class showCamonetgun
			{
				displayName="Attach Gun Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags
			{
				displayName="Attach Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBagsTurret
			{
				displayName="Attach Turret Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetgun",
			0,
			"showCamonetTurret",
			0,
			"showBags",
			0,
			"showBagsTurret",
			0
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				hitpoint="Light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				hitpoint="Light_L_flare";
				useFlare=1;
			};
			class LightCarRearL01: Left
			{
				color[]={200,0,0};
				direction="rearlight_l_end";
				position="rearlight_l_flare";
				selection="rearlight_l";
				hitpoint="rearlight_l";
				flareSize=0.80000001;
				useFlare=1;
				intensity=2;
				class Attenuation
				{
					constant=0;
					hardLimitEnd=0;
					hardLimitStart=0;
					linear=0;
					quadratic=0;
					start=0;
				};
			};
			class LightCarRearR01: LightCarRearL01
			{
				direction="rearlight_r_end";
				position="rearlight_r_flare";
				selection="rearlight_r";
				hitpoint="rearlight_r";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Right",
				"Right2",
				"LightCarRearL01",
				"LightCarRearR01"
			}
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_armor_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_main_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_turret_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\scorpion_mg_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colordes
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colortund
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_armor_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_main_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_turret_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\scorpion_mg_co.paa",
			"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
		};
		crew="6STB_109th_ArmorCrew";
	};
	
	//Rotary
	class B_Heli_Attack_01_Dynamicloadout_F;
	class 6th_Gunfighter_Warlock: B_Heli_Attack_01_Dynamicloadout_F
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="[6th] Gunfighter (Warlock)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\V-1_Gunfighter.paa"
		};		
	};
	class VES_D77HTCI_A;
	class 6th_Pelican_ST: VES_D77HTCI_A
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="[6th] Pelican (Stormwind)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\V-2_Pelican.paa"
		};
	};
	
	//Fixed Wing
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplatePassiveRadar;
	class SensorTemplateActiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
	};
	class Plane_Base_F: Plane 
	{
		class AnimationSources;
		class HitPoints
		{
			class HitHull;
		};
		class Components;
		class EventHandlers;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
	};
	class FIR_FA18E_Base : Plane_Fighter_03_base_F
	{
		defaultUserMFDvalues[] = {0,0,0.15,1,0.15,1};			
		simulation = "airplaneX";
		model = "\FIR_FA18EF\FIR_F18E";
		displayName = "F/A-18E Super Hornet";
		faction = "BLU_F";
		crew = "FIR_FighterPilot_JHMCS";
		icon = "\FIR_FA18EF\icon.paa";
		picture = "\FIR_FA18EF\pic.paa";
		driverCanEject = 0;
		side = 1;
		author = "Firewill /	 EA18G Dev Team";
		driveoncomponent[] = {"wheel_1","wheel_2","wheel_3"};
		fuelCapacity = 1000;
		acceleration = 300;
		landingSpeed = 200;
		
		extCameraPosition[] = {0.0,3.0,-20.0};				
		
		driveraction = "FIR_FA18EF_Pilot";		
		driverLeftHandAnimName="throttle";
		driverRightHandAnimName="stick_pilot";
		driverleftleganimname = "pedal";
		driverrightleganimname = "pedal";		

		insideSoundCoef = 0.2;
		destrType = "DestructWreck";
		hiddenselections[]={"camo1","camo2","camo3","camo4","camo5","insignia","cam_tracking","cam_tracking_wso","mfd_tad","tad","mfd_overlay","mfd_overlay2","name_1","name_2","name_3","name_4","name_5","name_6","name_7","name_8","name_9","name_10","rank_tag","name_b_1","name_b_2","name_b_3","name_b_4","name_b_5","name_b_6","name_b_7","name_b_8","name_b_9","name_b_10","rank_b_tag","decal_nose","decal_wing","decal_tail","mirror_1_tex","mirror_2_tex","mirror_3_tex","mirror_4_tex"};
		hiddenselectionstextures[] = {"\FIR_FA18EF\skin\ac7\nose_co.paa","\FIR_FA18EF\skin\ac7\body_co.paa","\FIR_FA18EF\skin\ac7\fuse_co.paa","\FIR_FA18EF\skin\ac7\leftwing_co.paa","\FIR_FA18EF\skin\ac7\rightwing_co.paa"};

		AWS_ECM_STAT = 65;			

		class ADESData
		{
			ADESEnabled = 1;		
			NumberEnabled = 0; 
			NumberList[] = {"num_1","num_2","num_3"};
			EmblemEnabled = 1;
			KillmarkEnabled = 0; 
			NameEnabled = 1;			
			NameType = "Navy_Dual";
		};							
		
		fir_fa18ef_ecs_type = "new";
		
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,9.5,-1.5};
		LESH_WheelOffset[] = {0,-3};
		
		attenuationEffectType="PlaneAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\getin", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout", 0.562341, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"FIR_FA18EF\sounds\interior\int_start.ogg", 0.5, 1.0};
		soundEngineOnExt[] = {"FIR_FA18EF\sounds\exterior\other\start_exterior", 1.5, 1.0, 700};
		soundEngineOffInt[] = {"FIR_FA18EF\sounds\interior\18_shutdown_int.ogg", 1, 1.0};
		soundEngineOffExt[] = {"FIR_FA18EF\sounds\exterior\18_shutdown_ext", 2.5, 1.0, 500};
		soundLocked[] = {"\FIR_AirWeaponSystem_US\Sound\RWR\f14\locked.wss", 3, 1};
		soundIncommingMissile[] = {"\FIR_AirWeaponSystem_US\Sound\RWR\f14\mssl.wss", 3, 1};	
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", 0.794328, 1.0, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", 0.794328, 1.0, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", 0.630957, 1.0, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", 0.630957, 1.0, 100};
		soundSetSonicBoom[]={"Plane_Fighter_SonicBoom_SoundSet"};

		class Sounds
		{
			soundSets[]=
			{
				"rs_fa18ef_EngineLowExtFront_SoundSet",
				"rs_fa18ef_EngineLowExtRear_SoundSet",
				"rs_fa18ef_EngineLowExtMid_SoundSet",
				"rs_fa18ef_EngineHighExt_SoundSet",
				"rs_fa18ef_ForsageExt_SoundSet",
				"rs_fa18ef_ForsageExtFar_SoundSet",
				"rs_fa18ef_ForsageExtMid_SoundSet",
				"rs_fa18ef_ForsageExtClose_SoundSet",
				"rs_fa18ef_WindNoiseExt_SoundSet",
				"rs_fa18ef_EngineExt_Dist_Front_SoundSet",
				"rs_fa18ef_EngineExt_Middle_SoundSet",
				"rs_fa18ef_EngineExt_MiddleSpeed_SoundSet",
				"rs_fa18ef_EngineExt_Dist_Rear_SoundSet",
				"rs_fa18ef_LowThrottleDistant",
				"rs_fa18ef_EngineLowInt_SoundSet",
				"rs_fa18ef_EngineLowIntMid_SoundSet",
				"rs_fa18ef_EngineLowIntHigh_SoundSet",
				"rs_fa18ef_EngineHighInt_SoundSet",
				"rs_fa18ef_ForsageInt_SoundSet",
				"rs_fa18ef_WindNoiseInt_SoundSet",
				"rs_fa18ef_VelocityInt_SoundSet"
			};
		};				
		
		class ABSystem
		{
			AfterburnerEnabled = 1;			
			ABSwitchName = "ab_switch";			
			throttle_name = "Throttle_Speed";					
			ab_start_script = "FIR_FA18EF\scripts\AB\EA18_AB_start.sqf";	
			ab_end_script = "FIR_FA18EF\scripts\AB\EA18_AB_end.sqf";				
			maxspeed = 1900;							
			fuelconsume_ratio = 0.02;								
		};					
		
		class JettisonSystem
		{
			JettisonEnabled = 1;		
			JettisonType = 1; 			
			JettisonPylon = 1; 			
			fuelswitch_type = "variable"; 
			FuelswitchName = "fuelswitch";			
			JettisonScript = "FIR_FA18EF\scripts\Jettison\droptanks.sqf";		
			Fuel_Internal = 0.6;	
			Fueltank_code_enable = 1; 
			Fueltank_code = "fir_superhornet_fueltank"; 
			Fueltank_list[] = {"FIR_SuperHornet_Fueltank_Standard_P_1rnd_M"};
			Fueltank_Hardpoint[] = {2,3,5,7,8};  			
			Fueltank_Hardpoint_Offset[] = {-1.5,-1,0,1,1.5};
			Fueltank_hide[] = {"fueltank_1_hide","fueltank_2_hide","fueltank_3_hide","fueltank_4_hide","fueltank_5_hide"};
		};					
		
		class EjectionSystem
		{
			EjectionSeatEnabled = 1;										
			EjectionDual = 0;											
			EjectionSeatClass = "FIR_FA18EF_ejection_seat";								
			CanopyClass = "FIR_FA18EF_canopy";								
			EjectionSeatHideAnim = "ejection_seat_hide";								
			EjectionSeatRailAnim = "";								
			CanopyHideAnim = "r_canopy_hide";										
			EjectionSeatPos = "eject_pos";										
			CanopyPos = "eject_pos";										
			EjectionSoundExt = "Plane_Fighter_01_ejection_ext_sound";						
			EjectionSoundInt = "Plane_Fighter_01_ejection_in_sound";						
			EjectionParachute = "Steerable_Parachute_F";								
			EjectionSeatForce = 50;											
			CanopyForce = 30;											
		};					
		
		
		
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
  		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		getInAction = "";
		getOutAction = "";
		htMin = 60;
  		htMax = 1800;
  		afMax = 200;
  		mfMax = 100;
  		mFact = 0;
  		tBody = 0;
		radartype = 4;
		lockdetectionsystem = 8;
		incommingmissliedetectionsystem = 16;
		maxSpeed = 1900;
		armor = 100;
		armorStructured = 1;
		armorLights = 1;
		damageResistance = 0.004;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 3.5;
				explosionShielding = 3;
				name = "hull";
				passThrough = 1;
				visual = "Hit_Hull";
				radius = 0.45;
				minimalHit = 0.05;
				depends = "0";
				material = -1;
			};
			class HitEngine: HitHull
			{
				armor = 3;
				explosionShielding = 4.5;
				name = "engine_1";
				passThrough = 0.8;
				visual = "Hit_Engine_1";
				radius = 0.6;
				minimalHit = 0.05;
			};
			class HitEngine2: HitHull
			{
				armor = 3;
				explosionShielding = 4.5;
				name = "engine_2";
				passThrough = 0.8;
				visual = "Hit_Engine_2";
				radius = 0.6;
				minimalHit = 0.05;
			};			
			class HitAvionics: HitHull
			{
				armor = 1.5;
				explosionShielding = 4;
				name = "avionics";
				passThrough = 0.4;
				visual = "";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitFuel: HitHull
			{
				armor = 4;
				explosionShielding = 5;
				name = "fuel_1";
				passThrough = 0.6;
				visual = "";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitFuel2: HitFuel
			{
				armor = 4;
				explosionShielding = 5;
				name = "fuel_2";
				passThrough = 0.6;
				visual = "";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitLAileron: HitHull
			{
				armor = 1.8;
				explosionShielding = 3.5;
				name = "aileron_L";
				passThrough = 0.3;
				visual = "aileron_L";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitRAileron: HitLAileron
			{
				armor = 1.8;
				explosionShielding = 3.5;
				name = "aileron_R";
				passThrough = 0.3;
				visual = "aileron_R";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitLCRudder: HitHull
			{
				armor = 1.8;
				explosionShielding = 3.5;
				name = "rudder_1";
				passThrough = 0.3;
				visual = "rudder_1";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitRRudder: HitHull
			{
				armor = 1.8;
				explosionShielding = 3.5;
				name = "rudder_2";
				passThrough = 0.3;
				visual = "rudder_2";
				radius = 0.35;
				minimalHit = 0.05;
			};			
			class HitLCElevator: HitHull
			{
				armor = 1.8;
				explosionShielding = 3.5;
				name = "elev_L";
				passThrough = 0.3;
				visual = "elev_L";
				radius = 0.35;
				minimalHit = 0.05;
			};
			class HitRElevator: HitHull
			{
				armor = 1.8;
				explosionShielding = 3.5;
				name = "elev_R";
				passThrough = 0.3;
				visual = "elev_R";
				radius = 0.35;
				minimalHit = 0.05;
			};			
		};		
		irScanRangeMin = 100;
		irScanRangeMax = 45000;
		irScanToEyeFactor = 3;
		draconicForceXCoef = 6.0;
		draconicForceYCoef = 8.5;
		draconicForceZCoef = 8.5;
		draconicTorqueXCoef = 2.5;
		draconicTorqueYCoef = 2.5;		
		aileronSensitivity = 0.8;
		elevatorSensitivity = 1.0;
		aileronCoef[] = {
			0,		
			0.8,	
			0.9,	
			1.0,	
			1.1,	
			1.2,	
			1.2,	
			1.3,	
			1.3,	
			1.3,	
			1.4,	
			1.4,	
			1.4		
		};		
		elevatorCoef[] = {	
			0,		
			0.8,	
			0.9,	
			1.0,	
			1.1,	
			1.2,	
			1.2,	
			1.3,	
			1.3,	
			1.3,	
			1.4,	
			1.4,	
			1.4		
		};		
		thrustCoef[] = {0.2, 0.5, 1.3, 1.3, 1.5, 1.7, 1.7, 1.4, 1.4, 1.3, 1.1, 1.1, 1, 1, 1, 1};
		wheelSteeringSensitivity = 2.5;	
		altFullForce = 15000;		
		altNoForce = 18000;	
		flapsFrictionCoef=0.31999999;
		angleOfIndicence=0.052359872;
		
		AWS_MFD_OVERLAY_TGP = "\FIR_FA18EF\data\cockpit\MFD_TGP.paa";
		AWS_MFD_OVERLAY_MSSL = "\FIR_A10C\cockpit\mfd_tgp_ca.paa";
		AWS_MFD_OVERLAY_TAD = "\FIR_FA18EF\data\cockpit\MFD_HSD.paa";					
				
		
		tailHook = true;			
		class CarrierOpsCompatability
		{
			ArrestHookAnimationList[] = {"tailhook"};
			ArrestHookAnimationStates[] = {1,0.53,0};
			ArrestHookMemoryPoint = "pos_tailhook";
			ArrestMaxAllowedSpeed = 275;
			ArrestSlowDownStep = 0.8;
			ArrestVelocityReduction = -12;
			LaunchAccelerationStep = 0.05;
			LaunchBarMemoryPoint = "pos_gear_f_hook";
			LaunchVelocity = 215;
			LaunchVelocityIncrease = 7;		
		};
		
		class AircraftAutomatedSystems
		{
			wingAutoUnFoldSpeed = 40;
			wingFoldAnimations[] = {"Leftwing","Rightwing"};
			wingStateControl = 1;
			wingStateFolded = 1;
			wingStateUnFolded = 0;			
		};		
		
		class AMSData
		{
			AMSEnabled = 1;									
			DialogClass= "AMS_New_GUI"; 
			AircraftBase = "FIR_FA18E_Base";
			HardpointPicture = "FIR_FA18EF\UI\fa18f_loadout_ca.paa";
			CustomPreset_Hashmap = "FIR_FA18E_CustomPreset_Hashmap";
			loadout_pre = "FIR_FA18EF\scripts\Loadout\FA18EF_Loadout_Pre.sqf";
			loadout_apply = "FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_Loadout_Apply.sqf";		
			loadout_post = "FIR_FA18EF\scripts\Loadout\FA18EF_Loadout_Post.sqf";
			CustomFuelEnabled = 1;
			CustomFuelScript = "FIR_FA18EF\scripts\Loadout\FA18EF_Refuel.sqf";		
		};			
	
		class ARSData
		{
			ARSEnabled = 1;									
			ARS_CBARS_Offset[] = {-0.64,-31.7,-3.85};					
			ARS_Point = "refuel_probe";
			ARS_Type = "probe";
		};							
		
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\FIR_FA18EF\UI\f18_ui_ca.paa";
				class Presets 
				{
					class Empty 
					{
						displayName = "Empty";
						dataname = "Empty";
						attachment[] = {};
					};
					class Standard
					{
						displayName = "Standard";
						dataname = "Standard";						
						attachment[] = {"FIR_AIM9X_P_1rnd_M", "FIR_AIM120_LAU115_P_1rnd_M", "FIR_AIM120_LAU115_P_1rnd_M", "FIR_SuperHornet_Fueltank_Standard_P_1rnd_M","FIR_AIM120_P_1rnd_M","FIR_SuperHornet_Fueltank_Standard_P_1rnd_M","FIR_AIM120_P_1rnd_M","FIR_SuperHornet_Fueltank_Standard_P_1rnd_M","FIR_AIM120_LAU115_P_1rnd_M","FIR_AIM120_LAU115_P_1rnd_M","FIR_AIM9X_P_1rnd_M"};
					};							
				};							
				class pylons
				{
					class STA1 
					{
						hardpoints[] = {"FIR_FA18EF_Wingtip_HP","FIR_MISC"};
						attachment = "FIR_AIM9X_P_1rnd_M";
						priority = 5;
						maxweight = 150;
						UIposition[] = {0.35,0.0};
                        turret[] = {}; 	
					};					
					class STA2 
					{
						hardpoints[] = {"FIR_FA18EF_Combined_HP","FIR_MISC"};
						attachment = "FIR_AIM120_LAU115_P_1rnd_M";
						priority = 5;
						maxweight = 500;
						UIposition[] = {0.35,0.05};
                        turret[] = {}; 		
					};
					class STA3: STA1
					{
						hardpoints[] = {"FIR_FA18EF_Combined_HP","FIR_FA18EF_Fueltank_HP","FIR_MISC"};
						priority = 4;
						attachment = "FIR_AIM120_LAU115_P_1rnd_M";
						maxweight = 1000;
						UIposition[] = {0.35,0.1};						
					};
					class STA4: STA1
					{
						hardpoints[] = {"FIR_FA18EF_Combined_HP","FIR_FA18EF_Fueltank_HP","FIR_MISC"};
						attachment = "FIR_SuperHornet_Fueltank_Standard_P_1rnd_M";
						priority = 3;						
						maxweight = 1500;
						UIposition[] = {0.35,0.15};						
					};
					class STA5: STA1 
					{
						hardpoints[] = {"FIR_FA18EF_AA_HP","FIR_FA18EF_Aux_HP","FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
						priority = 2;								
						maxweight = 200;
						UIposition[] = {0.35,0.20};						
					};
					class STA6: STA1 
					{
						hardpoints[] = {"FIR_FA18EF_Fueltank_HP","FIR_FA18EF_Under_HP","FIR_MISC"};
						attachment = "FIR_SuperHornet_Fueltank_Standard_P_1rnd_M";						
						priority = 1;						
						maxweight = 1500;
						UIposition[] = {0.35,0.25};
					};					
					class STA7: STA5
					{			
						hardpoints[] = {"FIR_FA18EF_AA_HP","FIR_MISC"};
						UIposition[] = {0.35,0.30};		
                        mirroredMissilePos = 5; 							
					};						
					class STA8: STA4 
					{			
						UIposition[] = {0.35,0.35};
                        mirroredMissilePos = 4; 							
					};					
					class STA9: STA3 
					{				
						UIposition[] = {0.35,0.40};
                        mirroredMissilePos = 3; 	
					};				
					class STA10: STA2 
					{					
						UIposition[] = {0.35,0.45};
                        mirroredMissilePos = 2; 	
					};							
					class STA11: STA1 
					{					
						UIposition[] = {0.35,0.50};
                        mirroredMissilePos = 1; 	
					};	
				};
			};			
			class SensorsManagerComponent
			{
				class Components {
				 class StandardIRSensor : SensorTemplateIR {
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					angleRangeHorizontal = 120;
					angleRangeVertical = 90;
					maxTrackableSpeed = 400;
					componentType = "IRSensorComponent";
					typeRecognitionDistance = 2000;
					maxFogSeeThrough = 0.995;
					color[] = {1, 0, 0, 1};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class IRST21Sensor : SensorTemplateIR {
					class AirTarget {
						minRange = 16000;
						maxRange = 16000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 16000;
						maxRange = 16000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 120;
					angleRangeVertical = 180;
					maxTrackableSpeed = 400;
					componentType = "IRSensorComponent";
					typeRecognitionDistance = 2000;
					maxFogSeeThrough = 0.995;
					color[] = {1, 0, 0, 1};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};				
				class VisualSensorComponent: SensorTemplateVisual {
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 120;
					angleRangeVertical = 180;
					maxTrackableSpeed = 100;
					aimDown = 0;
					animDirection = "";
					componentType = "VisualSensorComponent";
					nightRangeCoef = 0.6;
					maxFogSeeThrough = 0.9;
					color[] = {1, 1, 0.5, 0.8};
					typeRecognitionDistance = 2000;
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
					componentType = "PassiveRadarSensorComponent";
					class AirTarget {
						minRange = 64000;
						maxRange = 64000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 20000;
						maxRange = 20000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 12000;
					angleRangeHorizontal = 360;
					angleRangeVertical = 360;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					color[] = {0.5, 1, 0.5, 0.5};
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
					allowsMarking = 0;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
					class AirTarget {
						minRange = 10;
						maxRange = 32000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 10;
						maxRange = 32000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 32000;
					angleRangeHorizontal = 160;
					angleRangeVertical = 160;
					groundNoiseDistanceCoef = -1;
					componentType = "ActiveRadarSensorComponent";
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 30;
					maxSpeedThreshold = 40;
					color[] = {0, 1, 1, 1};
					allowsMarking = 1;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class LaserSensorComponent: SensorTemplateLaser {
					componentType = "LaserSensorComponent";
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
					typeRecognitionDistance = 0;
					color[] = {1, 1, 1, 0};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class NVSensorComponent: SensorTemplateNV {
					componentType = "NVSensorComponent";
					color[] = {1, 1, 1, 0};
					typeRecognitionDistance = 0;
					class AirTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 90;
					angleRangeVertical = 90;
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
			};
		};	
			class DefaultVehicleSystemsDisplayManagerLeft;
			class DefaultVehicleSystemsDisplayManagerRight;
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,16000,32000,2000,4000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,16000,32000,2000,4000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};		
		
		
		maxOmega = 2000;
		class Wheels
		{
			class Wheel_1
			{
				boneName = "Wheel_1";
				steering = 1;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.3;
				mass = 150;
				MOI = 40;
				dampingRate = 0.15;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
								
				maxCompression = 0.2;
				maxDroop = 0.6;								
				sprungMass = 5334;
				springStrength = 1200234;
				springDamperRate = 128025;		
				longitudinalStiffnessPerUnitGravity = 4000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName = "Wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.4;
				dampingRate = 4;
				springDamperRate = 41221;
				sprungMass = 2134;
				springStrength = 1580200;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
			};
			class Wheel_3: Wheel_2
			{
				boneName = "Wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};				
		
        class pilotCamera    
        {
            class OpticsIn                
            {          
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -360;
						maxAngleX = 360;
						initAngleY = 0;
						minAngleY = -350;
						maxAngleY = 350;
						initFov = "(60 / 120)";
						minFov = "(60 / 120)";
						maxFov = "(60 / 120)";
						directionStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = "(12 / 120)";
						minFov = "(12 / 120)";
						maxFov = "(12 / 120)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						initFov = "(4 / 120)";
						minFov = "(4 / 120)";
						maxFov = "(4 / 120)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					class VeryNarrow: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(2 / 120)";
						minFov = "(2 / 120)";
						maxFov = "(2 / 120)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};					
				showMiniMapInOptics                             = true;
				showUAVViewpInOptics                    = false;   
				showSlingLoadManagerInOptics    = false;   
            };
            minTurn                 = -360;        
            maxTurn                 = 360;       
            initTurn                = 0;               
            minElev                 = -90;          
            maxElev                 = 90;        
            initElev                = 0;             
            maxXRotSpeed            = 1;           
            maxYRotSpeed            = 1;          
            pilotOpticsShowCursor   = 1;          
            controllable            = true;   
        };
        memoryPointDriverOptics = "pip_pos_0";        			
		
		class Reflectors
		{

			class Left
			{

				color[] 		= {1900, 1800, 1700};		
				ambient[]		= {5, 5, 5};				

				position = "L svetlo";
				direction = "L svetlo dir";
				hitpoint = "L svetlo";
				selection = "L svetlo";

				size 			= 1;						
				innerAngle 		= 100;						
				outerAngle 		= 179;						
				coneFadeCoef 	= 10;						
				intensity 		= 3;						
				useFlare 		= true;						
				dayLight 		= false;					
				flareSize 		= 1.0;						
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 40;		
					hardLimitEnd 	= 60;		
				};
			};
		};
		class MarkerLights	
		{
			class RedStill
			{
				name = "PositionLight_red";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.20;
				blinking = false;
			};
			class RedStill2
			{
				name = "PositionLight_red2";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.20;
				blinking = false;
			};
			class RedStill3
			{
				name = "PositionLight_red3";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.07;
				blinking = false;
			};
			class GreenStill2
			{
				name = "PositionLight_green2";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.07;
				blinking = false;
			};
			class BlueStill
			{
				name = "PositionLight_blue";
				color[] = { 0.1, 0.1 , 1.0, 1.0};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.15;
				blinking = false;
			};
			class BlueStill2
			{
				name = "PositionLight_blue2";
				color[] = { 0.1, 0.1 , 1.0, 1.0};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.15;
				blinking = false;
			};
			class WhiteCollision
			{
				name = "CollisionLight";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.1;
				blinking = true;
			};
			class WhiteCollision2
			{
				name = "CollisionLight2";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.1;
				blinking = true;
			};
 			class GreenRight
			{
				name = "PositionLight_GreenRight";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.07;
				blinking = false;
			};
			class RedLeft
			{
				name = "PositionLight_RedLeft";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.07;
				blinking = false;
			};
			class GreenWingRight
			{
				name = "PositionLight_UnderWingRight";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.04;
				blinking = false;
			};
			class RedWingLeft
			{
				name = "PositionLight_UnderWingLeft";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.04;
				blinking = false;
			};
		};
		class RenderTargets	
		{
				class TAD_VIEW
				{
					renderTarget = "rendertarget5";
					class CameraView1
					{
						pointPosition		= "tad_map_pos";
						pointDirection		= "tad_map_dir";
						renderQuality 		= 2;
						renderVisionMode 	= 0;
						fov 			= 0.2;
					}; 			
				};	
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectname = "FIR_WingVortices";
				position = "cerveny pozicni";
			};
			class WingTipRight
			{
				effectname = "FIR_WingVortices";
				position = "zeleny pozicni";
			};
			class WingTrail_1
			{
				effectname = "FIR_WingTrails_top";
				position = "wing_trail_1";
			};		
			class WingTrail_2
			{
				effectname = "FIR_WingTrails_top";
				position = "wing_trail_2";
			};					
			class WingTrail_3
			{
				effectname = "FIR_WingTrails_top";
				position = "wing_trail_3";
			};					
			class WingTrail_4
			{
				effectname = "FIR_WingTrails_top";
				position = "wing_trail_4";
			};						
			class BodyLeft
			{
				effectName = "FIR_BodyVortices";
				position = "bodyLeft";
			};
			class BodyLeft1
			{
				effectName = "FIR_BodyVortices";
				position = "bodyLeft1";
			};
			class BodyRight
			{
				effectName = "FIR_BodyVortices";
				position = "bodyRight";
			};class BodyRight1
			{
				effectName = "FIR_BodyVortices";
				position = "bodyRight1";
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				direction = "exu1_dir";
				effect = "fir_ExhaustsEffectPlane_big";
				position = "exu1";
			};
			class Exhaust2
			{
				direction = "exu2_dir";
				effect = "fir_ExhaustsEffectPlane_big";
				position = "exu2";
			};
		};		
		envelope[] = {0.000000, 0.800000, 2.900000, 5, 7.800000, 9.300000, 9.500000, 9.800000, 8.200000, 5.600000, 3.200000, 2.600000, 2.100000, 1.700000, 1.400000,1.350000,1.300000,1.150000, 0};
		laserScanner = 1;
		gunAimDown = 0.045000;
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		minFireTime = 30;
		cost = 5000000;
		type = "VAir";
		threat[] = {1, 1, 0.700000};
	
		class Attributes 
		{
			class FIR_FA18EF_Foldwing_A
			{
						displayName = "fold wing"; 
						tooltip = "fold/unfold the wing"; 
						property = "FIR_FA18EF_Foldwing_A_ID";
                        control = "Checkbox";
 
						expression = "_this setVariable [""FA18EF_Foldwing_C"",_value]; [_this, _value] execVM 'FIR_FA18EF\scripts\init\wing_fold.sqf';";
 
						defaultValue = false;
			};	
			class ReplacePilot
			{
					displayName = "Replace Pilot"; 
					tooltip = "change the pilot's patch,insignia and equipments"; 
					property = "AWS_ReplacePilotID";
					control = "Checkbox";
					expression = "[_this, _value,'single'] execVM 'FIR_AirWeaponSystem_US\Script\init\replace_pilot.sqf';";
					defaultValue = false;
			};						
			class FIR_FA18EF_ABSound_A
			{
						displayName = "Disable AB Sound"; 
						tooltip = "disable the Afterburner sound"; 
						property = "FIR_FA18Ef_ABSound_A_ID";
                        control = "Checkbox";
 
						expression = "_this setVariable [""FIR_FA18EF_ABSound_C"",_value];";
 
						defaultValue = false;
			};

		};
		class EventHandlers: EventHandlers
		{
			class FIR_FA18EF_EH
			{
				engine = "_this call bis_fnc_aircraftFoldingWings;";
				gear = "_this call bis_fnc_aircraftFoldingWings";				
				landing = "[_this,true] call FIR_fnc_AWS_aircraftTailhookAI";
				landingcanceled = "[_this,false] call FIR_fnc_AWS_aircraftTailhookAI";							
				Init = "_this execVM ""\FIR_FA18EF\scripts\init\init.sqf""; _this execVM ""\FIR_FA18EF\scripts\FX_SonicBoom.sqf"";";
				killed = "_this call BIS_Effects_EH_Killed;";
				hit = "_this call AWS_Ejection_AI";			
				fired = "";				
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {"FIR_FA18EF\data\e\nose.rvmat", "FIR_FA18EF\data\nose_damage.rvmat", "FIR_FA18EF\data\nose_destruct.rvmat","FIR_FA18EF\data\body.rvmat", "FIR_FA18EF\data\body_damage.rvmat", "FIR_FA18EF\data\body_destruct.rvmat","FIR_FA18EF\data\fuse.rvmat", "FIR_FA18EF\data\fuse_damage.rvmat", "FIR_FA18EF\data\fuse_destruct.rvmat","FIR_FA18EF\data\wing.rvmat", "FIR_FA18EF\data\wing_damage.rvmat", "FIR_FA18EF\data\wing_destruct.rvmat","FIR_FA18EF\data\alq99.rvmat", "FIR_FA18EF\data\alq99_damage.rvmat", "FIR_FA18EF\data\alq99_destruct.rvmat"};
		};
	};
	class FIR_FA18E : FIR_FA18E_Base
	{
		author = "Firewill";
		scope = 2;
		editorPreview = "\FIR_FA18EF\ui\pic\pic_vfa102.jpg";
		faction = "BLU_F";
		crew = "FIR_FighterPilot_JHMCS";
		side = 1;
		displayName = "F/A-18E Super Hornet";
		hiddenselectionstextures[] = {"\FIR_FA18EF\skin\e\vfa31\nose_co.paa","\FIR_FA18EF\skin\e\vfa31\body_co.paa","\FIR_FA18EF\skin\e\vfa31\fuse_co.paa","\FIR_FA18EF\skin\e\vfa31\leftwing_co.paa","\FIR_FA18EF\skin\e\vfa31\rightwing_co.paa"};
		weapons[] = {"FIR_MasterArm","FIR_M61A2","FIR_CMLauncher"};
		magazines[] = {"FIR_M61A2_412rnd_M","FIR_240rnd_CMFlare_Chaff_Magazine"};	
		FIR_FA18F_custom_skin = 1;
		FIR_FA18F_custom_code =  "FIR_FA18E";
		FIR_FA18F_custom_name = "VFA-31";
		ades_aircraft = "FIR_FA18E_ADES_Skin";		
	};
	class FA188_Warlock: FIR_FA18E
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_FW";
		crew="6STB_109th_Pilot";
		displayName="[6th] F/A-188 Stinger (Warlock)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2; 
		FIR_FA18F_custom_code =  "FA188_Warlock";
		FIR_FA18F_custom_name = "VFA-365";
		hiddenSelectionstextures[] = {"Vehicles\Aircraft\FW\FW_Nose.paa","Vehicles\Aircraft\FW\FW_Body.paa","Vehicles\Aircraft\FW\FW_Fuse.paa","Vehicles\Aircraft\FW\FW_LW.paa","Vehicles\Aircraft\FW\FW_RW.paa"};
		ades_aircraft = "FIR_FA188_ADES_Warlock";
	};
};