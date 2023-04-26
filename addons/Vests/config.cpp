class CfgPatches
{
	class Aux_6th
	{
		author="6th Dev Team";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class ItemInfo;
	class ItemCore;
	class VestItem;
	class Uniform_Base;
	class UniformItem;
	class VES_M52D_Rifleman;
	class VES_M52A_MAR_Rifleman_A;
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_S1ONIR;
	class VES_S1ONIR_dp;
	class LM_OPCAN_ODST_H2A_UNI;
	class ODST_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] ODST Vest";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\ODST_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				//"A_KneesMarLeft",	//Marine Knee Plates Left
				//"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class Tombstone_Company_Rifleman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Company Rifleman";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_Company_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class Tombstone_Company_Demolition: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Company Demolition";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_Company_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_Company_Marksman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Company Marksman";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_Company_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_Company_Grenadier: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Company Grenadier";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_Company_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_Company_Sniper: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Company Sniper";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_Company_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_NCO_Rifleman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone NCO Rifleman";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_NCO_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_NCO_Demolition: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone NCO Demolition";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_NCO_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_NCO_Marksman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone NCO Marksman";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_NCO_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_NCO_Grenadier: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone NCO Grenadier";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_NCO_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_NCO_Sniper: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone NCO Sniper";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_NCO_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"CustomKit_Scorch"
			};
		};
	};
	class Tombstone_Medic_Rifleman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Medic";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Tombstone_Medic_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class Anvil_Squad_Rifleman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayname="[6th] Anvil Squad Armor";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"OPTRE_UNSC_Units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"OPTRE_UNSC_Units\Army\data\ghillie_woodland_co",
			"Vests\Textures\Anvil_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class Drengr_Squad_Rifleman: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Drengr Squad Armor";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\Drengr_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Drengr_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class Phoenix_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Phoenix Squad Armor";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\Phoenix_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Phoenix_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class R_Walker_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (R. Walker)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\R_Walker_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\R_Walker_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				//"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class S_Marbo_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (S. Marbo)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\S_Marbo_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				//"AP_Thigh",		//Pouch on left side of left thigh
				//"AP_MGThigh",	//Big Pouch right side of right thigh
				"A_ODST",		//ODST Extra Plate and bracers
				"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				//"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class A_Avalanche_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (A. Avalanche)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\A_Avalanche_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				//"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				//"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				//"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class R_Kay_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (R. Kay)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\R_Kay_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				//"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				//"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class H_Lucas_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (H. Lucas)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\H_Lucas_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\H_Lucas_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				//"AP_Thigh",		//Pouch on left side of left thigh
				//"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				//"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class K_Kat_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (K. Kat)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\K_Kat_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				//"AP_Thigh",		//Pouch on left side of left thigh
				//"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				//"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				//"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				//"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class M_Munchlax_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (M. Munchlax)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\H_Lucas_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\M_Munchlax_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				//"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				//"AP_SMG",	//3 SMG pouches either side of stomach
				"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				//"APO_Knife",	//Back Knife
				//"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				//"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class M_Justinian_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (M. Justinian)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\M_Justinian_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				//"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				//"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class J_Long_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (J. Long)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\J_Long_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\J_Long_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				//"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				//"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				//"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				//"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				//"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class M_Kong_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (M. Kong)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\M_Kong_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				//"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class J_Kraken_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (J. Kraken)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\J_Kraken_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\J_Kraken_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				//"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				//"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
		class M_Hatter_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (M. Hatter)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\Phoenix_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\M_Hatter_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				//"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				//"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				//"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				//"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class S_Orm_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (S. Orm)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\Drengr_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\S_Orm_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				//"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				//"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class Ranger_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Ranger Armor";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\Ranger_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Ranger_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				//"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	};
	class C_Cherryy_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Custom Armor (C. Cherryy)";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\C_Cherryy_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\C_Cherryy_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",		//Ignore, is banned
				"camo2",	//Ignore, is banned
				"camo3",	//Ignore, is banned
				"camo4",	//Ignore, is banned
				"camo5",	//Ignore, is banned
				"A_Ghillie",	//Ghillie
				//"A_KneesLeft",	//ODST Knee Plates Left
				//"A_KneesRight",	//ODST Knee Plates Right
				"A_KneesMarLeft",	//Marine Knee Plates Left
				"A_KneesMarRight",	//Marine Knee Plates Right
				//"A_ShinArmorLeft",	//Shin Armor Left
				//"A_ShinArmorRight",	//Shin Armor Right
				//"A_ThighArmorLeft",		//Base Thigh Armor Left
				//"A_ThighArmorRight",	//Base Thigh Armor Right
				"AP_Thigh",		//Pouch on left side of left thigh
				"AP_MGThigh",	//Big Pouch right side of right thigh
				//"A_ODST",		//ODST Extra Plate and bracers
				//"A_TacPad",		//Tacpad on left wrist
				"AP_Rounds",	//Sniper Rounds on left shoulder plate
				//"A_ChestArmor",	//Base Armor plate
				"AP_AR",	//3x Marine Assault Rifle Magazines
				"AP_BR",	//3x Marine Battle Rifle Magazines
				"AP_Canteen",	//Canteen on left hip
				//"AP_Frag",	//Right side hip frag grenade
				"AP_GL",	//Grenade Belt on right side
				"AP_Knife",	//Chest Knife, left collar
				"AP_Pack",	//Marine Chest Pack
				"AP_Pistol",	//Pistol Mags Right Hip
				"AP_SG",	//Shotgun Shells Right Shoulder Front
				"AP_SMG",	//3 SMG pouches either side of stomach
				//"AP_Smoke",	//2x Smoke grenade left hip
				"AP_Sniper",	//Marine 2 SRS mags either side of stomach
				"APO_AR",	//ODST 2 Mag Pouches either side of stomach
				"APO_BR",	//ODST 2 Mag Pouches either side of stomach
				"APO_Sniper",	//2 mag pouches either side of stomach
				"APO_Knife",	//Back Knife
				"APO_SMG",		//Mags both side of ODST chest piece
				//"AS_BaseLeft",			//Kevlar Wraps under Pads on shoulder
				//"AS_BaseRight",			//Kevlar Wraps under Pads on shoulder
				"AS_LargeLeft",			//Marine Large Left Shoulder Plate
				"AS_LargeRight",		//Marine Large Right Shoulder Plate
				"AS_MediumLeft",		//Marine Medium Left Shoulder Plate
				"AS_MediumRight",		//Marine Medium Right Shoulder Plate
				"AS_ODSTCQBLeft",		//ODST CQB Shoulder Left
				"AS_ODSTCQBRight",		//ODST CQB Shoulder Right
				//"AS_ODSTLeft",			//ODST Shoulder Left
				"AS_ODSTRight",			//ODST Shoulder Right
				"AS_ODSTSniperLeft",	//ODST Sniper Shoulder Left
				//"AS_ODSTSniperRight",	//ODST Sniper Shoulder Right
				"AS_SmallLeft",			//Marine Small Left Shoulder Plate
				"AS_SmallRight",		//Marine Small Right Shoulder Plate
				//"CustomKit_Scorch"		//Knife on back of left shoulder and back, GL Rounds, ODST AR Mags, and Thigh Pouch
			};
		};
	}
	class PF_Vest: VES_M52D_Rifleman
	{
		author="6th STB S-5";
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Pathfinder Desert Armor";
		hiddenSelectionsTextures[]=
		{
			"OPTRE_UNSC_Units\Army\data\Pathfinder_DES_UA.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Vests\Textures\Pathfinder_DES_L_Legs.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"Vests\Textures\Pathfinder_DES_V1.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply230";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.5;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
};
