class CfgPatches
{
	class 6STB_Weapons
	{
		units[]={};
		weapons[]=
		{
			"6STB_MA37",
			"6STB_MA37GL",
			"6STB_MA37K",
			"6STB_MA5B",
			"6STB_MA5BGL",
			"6STB_MA5C",
			"6STB_MA5CGL",
			"6STB_M295",
			"6STB_BR45",
			"6STB_BR55",
			"6STB_M45E",
			"6STB_M45TAC",
			"6STB_M45ATAC",
			"6STB_M7",
			"6STB_M73",
			"6STB_M247",
			"6STB_SAW",
			"6STB_M379B",
			"6STB_M319N",
			"6STB_M28A2",
			"6STB_M392",
			"6STB_SRS99C",
			"6STB_SRS99D",
			"6STB_M6B",
			"6STB_M6C",
			"6STB_M6G"
		};
		ammo[]=
		{
			"6STB_B_145x114_APFSDS",
			"6STB_B_50mm_APFSDS",
			"6STB_B_50mm_APFSDS",
			"6STB_B_762x51_Ball",
			"6STB_B_762x51_Tracer",
			"6STB_B_5x23_Caseless",
			"6STB_B_5x23_Caseless_Tracer",
			"6STB_127x40_AP",
			"6STB_127x40_APT",
			"6STB_127x40_JHP",
			"6STB_127x40_JHPT",
			"6STB_127x40_NARQ",
			"6STB_127x40_FG",
			"6STB_127x40_FR"
		};
		magazines[]=
		{
			"6STB_100Rnd_762x51_Box_T",
			"6STB_250Rnd_762x51_Box_T",
			"6STB_400Rnd_762x51_Box_T",
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer",
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer",
			"6STB_60Rnd_5x23mm_Mag",
			"6STB_60Rnd_5x23mm_Mag_tracer",
			"6STB_4Rnd_145x114_APFSDS_Mag",
			"6STB_15Rnd_ARC_Mag",
			"6STB_7Rnd_155mm_APFSDS_Mag",
			"6STB_12Rnd_127x40_Mag_AP",
			"6STB_12Rnd_127x40_Mag_APT",
			"6STB_12Rnd_127x40_Mag_JHP",
			"6STB_12Rnd_127x40_Mag_JHPT",
			"6STB_12Rnd_127x40_Mag_NARQ",
			"6STB_12Rnd_127x40_Mag_NARQT",
			"6STB_8Rnd_127x40_Mag_FG",
			"6STB_8Rnd_127x40_Mag_FR",
			"6STB_100Rnd_95x40_Box_T",
			"6STB_250Rnd_95x40_Box_T",
			"6STB_400Rnd_95x40_Box_T"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F",
			"TCF_Main"
		};
		author="6STB S5"
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class weaponSlotsInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons
{
	class OPTRE_MA37;
	class 6th_MA37: OPTRE_MA37
	{
		author="6STB S5"
		displayName="[6th] MA37 Assault Rifle";
		baseWeapon="6STB_MA37";
		mass=90;
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer",
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"OPTRE_MA37_Smartlink_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class OPTRE_MA37GL;
	class 6STB_MA37GL: OPTRE_MA37GL
	{
		author="6STB S5";
		displayName="[6th] MA37 Assault Rifle GL";
		baseWeapon="6STB_MA37GL";
		mass=90;
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer",
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"OPTRE_MA37_Smartlink_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class OPTRE_MA5B;
	class 6STB_MA5B: OPTRE_MA5B
	{
		displayName="[6th] MA5B Assault Rifle";
		baseWeapon="6STB_MA5B";
		mass=90;
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer",
		};
	};
	class OPTRE_MA5BGL;
	class 6STB_MA5BGL: OPTRE_MA5BGL
	{
		displayName="[6th] MA5B Assault Rifle GL";
		baseWeapon="6STB_MA5BGL";
		mass=90;
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer"
		};
	};
	class OPTRE_MA5C;
	class 6STB_MA5C : OPTRE_MA5C
	{
		displayName="[6th] MA5C Assault Rifle";
		baseWeapon="6STB_MA5C";
		mass=90;
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer"
		};
	};
	class OPTRE_MA5CGL;
	class 6STB_MA5CGL : OPTRE_MA5CGL
	{
		displayName="[6th] MA5C Assault Rifle GL";
		baseWeapon="6STB_MA5CGL";
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far"
		};
		magazines[]=
		{
			"6STB_60Rnd_762x51_Mag",
			"6STB_60Rnd_762x51_Mag_Tracer"
		};
		mass=90;
	};
	class OPTRE_MA37K;
	class 6STB_MA37K : OPTRE_MA37K
	{
		displayName="[6th] MA37K Carbine";
		baseWeapon="6STB_MA37K";
		mass=80;
		magazines[]=
		{
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer"
		};
	};
	class OPTRE_BR45;
	class 6STB_BR45 : OPTRE_BR45
	{
		displayName="[6th] BR45 Battle Rifle";
		baseWeapon="6STB_BR45";
		mass=70;
		magazines[]=
		{
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer"
		};
	};
	class OPTRE_BR55;
	class 6STB_BR55 : OPTRE_BR55
	{
		displayName="[6th] BR55 Battle Rifle";
		baseWeapon="6STB_BR55";
		mass=70;
		magazines[]=
		{
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer"
		};
	};
	class OPTRE_M45E;
	class 6STB_M45E : OPTRE_M45E
	{
		displayName="[6th] M45E Combat Shotgun";
		baseWeapon="6STB_M45E";
		mass=80;
		magazines[]=
		{
			"6STB_12Rnd_8Gauge_Slugs"
		};
	};
	class OPTRE_M45ATAC;
	class 6STB_M45ATAC : OPTRE_M45ATAC
	{
		displayName="[6th] M45A Tactical Shotgun";
		baseWeapon="6STB_M45ATAC";
		mass=80;
		magazines[]=
		{
			"6STB_12Rnd_8Gauge_Slugs"
		};
	};
	class OPTRE_M45TAC;
	class 6STB_M45TAC : OPTRE_M45TAC
	{
		displayName="[6th] M45 Tactical Shotgun";
		baseWeapon="6STB_M45TAC";
		mass=80;
		magazines[]=
		{
			"6STB_12Rnd_8Gauge_Slugs"
		};
	};
	class OPTRE_M7;
	class 6STB_M7 : OPTRE_M7
	{
		displayName="[6th] M7 SMG";
		baseWeapon="6STB_M7";
		mass=70;
		magazines[]=
		{
			"6STB_60Rnd_5x23mm_Mag",
			"6STB_60Rnd_5x23mm_Mag_tracer"
		};
	};
	class OPTRE_M73;
	class 6STB_M73 : OPTRE_M73
	{
		displayName="[6th] M73 LMG";
		baseWeapon="6STB_M73";
		mass=120;
		magazines[]=
		{
			"6STB_100Rnd_95x40_Box_T",
			"6STB_250Rnd_95x40_Box_T",
			"6STB_400Rnd_95x40_Box_T"
		};
	};
	class OPTRE_M247;
	class 6STB_M247 : OPTRE_M247
	{
		displayName="[6th] M247 LMG";
		baseWeapon="6STB_M247";
		mass=140;
		magazines[]=
		{
			"6STB_100Rnd_762x51_Box_T",
			"6STB_250Rnd_762x51_Box_T",
			"6STB_400Rnd_762x51_Box_T"
		};
	};
	class OPTRE_M319N;
	class 6STB_M319N : OPTRE_M319N
	{
		displayName="[6th] M319 Grenade Launcher";
		baseWeapon="6STB_M319N";
		mass=33;
	};
	class OPTRE_M392_DMR;
	class 6STB_M392 : OPTRE_M392_DMR
	{
		displayName="[6th] M392 DMR";
		baseWeapon="6STB_M392";
		mass=80;
		magazines[]=
		{
			"6STB_32Rnd_762x51_Mag",
			"6STB_32Rnd_762x51_Mag_Tracer"
		};
	};
	class OPTRE_SRS99C;
	class 6STB_SRS99C : OPTRE_SRS99C
	{
		displayName="[6th] SRS99C";
		baseWeapon="6STB_SRS99C";
		mass=120;
		magazines[]=
		{
			"6STB_4Rnd_145x114_APFSDS_Mag"
		};
	};
	class OPTRE_M6B;
	class 6STB_M6B : OPTRE_M6B
	{
		displayName= "[6th] M6B Magnum";
		baseWeapon="6STB_M6B";
		mass=45;
		magazines[]=
		{
			"6STB_12Rnd_127x40_Mag_AP",
			"6STB_12Rnd_127x40_Mag_APT",
			"6STB_12Rnd_127x40_Mag_JHP",
			"6STB_12Rnd_127x40_Mag_JHPT",
			"6STB_12Rnd_127x40_Mag_NARQ",
			"6STB_12Rnd_127x40_Mag_NARQT",
			"6STB_8Rnd_127x40_Mag_FG",
			"6STB_8Rnd_127x40_Mag_FR"
		};
	};
	class OPTRE_M6C;
	class 6STB_M6C : OPTRE_M6C
	{
		displayName= "[6th] M6C/SOCOM Magnum";
		baseWeapon="6STB_M6C";
		mass=45;
		magazines[]=
		{
			"6STB_12Rnd_127x40_Mag_AP",
			"6STB_12Rnd_127x40_Mag_APT",
			"6STB_12Rnd_127x40_Mag_JHP",
			"6STB_12Rnd_127x40_Mag_JHPT",
			"6STB_12Rnd_127x40_Mag_NARQ",
			"6STB_12Rnd_127x40_Mag_NARQT",
			"6STB_8Rnd_127x40_Mag_FG",
			"6STB_8Rnd_127x40_Mag_FR"
		};
	};
	class OPTRE_M6G;
	class 6STB_M6G : OPTRE_M6G
	{
		displayName= "[6th] M6G Magnum";
		baseWeapon="6STB_M6G";
		mass=45;
		magazines[]=
		{
			"6STB_12Rnd_127x40_Mag_AP",
			"6STB_12Rnd_127x40_Mag_APT",
			"6STB_12Rnd_127x40_Mag_JHP",
			"6STB_12Rnd_127x40_Mag_JHPT",
			"6STB_12Rnd_127x40_Mag_NARQ",
			"6STB_12Rnd_127x40_Mag_NARQT",
			"6STB_8Rnd_127x40_Mag_FG",
			"6STB_8Rnd_127x40_Mag_FR"
		};
	};
};

