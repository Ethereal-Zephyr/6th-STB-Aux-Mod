class CfgPatches
{
	class Aux_6th
	{
		author="6th Dev Team";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
		};
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		class 6th_Standard_Helmets
		{
			label = "[6th] M56SR Squad Variants";
			author = "6STB Dev Team";
			options[] = {"Variant"};
			class Variant
			{
				values[] = {"Command","Phoenix","Spectre","Templar","Ranger"};
				class Command
				{
					label = "Command";
				};
				class Phoenix
				{
					label = "Phoenix";
				};
				class Phoenix_C
				{
					label = "Phoenix (C)";
				};
				class Spectre
				{
					label = "Spectre";
				};
				class Spectre_C
				{
					label = "Spectre (C)";
				};
				class Templar
				{
					label = "Templar";
				};
				class Templar_C
				{
					label = "Templar (C)";
				};
				class Ranger
				{
					label = "Ranger";
				};
			};
		};
		class 6th_Custom_Helmets
		{
			label = "[6th] M56SR Custom Variants";
			author = "6STB Dev Team";
			options[] = {"Variant"};
			class Variant
			{
				values[] = {"Cherryy","Leer","Delt","Gillian","Mango","Hatt","Jengus","Melo","Walker","Munchlax","Angoth","Doyle","Justinian"};
				class Cherryy
				{
					label = "Cherryy";
				};
				class Leer
				{
					label = "Leer";
				};
				class Delt
				{
					label = "Delt";
				};
				class Gillian
				{
					label = "Gillian";
				};
				class Mango
				{
					label = "Mango";
				};
				class Hatt
				{
					label = "Hatt";
				};
				class Jengus
				{
					label = "Jengus";
				};
				class Melo
				{
					label = "Melo";
				};
				class Walker
				{
					label = "Walker";
				};
				class Munchlax
				{
					label = "Munchlax";
				};
				class Angoth
				{
					label = "Angoth";
				};
				class Doyle
				{
					label = "Doyle";
				};
				class Justinian
				{
					label = "Justinian";
				};
			};
		};
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
	class MA_Helmet_Base;
	
	class MA_M56SR_Helmet: MA_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MA] M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			};
		};
	};
	class MA_M56A_Helmet: MA_Helmet_Base
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MA] M56-A Helmet";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\AA\AA_Helm_co.paa",
			"MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Helmets\AA\AA_Helm_co.paa",
				"MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
			};
		};
	};
	
	//Valkyrie Helmets
	class Valkyrie_Walker_Helmet: MA_M56A_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Valkyrie Helmet (Walker)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Walker";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Valkyrie\Walker_H",
			"Helmets\Textures\Valkyrie\Walker_V"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Valkyrie\Walker_H",
				"Helmets\Textures\Valkyrie\Walker_V"
			};
		};
	};
	class Valkyrie_Munchlax_Helmet: MA_M56A_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Valkyrie Helmet (Munchlax)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Munchlax";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Valkyrie\Munchlax_H",
			"Helmets\Textures\Valkyrie\Munchlax_V"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Valkyrie\Munchlax_H",
				"Helmets\Textures\Valkyrie\Munchlax_V"
			};
		};
	};
	class Valkyrie_Angoth_Helmet: MA_M56A_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Valkyrie Helmet (Angoth)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Angoth";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Valkyrie\Angoth_H",
			"Helmets\Textures\Valkyrie\Angoth_V"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Valkyrie\Angoth_H",
				"Helmets\Textures\Valkyrie\Angoth_V"
			};
		};
	};
	class Valkyrie_Doyle_Helmet: MA_M56A_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Valkyrie Helmet (Doyle)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Doyle";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Valkyrie\Doyle_H",
			"Helmets\Textures\Valkyrie\Doyle_V"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Valkyrie\Doyle_H",
				"Helmets\Textures\Valkyrie\Doyle_V"
			};
		};
	};
	class Valkyrie_Justinian_Helmet: MA_M56A_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Valkyrie Helmet (Justinian)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Justinian";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Valkyrie\Justinian_H",
			"Helmets\Textures\Valkyrie\Justinian_V"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Valkyrie\Justinian_H",
				"Helmets\Textures\Valkyrie\Justinian_V"
			};
		};
	};
	
	//Tombstone Armors
	class Command_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Tombstone Command Helmet";
		class XtdGearInfo
		{
			model="6th_Standard_Helmets";
			Variant="Command";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Command\TC_H.paa",
			"Helmets\Textures\Tombstone\Command\TC_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Command\TC_H.paa",
				"Helmets\Textures\Tombstone\Command\TC_V.paa"
			};
		};
	};
	class Spectre_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Spectre Squad Helmet";
		class XtdGearInfo
		{
			model="6th_Standard_Helmets";
			Variant="Spectre";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Spectre\Spectre_H.paa",
			"Helmets\Textures\Tombstone\Spectre\Spectre_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Spectre\Spectre_H.paa",
				"Helmets\Textures\Tombstone\Spectre\Spectre_V.paa"
			};
		};
	};
	class Templar_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Templar Squad Helmet";
		class XtdGearInfo
		{
			model="6th_Standard_Helmets";
			Variant="Templar";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Templar_H.paa",
			"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Templar_H.paa",
				"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
			};
		};
	};
	class Phoenix_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Phoenix Squad Helmet";
		class XtdGearInfo
		{
			model="6th_Standard_Helmets";
			Variant="Phoenix";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Phoenix\Phoenix_H.paa",
			"Helmets\Textures\Tombstone\Phoenix\Phoenix_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Phoenix\Phoenix_H.paa",
				"Helmets\Textures\Tombstone\Phoenix\Phoenix_V.paa"
			};
		};
	};
	class Ranger_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Ranger Helmet";
		class XtdGearInfo
		{
			model="6th_Standard_Helmets";
			Variant="Ranger";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Ranger\Ranger_H.paa",
			"Helmets\Textures\Tombstone\Ranger\Ranger_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Ranger\Ranger_H.paa",
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			};
		};
	};
	
	//Tombstone Customs
	class Cherryy_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Command Helmet (Cherryy)";
		class XtdGearInfo
		{
			model="6th_Customs_Helmets";
			Variant="Cherryy";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Command\Cherryy_H.paa",
			"Helmets\Textures\Tombstone\Command\Cherryy_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Command\Cherryy_H.paa",
				"Helmets\Textures\Tombstone\Command\Cherryy_V.paa"
			};
		};
	};
	class Delt_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Templar Helmet (Delt)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Delt";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Delt_H.paa",
			"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Delt_H.paa",
				"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
			};
		};
	};
	class Gillian_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Templar Helmet (Gillian)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Gillian";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Gillian_H.paa",
			"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Gillian_H.paa",
				"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
			};
		};
	};
	class Leer_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Templar Helmet (Leer)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Leer";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Leer_H.paa",
			"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Leer_H.paa",
				"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
			};
		};
	};
	class Mango_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Templar Helmet (Mango)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Mango";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Mango_H.paa",
			"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Mango_H.paa",
				"Helmets\Textures\Tombstone\Templar\Templar_V.paa"
			};
		};
	};
	class Hatt_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Phoenix Helmet (Hatt)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Hatt";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Phoenix\Hatt_H.paa",
			"Helmets\Textures\Tombstone\Phoenix\Phoenix_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Phoenix\Hatt_H.paa",
				"Helmets\Textures\Tombstone\Phoenix\Phoenix_V.paa"
			};
		};
	};
	class Jengus_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Phoenix Helmet (Jengus)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Jengus";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Jengus_H.paa",
			"Helmets\Textures\Tombstone\Templar\Phoenix_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Jengus_H.paa",
				"Helmets\Textures\Tombstone\Templar\Phoenix_V.paa"
			};
		};
	};
	class Melo_Helmet: MA_M56SR_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6th] Phoenix Helmet (Melo)";
		class XtdGearInfo
		{
			model="6th_Custom_Helmets";
			Variant="Melo";
		};
		hiddenSelectionsTextures[]=
		{
			"Helmets\Textures\Tombstone\Templar\Melo_H.paa",
			"Helmets\Textures\Tombstone\Templar\Phoenix_V.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"Helmets\Textures\Tombstone\Templar\Melo_H.paa",
			"Helmets\Textures\Tombstone\Templar\Phoenix_V.paa"
			};
		};
	};
};
