disableSerialization;

private [ "_mode", "_params", "_class" ];
_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

if ( _mode == "onLoad" ) exitWith { 
	private _display = _params select 0;
	if ( getArray ( configFile >> "IBC_CfgWhitelist" >> "messages" ) findIf { toLower ctrlText ( _display displayCtrl 101 ) find _x != -1 } == -1 ) exitWith { _display closeDisplay 1 }
}
