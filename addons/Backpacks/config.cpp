
class CfgPatches
{
	class Aux_6th
	{
		author = "6th Dev Team"
		requiredAddons[]=
		{

		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ILCS_Rucksack_Medical;
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ONI_Researcher_Suitcase;
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_ANPRC_515;
	class MA_M56S_Rucksack;
	class MA_M56S_Rucksack_ODST_Radio;
	class MA_M56S_Rucksack_Medic;

	//Rifleman
	//Marine
	class Marine_Backpack : OPTRE_UNSC_Rucksack
	{
	   displayName="[6th] Marine Rucksack";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   maximumLoad=300;  
	};
	
	//ODST
	class ODST_Backpack : MA_M56S_Rucksack
	{
	   displayName="[6th] ILCS Rucksack";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   maximumLoad=300;  
	};

	//RTO
	class Invisble_RTO: OPTRE_ILCS_Rucksack_Black
	{
	   displayName="[6th] RTO (Invis)";
	   author="6th STB S-5";
	   model="\A3\weapons_f\empty";
	   scopeArsenal=2;
	   maximumLoad=300;
	   tf_hasLRradio=1;
	   tf_encryptionCode="tf_west_radio_code";
	   tf_dialog="rt1523g_radio_dialog";
	   tf_subtype="digital_lr";
	   tf_range=25000;
	};
	class ILCS_RTO: MA_M56S_Rucksack_ODST_Radio
	{
		displayName="[6th] RTO Rucksack";
		author="6th STB S-5";
	    scopeArsenal=2;
	    maximumLoad=300;
	    tf_hasLRradio=1;
	    tf_encryptionCode="tf_west_radio_code";
	    tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=25000;
	}; 

	//Medical
	class Medical_Satchel: OPTRE_ONI_Researcher_Suitcase
	{ 
	   displayName="[6th] Medical Satchel";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   hiddenSelections[]= 
	   {
		"camo"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Medical_Satchel.paa"  
	   };
	   maximumLoad=400;
	};
	class ILCS_Medical : MA_M56S_Rucksack_Medic
	{ 
	   displayName="[6th] Medical Rucksack";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   maximumLoad=400;
	};

	//Bullfrog
	class Bullfrog_Jetpack : OPTRE_S12_SOLA_Jetpack
	{
		scopeArsenal=2;
		author="6th STB S-5";
		displayname="[6th] S12 SOLA Jumppack";
		maximumLoad=300;
		NSM_jumppack_is_jumppack=1;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=100;
		NSM_jumppack_recharge=3;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{25,7,25,0,1,1}
			}
		};
	};
	class Bullfrog_LR: Bullfrog_Jetpack
	{
	   displayName="[6th] S12 SOLA Jumppack (LR)";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   maximumLoad=300;
	   tf_hasLRradio=1;
	   tf_encryptionCode="tf_west_radio_code";
	   tf_dialog="rt1523g_radio_dialog";
	   tf_subtype="digital_lr";
	   tf_range=25000;
	   NSM_jumppack_is_jumppack=1;
	   NSM_jumppack_spam_delay=1;
	   NSM_jumppack_energy_capacity=100;
       NSM_jumppack_recharge=3;
	   NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
	   NSM_jumppack_effect_points[]=
	   {
			
		    {
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{25,7,25,0,1,1}
			}
		};
	};
	
	//I hope the backpacks were worth the pain and suffering you've caused. -Walker. "Justinian was here" -Justinian
	class TC_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Command Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\TC_ILCS.paa"  
	   };
	   maximumLoad=300
	};
	class TC_LR_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Command Rucksack (LR)";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        //"Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\TC_ILCS.paa"  
	   };
	   maximumLoad=300
	   tf_hasLRradio=1;
	   tf_encryptionCode="tf_west_radio_code";
	   tf_dialog="rt1523g_radio_dialog";
	   tf_subtype="digital_lr";
	   tf_range=25000;
	};
	class Lucas_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Lucas Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        //"Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Lucas_ILCS.paa"
	   };
	   maximumLoad=300
	};
	class Spectre_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Spectre Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Spectre_ILCS.paa"   
	   };
	   maximumLoad=300
	};
	class Spectre_Corpsman_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Spectre Corpsman Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Spectre_Corpsman_ILCS.paa"   
	   };
	   maximumLoad=300
	};
	class Templar_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Templar Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Templar_ILCS.paa"   
	   };
	   maximumLoad=300
	};
	class Templar_Corpsman_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Templar Corpsman Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Templar_Corpsman_ILCS.paa"   
	   };
	   maximumLoad=300
	};
	class Phoenix_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Phoenix Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Phoenix_ILCS.paa"  
	   };
	   maximumLoad=300
	};
	class Phoenix_Corpsman_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Phoenix Corpsman Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Phoenix_Corpsman_ILCS.paa"  
	   };
	   maximumLoad=300
	};
	class Ranger_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Ranger Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Ranger_ILCS.paa"   
	   };
	   maximumLoad=300
	};
	class Ranger_Corpsman_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Ranger Corpsman Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        "Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Ranger_Corpsman_ILCS.paa"   
	   };
	   maximumLoad=300    
	};
	class Walker_ILCS:MA_M56S_Rucksack
	{
		scopeArsenal=2
		author="6th STB S5";
		displayname="[6th] Walker Rucksack";
	   hiddenSelections[]= 
	   {
		"camo1",
        "camo2",
        //"Radio"
	   };
	   hiddenSelectionsTextures[]=
	   {
		"Backpacks\Textures\Walker_ILCS.paa"
	   };
	   maximumLoad=300
	};
};