class CfgAmmo
{
	class ShotgunBase;
	class BulletBase;
	class B_762x51_Ball;
	class B_40mm_APFSDS;
	class F_40mm_Green;
	class F_40mm_Red;
	class OPTRE_B_762x51_Ball;
	class 6STB_B_762x51_Ball: OPTRE_B_762x51_Ball
	{
		hit=55;
		typicalSpeed=750;
		caliber=5.0999999;
	};
	class OPTRE_B_762x51_Tracer;
	class 6STB_B_762x51_Tracer: OPTRE_B_762x51_Tracer
	{
		hit=55;
		typicalSpeed=750;
		caliber=5.0999999;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless;
	class 6STB_B_5x23_Caseless: OPTRE_B_5x23_Caseless
	{
		hit=35;
		typicalSpeed=450;
		caliber=4.75;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_5x23_Caseless_Tracer;
	class 6STB_B_5x23_Caseless_Tracer: 6STB_B_5x23_Caseless
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class OPTRE_B_145x114_APFSDS;
	class 6STB_B_145x114_APFSDS: OPTRE_B_145x114_APFSDS
	{
		hit=120;
		caliber=8;
	};
	class OPTRE_B_155mm_APFSDS;
	class 6STB_B_155mm_APFSDS: OPTRE_B_155mm_APFSDS
	{
		hit=1520;
		caliber=240;
	};
	class OPTRE_8Gauge_Slugs;
	class 6STB_8Gauge_Slugs: OPTRE_8Gauge_Slugs
	{
		caliber=9.5;
		hit=255;
	};
	class TCF_B_127x40_AP;
	class 6STB_127x40_AP: TCF_B_127x40_AP
	{
		caliber=3;
		hit=10;
		typicalSpeed=600;
	};
	class 6STB_127x40_APT: TCF_B_127x40_AP
	{
		caliber=3;
		hit=10;
		typicalSpeed=600;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TCF_B_127x40_JHP;
	class 6STB_127x40_JHP: TCF_B_127x40_JHP
	{
		caliber=1;
		hit=15;
		typicalSpeed=630;
	};
	class 6STB_127x40_JHPT: TCF_B_127x40_JHP
	{
		caliber=1;
		hit=15;
		typicalSpeed=630;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class TCF_B_127x40_NARQ;
	class 6STB_127x40_NARQ: TCF_B_127x40_NARQ
	{
		hit=0.1;
		typicalSpeed=500;
	};
	class 6STB_127x40_NARQT: TCF_B_127x40_NARQ
	{
		hit=0.1;
		typicalSpeed=500;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class 6STB_127x40_FG: F_40mm_Green
	{
		timeToLive = 80;
		brightness = 400:
		intensity = 1000000;
	};
	class 6STB_127x40_FR: F_40mm_Red
	{
		timeToLive = 80;
		brightness = 400:
		intensity = 1000000;
	};
	class OPTRE_B_95x40_Tracer;
	class 6STB_95x40_T: OPTRE_B_95x40_Tracer
	{
		hit=13;
		typicalSpeed=600;
		caliber=4;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};

class CfgMagazines
{
	class OPTRE_100Rnd_762x51_Box_Tracer;
	class 6STB_100Rnd_762x51_Box_T: OPTRE_100Rnd_762x51_Box_Tracer
	{
		displayname="[6th] 100Rnd 7.62x51 Box (Tracers)";
		ammo="6STB_B_762x51_Tracer";
		count=100;
		mass=30;
		tracersEvery=1;
		lastRoundsTracer=100;
		hiddenSelectionsTextures[]=
		{
			"\optre_weapons\mg\data\m247_magazine_co.paa"
		};
	};
	class 6STB_250Rnd_762x51_Box_T: OPTRE_100Rnd_762x51_Box_Tracer
	{
		displayname="[6th] 250Rnd 7.62x51 Box (Tracers)";
		ammo="6STB_B_762x51_Tracer";
		count=250;
		mass=60;
		tracersEvery=1;
		lastRoundsTracer=250;
		hiddenSelectionsTextures[]=
		{
			"\optre_weapons\mg\data\m247_magazine_co.paa"
		};
	};
	class 6STB_400Rnd_762x51_Box_T: OPTRE_100Rnd_762x51_Box_Tracer
	{
		displayname="[6th] 400Rnd 7.62x51 Box (Tracers)";
		ammo="6STB_B_762x51_Tracer";
		count=400;
		mass=90;
		tracersEvery=1;
		lastRoundsTracer=400;
		hiddenSelectionsTextures[]=
		{
			"\optre_weapons\mg\data\m247_magazine_co.paa"
		};
	};
	class OPTRE_60Rnd_762x51_Mag;
	class 6STB_60Rnd_762x51_Mag: OPTRE_60Rnd_762x51_Mag
	{
		displayname="[6th] 60Rnd 7.62x51mm Magazine";
		ammo="6STB_B_762x51_Ball";
		count=60;
		mass=18;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class 6STB_60Rnd_762x51_Mag_Tracer: 6STB_60Rnd_762x51_Mag
	{
		displayname="[6th] 60Rnd 7.62x51mm Magazine (Tracers)";
		ammo="6STB_B_762x51_Tracer";
		tracersEvery=1;
		lastRoundsTracer=60;
	};
	class 6STB_32Rnd_762x51_Mag: 6STB_60Rnd_762x51_Mag
	{
		displayname="[6th] 32Rnd 7.62x51mm Magazine";
		ammo="6STB_B_762x51_Ball";
		count=32;
		initspeed=950;
		mass=10;
	};
	class 6STB_32Rnd_762x51_Mag_Tracer: 6STB_60Rnd_762x51_Mag_Tracer
	{
		displayname="[6th] 32Rnd 7.62x51mm Magazine (Tracers)";
		ammo="6STB_B_762x51_Tracer";
		count=32;
		mass=10;
	};
	class 6STB_60Rnd_5x23mm_Mag: OPTRE_60Rnd_762x51_Mag
	{
		displayname="[6th] 60Rnd 5x23mm Magazine";
		ammo="6STB_B_5x23_Caseless";
		count=60;
		mass=8;
		tracersEvery=0;
		lastRoundsTracer=5;
	};
	class 6STB_60Rnd_5x23mm_Mag_tracer: 6STB_60Rnd_5x23mm_Mag
	{
		displayname="[6th] 60Rnd 5x23mm Magazine (Tracers)";
		ammo="6STB_B_5x23_Caseless_Tracer";
		tracersEvery=2;
		lastRoundsTracer=30;
	};
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class 6STB_4Rnd_145x114_APFSDS_Mag: OPTRE_4Rnd_145x114_APFSDS_Mag
	{
		displayname="[6th] 4Rnd 14.5x114mm APFSDS Magazine";
		ammo="6STB_B_145x114_APFSDS";
		count=4;
		initspeed=1200;
		mass=15;
		tracersEvery=1;
		lastRoundsTracer=4;
	};
	class OPTRE_7Rnd_20mm_APFSDS_Mag;
	class 6STB_7Rnd_155mm_APFSDS_Mag: OPTRE_7Rnd_20mm_APFSDS_Mag
	{
		displayname="[6th] 7Rnd 20mm APFSDS Magazine";
		ammo="6STB_B_155mm_APFSDS";
		count=7;
		initspeed=5000;
		mass=15;
		tracersEvery=1;
		lastRoundsTracer=7;
	};
	class 6STB_15Rnd_ARC_Mag: 6STB_7Rnd_155mm_APFSDS_Mag
	{
		displayname="[6th] 7Rnd 20mm APFSDS Magazine";
		ammo="6STB_B_155mm_APFSDS";
		count=15;
		initspeed=5000;
		mass=15;
	};
	class OPTRE_12Rnd_8Gauge_Slugs;
	class 6STB_12Rnd_8Gauge_Slugs: OPTRE_12Rnd_8Gauge_Slugs
	{
		displayname="[6th] 12Rnd 8 Gauge Slugs";
		ammo="6STB_8Gauge_Slugs";
		count=12;
		mass=12;
	};
	class TCF_12Rnd_127x40_Mag_AP;
	class 6STB_12Rnd_127x40_Mag_AP: TCF_12Rnd_127x40_Mag_AP
	{
		displayname="[6th] 12Rnd 12.7x40mm AP Magazine";
		ammo="6STB_127x40_AP";
		count=12;
		mass=12;
	};
	class 6STB_12Rnd_127x40_Mag_APT: 6STB_12Rnd_127x40_Mag_AP
	{
		displayname="[6th] 12Rnd 12.7x40mm AP Magazine (Tracers)";
		ammo="6STB_127x40_APT";
		count=12;
		mass=12;
		tracersEvery=1;
	};
	class TCF_12Rnd_127x40_Mag_JHP;
	class 6STB_12Rnd_127x40_Mag_JHP: TCF_12Rnd_127x40_Mag_JHP
	{
		displayname="[6th] 12Rnd 12.7x40mm JHP Magazine";
		ammo="6STB_127x40_JHP";
		count=12;
		mass=12;
	};
	class 6STB_12Rnd_127x40_Mag_JHPT: 6STB_12Rnd_127x40_Mag_JHP
	{
		displayname="[6th] 12Rnd 12.7x40mm JHP Magazine (Tracers)";
		ammo="6STB_127x40_JHPT";
		count=12;
		mass=12;
		tracersEvery=1;
	};
	class TCF_12Rnd_127x40_Mag_NARQ;
	class 6STB_12Rnd_127x40_Mag_NARQ: TCF_12Rnd_127x40_Mag_NARQ
	{
		displayname="[6th] 12Rnd 12.7x40mm NARQ Magazine";
		ammo="6STB_127x40_NARQ";
		count=12;
		mass=12;
	};
	class 6STB_12Rnd_127x40_Mag_NARQT: 6STB_12Rnd_127x40_Mag_NARQ
	{
		displayname="[6th] 12Rnd 12.7x40mm NARQ Magazine (Tracers)";
		ammo="6STB_127x40_NARQT";
		count=12;
		mass=12;
		tracersEvery=1;
	};
	class TCF_8Rnd_127x40_Mag_FG;
	class 6STB_8Rnd_127x40_Mag_FG: TCF_8Rnd_127x40_Mag_FG
	{
		displayname="[6th] 6Rnd 12.7x40mm Flares (Green)";
		ammo="6STB_127x40_FG";
		count=8;
		mass=5;
	};
	class TCF_8Rnd_127x40_Mag_FR;
	class 6STB_8Rnd_127x40_Mag_FR: TCF_8Rnd_127x40_Mag_FR
	{
		displayname="[6th] 8Rnd 12.7x40mm Flares (Red)";
		ammo="6STB_127x40_FR";
		count=8;
		mass=5;
	};
	class OPTRE_100Rnd_95x40_Box_Tracer;
	class 6STB_100Rnd_95x40_Box_T: OPTRE_100Rnd_95x40_Box_Tracer
	{
		displayname="[6th] 100Rnd 9.5x40mm Box (Tracers)";
		ammo="6STB_95x40_T";
		count=100;
		mass=30;
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class 6STB_250Rnd_95x40_Box_T: OPTRE_100Rnd_95x40_Box_Tracer
	{
		displayname="[6th] 250Rnd 9.5x40mm Box (Tracers)";
		ammo="6STB_95x40_T";
		count=250;
		mass=75;
		tracersEvery=1;
		lastRoundsTracer=250;
	};
	class 6STB_400Rnd_95x40_Box_T: OPTRE_100Rnd_95x40_Box_Tracer
	{
		displayname="[6th] 400Rnd 9.5x40mm Box (Tracers)";
		ammo="6STB_95x40_T";
		count=400;
		mass=100;
		tracersEvery=1;
		lastRoundsTracer=400;
	};
};