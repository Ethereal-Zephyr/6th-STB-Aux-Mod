class cfgPatches
{
  class 6STB_6th_Shock_Trooper_Battalion
  {
    units[]={"6STB_109th_ArmorCrew","6STB_109th_Pilot","6STB_109th_AirCrew","6STB_109th_AirCrew_V","6STB_109th_AT_Specialist","6STB_109th_Autorifleman","6STB_109th_Breacher","6STB_109th_Marksman","6STB_109th_Medic","6STB_109th_RTO","6th_Oryx","6th_Gunfighter"};
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
		displayName = "Rotary"
	};
};

class cfgWeapons
{
  class OPTRE_MA5B;
  class OPTRE_MA45ATAC;
  class OPTRE_MA37K;
  class OPTRE_M7;
  class OPTRE_M73;
  class OPTRE_M6C;
  class OPTRE_M41_SSR;
  class OPTRE_M392_DMR;

  class 6STB_MA5B: OPTRE_MA5B
  {
    displayName="MA5B";
    scope=1;
    class LinkedItems
    {
    };
  };
  class 6STB_MA45ATAC: OPTRE_MA45ATAC
  {
    displayName="MA45A Combat Shotgun";
    scope=1;
    class LinkedItems
    {
    };
  };
  class 6STB_MA37K: OPTRE_MA37K
  {
    displayName="MA37K Carbine";
    scope=1;
    class LinkedItems
    {
		class LinkedItemsOptic
		{
			slot='CowsSlot";
			item="OPTRE_M12_OPTIC";
		};
    };
  };
  class 6STB_M7: OPTRE_M7
  {
    displayName="M7/Caseless SMG";
    scope=1;
    class LinkedItems
    {
    };
  };
  class 6STB_M73: OPTRE_M73
  {
    displayName="M73 LMG";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_M73_SMARTLINK";
      };
	};
  };
  class 6STB_M6C: OPTRE_M6C
  {
    displayName="M6C Magnum";
    scope=1;
    class LinkedItems
    {
    };
  };
  class 6STB_M392: OPTRE_M392_DMR
  {
    displayName="M392 DMR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="OPTRE_BMR_SCOPE";
      };
	};
  };
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
	weapons[]={"6STB_M45ATAC","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
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
	class 6th_M12LRV: OPTRE_M12_LRV
	{
		author="6th STB S-5";
		scope=2;
		scopeCurator=2;
		displayName="[6th] M12 LRV (Jungle)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Warthog\ATACSFG\M12_Tombstone_Jungle_Upper.paa",
			"Vehicles\Warthog\Base\M12_Base_Lower.paa",
			"Vehicles\Warthog\ATACSFG\M12_Jungle_Turret.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};
	class 6th_Oryx: OPTRE_M494
	{
		scope=2;
		scopeCurator=2;
		author="6STB S5";
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
	class B_Heli_Attack_01_Dynamicloadout_F;
	class 6th_Gunfighter: B_Heli_Attack_01_Dynamicloadout_F
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		displayName="[6th] V-1 Gunfighter";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Textures\Gunfighter_1-7.paa"
		};
		crew="6STB_109th_Pilot";
	};
};