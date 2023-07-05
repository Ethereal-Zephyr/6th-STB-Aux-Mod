#define _ARMA_

class CfgPatches
{
	class Intro_6th
	{
		author = "EtherealZephyr";
		requiredAddons[]= 
		{
			"A3_Data_F_Enoch_Loadorder",
			"19th_Fleet_Armor"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class RscPicture{}; //part of the background
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{}; 

class RscTitles //part of the background
{
	class SplashNoise //part of the background
		{
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "";
			};
		};
	class brokenhud : SplashNoise	//part of the background
		{
			duration=100000000
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "";
			};
		};
};	
class RscDisplayMain: RscStandardDisplay //this class changes the insignia on the top
{
	class Controls //this class changes the insignia on the top
	{
	    delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscPicture //this class changes the insignia on the top
		{
			text = "6th_Menu\Logo.paa";
			
		};
	};
	enableDisplay = 0;
	delete Spotlight;
	class RscActiveText ;
    class RscActivePicture : RscActiveText
    {
        style = 48;
        color[] = {
                1, 1, 1, 0.500000
        };
        colorActive[] = {
                1, 1, 1, 1
        };
    };
	
	class controlsBackground {
        class LoadingPic : RscPicture {
            idc=1;
            x = SafeZoneX;
            y = SafeZoneY;
            h = SafeZoneH;
            w = SafeZoneW;
            text = "6th_Menu\LS4.paa";
        };
    };
};

class RscDisplayLoading {
	class Variants {
		class LoadingOne {
			idd = 250;
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "6th_Menu\LS3.paa";
				};
			};
		};

		class Loading_West1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "6th_Menu\LS1.paa";
				};
			};
		};

		class Loading_West2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "6th_Menu\LS2.paa";
				};
			};
		};

		class Loading_East1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "6th_Menu\LS5.paa";
				};
			};
		};
		class Loading_East2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "6th_Menu\LS3.paa";
				};
			};
		};
	};
};

class RscDisplayLoadMission : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "6th_Menu\LS5.paa";
		};
	};
};

class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "6th_Menu\LS2.paa";
		};
	};
};

class RscDisplayMPPlayers;
	class RscDisplayClientWait : RscDisplayMPPlayers {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "6th_Menu\LS1.paa";
		};
	};

class RscDisplayClient : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "6th_Menu\LS2.paa";
		};
	};
};