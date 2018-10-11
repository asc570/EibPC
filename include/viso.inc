// $Id: viso.inc 68 2014-10-07 13:38:32Z asc $ //
REFRESH  = 20u08 /*20 sec */
////////////////////////////////
PSTR_G_GEN	=$Allgemein$c14
PSTR_G_UG	=$UG$c14
PSTR_G_EG	=$EG$c14
PSTR_G_OG1	=$OG1$c14
PSTR_G_DACH	=$Dach$c14

PSTR_P_GEN	=$Übersicht$c14
PSTR_P_LGT	=$Licht$c14
PSTR_P_HZ	=$Heizung$c14
PSTR_P_EL	=$Elektrik$c14
/////////////////////////////////
// Page ID
//////////////////////
// Übersicht : Allgemein
PID_GEN_1	= 1   

PID_EG_LGT	= 11
PID_EG_HZ	= 12
PID_EG_EL	= 12

PID_OG1_LGT	= 21
PID_OG1_HZ	= 22
PID_OG1_EL	= 22

PID_DACH_LGT	= 31
PID_DACH_HZ	= 32
PID_DACH_EL	= 32


PID_UG_LGT	= 41
PID_UG_HT	= 42
PID_UG_EL	= 43
////////////////////////////
// WebOutput ID
WOUT_ID_HKALL     = 1
WOUT_ID_WX        = 2
WOUT_ID_DACH_HZ   = 3
WOUT_ID_TEST      = 4
WOUT_ID_EG_HZ     = 5
//////////////////////////////
// Global Buttons
///////////////////////
// HZ
//
IdBut_Hz_Hk1_Mode    = 1
IdBut_Hz_Hk4_Mode    = 2
IdBut_Hz_MasterON    = 3  


////////////////////////////////////
wID_CHART_T_AUSSEN	= 1
wID_CHART_WIND		= 2
wID_CHART_T_EG		= 3
wID_CHART_M_AUSSEN	= 4
wID_CHART_T_OG1		= 5
wID_CHART_T_DACH	= 6


wIDBUT_T_AUSSEN		= 1

IdSmartHeat		= 99
IdSmartLight		= 2
IdHeating		= 3
IdLight 		= 4

IdBuHeatEG	= 1
IDShTempEG	= 2

IDch		= 1
IDch2		= 2


/////////////////////////////////////////
// Page Buttons
//
// Gen Allgemein
IdBut_G_Shutdown        = 1
// EG: Heizung
IdBut_EG_FBH_WohnZ      = 1
IdBut_EG_NightOverr     = 2

//Dach:Heizung
IdBut_D_H_HK4_MODE	= 1
IdBut_D_H_FBH_OST	= 2
IdBut_D_H_FBH_BAD	= 3
IdBut_D_H_FBH_WEST	= 4
IDBut_D_H_RAD_OST	= 5
IDBut_D_H_RAD_BAD	= 6
IDBut_D_H_RAD_WEST	= 7
IDBut_D_H_FBH_BAD_BOOST    = 8
IDShift_D_H_RAD_OST        = 9
IDShift_D_H_RAD_Bad        = 10
IDShift_D_H_HK4            = 11
IdBut_Dach_NightOverr      = 12
IDShift_D_H_RAD_WEST       = 13


