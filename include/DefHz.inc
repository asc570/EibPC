// $Id: DefHz.inc 59 2014-04-02 15:49:47Z asc $ //
// constants for UVR1611 and MDT HzActor
//
/////////////////////
// constants
/////////////////////////
//
// global
fIsWorkday		= EIN
// Startup Delay
HZ_SEND_T_DELAY = AUS
// Reset Time for Night Override in H
TIME_RESET_NIGHT_OVERR = 3u08
// UVR1611
// der NET-BC des UVR1611 kennt nur den 2Byte DTP (u16).
//
UVR_SBY			= 64u16
UVR_AUTO		   = 65u16
UVR_NORMAL		= 66u16
UVR_ABGESENKT	= 67u16
UVR_INTERN		=127u16
UVR_ERROR		= 0u16
//
// intern und zum KNX-Bus 1byte DTP (u08)
//
UVR_SBY8		= 64u08	/* frost Mode */
UVR_AUTO8		= 65u08
UVR_NORMAL8		= 66u08
UVR_ABGESENKT8	= 67u08
UVR_INTERN8		=127u08

//
// MDT AKH 0800.01
// KNX Seite -> 1byte DTP
//
HZ_MDT_INIT    = 0u08
HZ_MDT_KOMFORT = 1u08
HZ_MDT_SBY		= 2u08
HZ_MDT_NIGHT	= 3u08
HZ_MDT_FROST	= 4u08
// HVCA status heating
HZ_MDT_KOMFORTst	  = 0x21u08
HZ_MDT_SBYst		  = 0x22u08
HZ_MDT_NIGHTst	     = 0x24u08
HZ_MDT_FROSTst	     = 0x28u08
//HZ_MDT_FALARM  = 80u08
// MDT HVAC Status
//
HZ_HVAC_KOMFORT	= 1u08
HZ_HVAC_SBY		= 2u08
HZ_HVAC_NIGHT	= 4u08
HZ_HVAC_FROST	= 8u08
HZ_HVAC_FALARM  = 80u08

//
// PcUvrMode
PCUVR_UVR_SBY			= 64u08		/* Frost mode */
PCUVR_UVR_AUTO			= 65u08
PCUVR_UVR_NORMAL		= 66u08
PCUVR_UVR_ABGESENKT	= 67u08
PCUVR_UVR_INTERN		= 127u08
PCUVR_PCAUTO			= 128u08


//////////////////////////////////
// GA const NET-BC alles xu16
//
//GA_Hk1Mode	= "Aout05-11/3/5"
//GA_Hk2Mode	= "Aout06-11/3/6"
//GA_Hk3Mode	= "Aout07-11/3/7"
//GA_Hk4Mode	= "Aout08-11/3/8"
////////////////////////
// global variables
//////////////////
//

////////////////////////////////////////////////////////////////////
// FBH Day/Night
//
// FBH HK1 and HK4
FBH_HK1_DayH	= 6u08
FBH_HK1_NightH	= 19u08
FBH_HK3_DayH	= 6u08
FBH_HK3_NightH	= 19u08
FBH_HK4_DayH	= 8u08
FBH_HK4_NightH	= 19u08
//
// Globals
//
/////////////////////////////////////////
stfHzHouseFrost	= AUS	/* StatusFlag  */
fHzHouseBoost	   = AUS	/* SetHzHouseToBoost(fBoost) */ 
bHzMasterON       = EIN
//////////////////////////

HzTimeBoostGen		= 1u08
fNightOverrideGen		= AUS

