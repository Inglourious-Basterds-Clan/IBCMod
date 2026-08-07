class RscMsgBox
{
	movingEnable=1;
    scriptName="RscMsgBox";
    onLoad="[ ""onLoad"", _this, 'RscMsgBox' ] call (uinamespace getvariable 'ibc_warning_suppressor_fnc_RscMsgBox')";
    onUnload="[ ""onUnload"", _this, 'RscMsgBox' ] call (uinamespace getvariable 'ibc_warning_suppressor_fnc_RscMsgBox')";   
	class controlsBackground
	{
	};
	class Top
	{
		delete Title;
		class BcgCommonTop: RscBackgroundGUITop
		{
			idc=11001;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(7));
			w=QUOTE(POS_W(18.8));
			h=QUOTE(POS_H(1));
			colorBackground[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
				1
			};
		};
	};
	class Middle
	{
		delete Background;
		delete SubBackground;
		delete Text;
		class BcgCommon: RscBackgroundGUI
		{
			idc=11000;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(8.1));
			w=QUOTE(POS_W(18.8));
			h=QUOTE(POS_H(1.7));
			colorBackground[]={0,0,0,1};
		};
		class CA_Text: RscStructuredText
		{
			idc=101;
			x=QUOTE(POS_X(11.3));
			y=QUOTE(POS_Y(8.8));
			w=QUOTE(POS_W(17));
			h=QUOTE(POS_H(1));
		};
	};
	class Bottom
	{
		delete Button2;
		delete Button1;
		class BackgroundButtonLater: RscBackgroundGUI
		{
			idc=11002;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(9.9));
			w=QUOTE(POS_W(6.2));
			h=QUOTE(POS_H(1));
			colorBackground[]={0,0,0,1};
		};
		class BackgroundButtonRestart: BackgroundButtonLater
		{
			idc=11003;
			x=QUOTE(POS_X(16.9));
		};
		class BackgroundButtonCancel: BackgroundButtonLater
		{
			idc=11004;
			x=QUOTE(POS_X(23.2));
		};
		class CA_ButtonOK: RscButtonMenuOK
		{
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(9.9));
			w=QUOTE(POS_W(6.2));
			h=QUOTE(POS_H(1));
		};
		class CA_ButtonCancel: CA_ButtonOK
		{
			idc=2;
			default=0;
			shortcuts[]=
			{
				"0x00050000 + 1"
			};
			text="$STR_DISP_CANCEL";
			x=QUOTE(POS_X(23.2));
		};
	};
};
class RscMsgBox3
{
	movingEnable=1;
    scriptName="RscMsgBox";
    onLoad="[ ""onLoad"", _this, 'RscMsgBox' ] call (uinamespace getvariable 'ibc_warning_suppressor_fnc_RscMsgBox')";
    onUnload="[ ""onUnload"", _this, 'RscMsgBox' ] call (uinamespace getvariable 'ibc_warning_suppressor_fnc_RscMsgBox')";    
	class controlsBackground
	{
	};
	class Top
	{
		delete Title;
		class BcgCommonTop: RscBackgroundGUITop
		{
			idc=11001;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(7));
			w=QUOTE(POS_W(18.8));
			h=QUOTE(POS_H(1));
			colorBackground[]=
			{
				"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
				"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
				1
			};
		};
	};
	class Middle
	{
		delete Background;
		delete SubBackground;
		delete Text;
		class BcgCommon: RscBackgroundGUI
		{
			idc=11000;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(8.1));
			w=QUOTE(POS_W(18.8));
			h=QUOTE(POS_H(1.7));
			colorBackground[]={0,0,0,1};
		};
		class CA_Text: RscStructuredText
		{
			idc=101;
			x=QUOTE(POS_X(11.3));
			y=QUOTE(POS_Y(8.8));
			w=QUOTE(POS_W(17));
			h=QUOTE(POS_H(1));
		};
	};
	class Bottom
	{
		delete Button3;
		delete Button2;
		delete Button1;
		class BackgroundButtonLater: RscBackgroundGUI
		{
			idc=11002;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(9.9));
			w=QUOTE(POS_W(6.2));
			h=QUOTE(POS_H(1));
			colorBackground[]={0,0,0,1};
		};
		class BackgroundButtonRestart: BackgroundButtonLater
		{
			idc=11003;
			x=QUOTE(POS_X(16.9));
		};
		class BackgroundButtonCancel: BackgroundButtonLater
		{
			idc=11004;
			x=QUOTE(POS_X(23.2));
		};
		class CA_Later: RscButtonMenuOK
		{
			idc=6;
			default=0;
			x=QUOTE(POS_X(10.6));
			y=QUOTE(POS_Y(9.9));
			w=QUOTE(POS_W(6.2));
			h=QUOTE(POS_H(1));
		};
		class CA_ButtonOK: CA_Later
		{
			idc=1;
			shortcuts[]=
			{
				"0x00050000 + 2"
			};
			default=1;
			text="$STR_A3_RscMsgBox3_CA_ButtonOK";
			x=QUOTE(POS_X(16.9));
		};
		class CA_ButtonCancel: CA_Later
		{
			idc=2;
			shortcuts[]=
			{
				"0x00050000 + 1"
			};
			text="$STR_DISP_CANCEL";
			x=QUOTE(POS_X(23.2));
		};
	};
};
