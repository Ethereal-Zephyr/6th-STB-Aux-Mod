
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
	class ODST_Backpack : OPTRE_ILCS_Rucksack_Black
	{
	   displayName="[6th] ILCS Rucksack";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   maximumLoad=300;    
	};
	class Invisible_ODST : OPTRE_ILCS_Rucksack_Black
	{
		displayName="[6th] ILCS Rucksack (Invs)";
		author="6th STB S-5";
	    model="\A3\weapons_f\empty";
		scopeArsenal=2;
	    maximumLoad=300;
	};
	class ODST_Heavy : OPTRE_ILCS_Rucksack_Heavy
	{
		displayName="[6th] ILCS Rucksack (Heavy)";
		author="6th STB S-5";
	    scopeArsenal=2;
	    maximumLoad=350;    
    };

	//RTO
	class Invisble_RTO: OPTRE_ILCS_Rucksack_Black
	{
	   displayName="[6th] RTO (Invs)";
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
	class ILCS_RTO: OPTRE_ILCS_Rucksack_Black
	{
		displayName="[6th] RTO (ILCS)";
		author="6th STB S-5";
	    scopeArsenal=2;
	    maximumLoad=300;
	    tf_hasLRradio=1;
	    tf_encryptionCode="tf_west_radio_code";
	    tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=25000; 
	}; 
	class ODST_RTO: OPTRE_ANPRC_515
	{ 
	   displayName="[6th] RTO (AN/515)";
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
	   displayName="[6th] Medical (Satchel)";
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
	class ILCS_Medical : OPTRE_ILCS_Rucksack_Medical
	{ 
	   displayName="[6th] Medical (ILCS)";
	   author="6th STB S-5";
	   scopeArsenal=2;
	   maximumLoad=400;
	};
	class Invisble_Medical : OPTRE_ILCS_Rucksack_Medical
	{
		displayName="[6th] Medical (Invs)";
		author="6th STB S-5";
	    model="\A3\weapons_f\empty";
		scopeArsenal=2;
	    maximumLoad=400;
	    hiddenSelections[]={};
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
	class RTO_Jetpack : OPTRE_S12_SOLA_Jetpack
	{
		scopeArsenal=2;
		author="6th STB S-5";
		displayname="[6th] S12 SOLA Jumppack (RTO)";
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
};