//////////////////////////////////////////
// EG 
// dH: begin Day hour
// nH: begin Night hour
// w== workDay, e=weekEnd
//
//  Global
// EG
//
HzEGdH_Global		= 6u08	/* begin Day Hour, Global  */
HzEGnH_Global		= 19u08	/* begin Night Hour, Global */
HzEG_UVR8miniMode	= UVR_NORMAL8
fHzEG_Boost			= AUS
fHzEG_Frost			= AUS
fNightOverride_EG	= AUS
//
// OG1
//
HzOG1dH_Global		= 6u08	/* begin Day Hour, Global  */
HzOg1nH_Global		= 19u08	/* begin Night Hour, Global */
fHzOG1_Boost		= AUS
fHzOG1_Frost		= AUS
fNightOverride_OG1	= AUS
//
// Dach
//
HzDachdH_Global		= 6u08	/* begin Day Hour, Global  */
HzDachnH_Global		= 19u08	/* begin Night Hour, Global */
fHzDach_Boost		= AUS
fHzDach_Frost		= AUS
fNightOverride_Dach	= AUS
//
//	EG
//
// EssZ (E)
MdtMode_EssZ 		= HZ_MDT_KOMFORT 
HzEGnH_EssZ 		= HzEGnH_Global
HzEGdHw_EssZ		= HzEGdH_Global	/* workday */
HzEGdHe_EssZ		= HzEGdH_Global	/* weekend */
HzEGdH_EssZ			= HzEGdHw_EssZ
fHzEG_EssZ_IsDay 	= AUS
fHzEG_EssZ_IsAuto 	= EIN
HzTimeBoost_EssZ	= HzTimeBoostGen /* Boost duration */
HzStTimeBoost_EssZ	= 1u64	/* remaining time from delayc() */
//fHzBoost_EssZ		= AUS
fHzFrost_EssZ		= AUS
fHzNightOverr_EssZ	= AUS
Hk5_SwEssZB       = AUS

tEgMix_EssZ			= 19f16
//
// WohnZ (C)
MdtMode_WohnZ		= HZ_MDT_FROST
HzEGnH_WohnZ		= HzEGnH_Global
HzEGdHw_WohnZ		= HzEGdH_Global
HzEGdHe_WohnZ		= HzEGdH_Global
HzEGdH_WohnZ		= HzEGdHw_WohnZ 
fHzEG_WohnZ_IsDay	=AUS
fHzEG_WohnZ_IsAuto	=AUS
HzTimeBoost_WohnZ	= HzTimeBoostGen
HzStTimeBoost_WohnZ	= 1u64
//fHzBoost_WohnZ		= AUS
fHzFrost_WohnZ		= AUS
fHzNightOverr_WohnZ	= AUS
Hk5_SwWohnZB       = AUS
//
// WC (A)
MdtMode_WC			= HZ_MDT_KOMFORT 
HzEGnH_WC			= HzEGnH_Global
HzEGdHw_WC			= HzEGdH_Global
HzEGdHe_WC			= HzEGdH_Global
HzEGdH_WC			= HzEGdHw_WC
fHzEG_WC_IsDay		= AUS
fHzEG_WC_IsAuto		= EIN
HzTimeBoost_WC		= HzTimeBoostGen
HzStTimeBoost_WC	= 1u64
//fHzBoost_WC			= AUS
fHzFrost_WC			= AUS
fHzNightOverr_WC	= AUS
//
// Gardrobe	(prop)(B)	
MdtMode_Gard		= HZ_MDT_KOMFORT 
HzEgPerDay_Gard		= 100%
HzEgPerNight_Gard	= 100%
HzEgPer_Gard		= HzEgPerDay_Gard	
HzEGnH_Gard			= HzEGnH_Global
HzEGdHw_Gard		= HzEGdH_Global
HzEGdHe_Gard		= HzEGdH_Global		
HzEGdH_Gard			= HzEGdHw_Gard
fHzEG_Gard_IsDay	= AUS
fHzEG_Gard_IsAuto	= EIN
HzTimeBoost_Gard	= HzTimeBoostGen
HzStTimeBoost_Gard	= 1u64
//fHzBoost_Gard		= AUS
fHzFrost_Gard		= AUS
fHzNightOverr_Gard	= AUS
//
// Treppe (prop)(B OG1)
MdtMode_Tr			= HZ_MDT_KOMFORT 
HzEgPerHigh_Day   =  100%
HzEgPerLow_Day   =   20%
HzEgPerDay_Tr		=  HzEgPerHigh_Day
HzEgPerNight_Tr		= 20%
HzEgPer_Tr			= HzEgPerDay_Tr	
HzEGnH_Tr			= HzEGnH_Global	
HzEGdHw_Tr			= HzEGdH_Global
HzEGdHe_Tr			= HzEGdH_Global		
HzEGdH_Tr			= HzEGdHw_Tr
fHzEG_Tr_IsDay		= AUS
fHzEG_Tr_IsAuto		= EIN
HzTimeBoost_Tr		= HzTimeBoostGen
HzStTimeBoost_Tr	= 1u64
//fHzBoost_Tr			= AUS
fHzFrost_Tr			= AUS
fHzNightOverr_Tr	= AUS
//
// OG1
fIsDayOG1			= EIN
Hk5_SwOg1         = AUS
//fIsDayOG1_Override	= AUS
timeOG1_unlockMEG_Gen		= 6u08	/* allow mode change at this hour */
timeOG1_unlockMEG_Marisa	= timeOG1_unlockMEG_Gen
timeOG1_unlockMEG_Emilia	= timeOG1_unlockMEG_Gen
timeOG1_unlockMEG_Buero		= timeOG1_unlockMEG_Gen
//
// start Day Hour
//

