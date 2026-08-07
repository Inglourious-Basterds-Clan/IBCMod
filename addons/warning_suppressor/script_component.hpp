#define COMPONENT warning_suppressor
#include "\z\ibc\addons\main\script_mod.hpp"

#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f\hpp\defineResincl.inc"
#include "\a3\ui_f\hpp\defineResinclDesign.inc"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_WARNING_SUPPRESSOR
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_WARNING_SUPPRESSOR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WARNING_SUPPRESSOR
#endif

#include "\z\ibc\addons\main\script_macros.hpp"

#define POS_X(N) ((N) * GUI_GRID_W + GUI_GRID_CENTER_X)
#define POS_Y(N) ((N) * GUI_GRID_H + GUI_GRID_CENTER_Y)
#define POS_W(N) ((N) * GUI_GRID_W)
#define POS_H(N) ((N) * GUI_GRID_H)