// start night hour, e -> weekend, w ->workday
timeHzOG1_nHe_Gen			= 20u08		/* weekend */
timeHzOG1_nHw_Gen			= 20u08		/* workday */
timeHzOG1_He_Gen			= timeHzOG1_nHw_Gen
//
timeHzOG1_nHe_Marisa		= timeHzOG1_nHe_Gen
timeHzOG1_nHe_Emilia		= timeHzOG1_nHe_Gen
timeHzOG1_nHe_Buero			= timeHzOG1_nHe_Gen

//
timeHzOG1_nHw_Marisa		= timeHzOG1_nHw_Gen
timeHzOG1_nHw_Emilia		= timeHzOG1_nHw_Gen
timeHzOG1_nHw_Buero			= timeHzOG1_nHw_Gen
//
timeHzOG1_nH_Marisa			= timeHzOG1_nHe_Gen
timeHzOG1_nH_Emilia			= timeHzOG1_nHe_Gen
timeHzOG1_nH_Buero			= timeHzOG1_nHe_Gen
//
// Dach
//
DACH_FBH_SELECT_OST	= 1u08
DACH_FBH_SELECT_BAD	= 2u08
DACH_FBH_SELECT_West= 3u08
//
S_FbhSelect			=	DACH_FBH_SELECT_BAD
//
fT_limit_Dach_Ost_Rad   = 21f16    /* switch Radiator OstFenster */
fT_limit_Dach_West_Rad  = 21f16    /* switch Radiator West Fenster */
fT_limit_Dach_Bad_Rad   = 22f16    /* switch Radiator Bad Fenster */
//
// Dach BadOnly Boost
fBoostOnlyDachBad             = AUS
BoostOnlyDachTimeRemaining    = 0u64
///////////////////////////////////////////////////
// UVR8mini for HKx
/////////////////////////////////////////////////////////////////////////
// Hk1
//    EG FBH
//
Hk1_All_Uvr8ModeMini	= UVR_ABGESENKT8
Hk1_DayStart_Base		= 5u08
Hk1_DayEnd_Diff		= 0u08
Hk1_DayEnd_Base		= HzEGnH_Global - Hk1_DayEnd_Diff
Hk1_DayStart			= Hk1_DayStart_Base
Hk1_DayEnd				= Hk1_DayEnd_Base
Hk1_fIsDay				= EIN
Hk1_fNightOverride	= AUS
Hk1_TCorr            = 0f16

/////////////////////////////////////////////////////////////////////////
// Hk4
//    Dach FBH
//
Hk4_All_Uvr8ModeMini	= UVR_ABGESENKT8
Hk4_DayStart_Base		= 5u08
Hk4_DayEnd_Base		= HzEGnH_Global
Hk4_DayStart			= Hk4_DayStart_Base
Hk4_DayEnd				= Hk4_DayEnd_Base
Hk4_fIsDay				= EIN
Hk4_fNightOverride	= AUS
Hk4_TCorr            = 0f16
/////////////////////////////////////////////////////////////////////////
// HK3
//    Radiator: Frost und Boost
//    HK permanently ON:
//    Frost Mode when UVR_ABGESENKT8
//       This Mode it is controlled by Raumtemperatur
//    Boost Mode when UVR_NORMAL
//       This Mode uses a fixed Temperatur permanently
//
HK3MINI_ALL			= 1u08
HK3MINI_EG			= 2u08
HK3MINI_OG1			= 3u08
HK3MINI_Dach		= 4u08
//
HK3_MiniMode		= HK3MINI_EG
//
Hk3_EG_Uvr8ModeMini		= UVR_ABGESENKT8
Hk3_OG1_Uvr8ModeMini	= UVR_ABGESENKT8
Hk3_Dach_Uvr8ModeMini	= UVR_ABGESENKT8
Hk3_All_Uvr8ModeMini	= UVR_ABGESENKT8
//
Hk3_DayStart			= 6u08
Hk3_DayEnd				= 19u08
//
Hk3_fSwSbyNight		= EIN
/////////////////////////////////////////////////////////////////////////
// HK5
//    Radiator: switched increase 
//    HK is controlled ON/OFF if required
//    No Frost function
//    Uses UVR_ABGESNKT8 and UVR_NORMAL8 to controll VL
//
HK5MINI_ALL			= 1u08
HK5MINI_EG			= 2u08
HK5MINI_OG1			= 3u08
HK5MINI_Dach		= 4u08
//
HK5_MiniMode		= HK5MINI_EG
//
Hk5_EG_Uvr8ModeMini		= UVR_ABGESENKT8
Hk5_OG1_Uvr8ModeMini	   = UVR_ABGESENKT8
Hk5_Dach_Uvr8ModeMini	= UVR_ABGESENKT8
Hk5_All_Uvr8ModeMini	   = UVR_ABGESENKT8
//
Hk5_DayStart			= 6u08
Hk5_DayEnd				= 19u08
//
//
Hk5_SwMain              = AUS
Hk5_SwMan               = AUS
Hk5_fSwSbyNight			= EIN
Hk5_fArme               = EIN
//////////////////////////////////
// UVR
//
Hk1_Uvr8Mode		= UVR_NORMAL8
Hk2_Uvr8Mode		= UVR_NORMAL8
Hk3_Uvr8Mode		= UVR_ABGESENKT8
Hk4_Uvr8Mode		= UVR_NORMAL8
Hk5_Uvr8Mode		= UVR_NORMAL8
//
Hk1_Uvr8ModeBase		= UVR_NORMAL8
Hk2_Uvr8ModeBase		= UVR_NORMAL8
Hk3_Uvr8ModeBase		= UVR_ABGESENKT8
Hk4_Uvr8ModeBase		= UVR_NORMAL8
Hk_Uvr8ModeBase		= UVR_NORMAL8

//
PcUvr_ModeHk1	= PCUVR_PCAUTO
PcUvr_ModeHk2	= PCUVR_PCAUTO
//PcUvr_ModeHk3	= PCUVR_UVR_ABGESENKT
PcUvr_ModeHk4	= PCUVR_PCAUTO
PcUvr_ModeHk5	= PCUVR_PCAUTO
/////////////////////////////////////
// House
//
// Boost Mode
//
BOOST_DELAY    = 7200000u64
BOOST_DELAY_MAX= 9000000u64
bM_Off         = 0u08
bM_Low         = 1u08 /* SetLockPos */
bM_Mid         = 2u08 /* Hk5 ON night */
bM_High        = 3u08 /* Hk5 ON day */
bM_Max         = 4u08 /* Hk3 normal */
//

bm_stEG          = bM_Off
bm_stOg1         = bM_Off
bm_stDach        = bM_Off
//
