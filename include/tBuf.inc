// $Id: tBuf.inc 62 2014-04-08 15:08:04Z asc $ //
TBUF_LEN_MAX         = 256u16
TBUF_LEN_HUM         = 256u16
TBUF_LEN_WIND        = 2560u16
START_DELAY          = 200000u64
START_DELAY_READ     = 5000u64

//////////////////////////////////////

IdBuf_T_Outside	         = 1
IdBuf_T_EG_EssZ	         = 2

//IdBuf_T_EG_Zas_EssZ     = 23
IdBuf_T_EG_WohnZ           = 3
//IdBuf_T_EG_Send_Kueche  = 24
//IdBuf_T_EG_Send_WohnZ   = 25
IdBuf_T_EG_WC              = 4

IdBuf_T_OG1_MEG_Puck       = 5
IdBuf_T_OG1_MEG_Emilia     = 6
IdBuf_T_OG1_MEG_Marisa     = 7
IdBuf_T_OG_Bas_Bad         = 8

IdBuf_T_Dach_Bad           = 9
IdBuf_T_Dach_Ost           = 10
IdBuf_T_Dach_West          = 11
IdBuf_H_Dach_Bad           = 12

IdBuf_Speed_Wind           = 13

IdBuf_PID_HK1	            = 14
IdBuf_PID_HK3	            = 15
IdBuf_PID_HK4	            = 16
IdBuf_PID_HK5	            = 17

IdBuf_T_VL1	               = 18
IdBuf_T_RL1	               = 19
IdBuf_T_VL3	               = 12
IdBuf_T_RL3	               = 21
IdBuf_T_VL4	               = 22
IdBuf_T_RL4	               = 23
IdBuf_T_VCol9	            = 24
IdBuf_T_RCol9	            = 25

IdBuf_S_Pump1              = 26
//IdBuf_S_Pump2            = 17
IdBuf_S_Pump3              = 27
IdBuf_S_Pump4              = 28
IdBuf_S_PumpWW             = 29



//////////////////////////////////////////////////////////////////////////////////////////
timebufferconfig(IdBuf_T_Outside,0,TBUF_LEN_MAX,"Ain16-11/2/16")

timebufferconfig(IdBuf_PID_HK1,0,TBUF_LEN_MAX,"Ain01-11/2/1")
timebufferconfig(IdBuf_PID_HK3,0,TBUF_LEN_MAX,"Ain03-11/2/3")
timebufferconfig(IdBuf_PID_HK4,0,TBUF_LEN_MAX,"Ain04-11/2/4")
timebufferconfig(IdBuf_PID_HK5,0,TBUF_LEN_MAX,"Ain05-11/2/5")

timebufferconfig(IdBuf_T_VL1,0,TBUF_LEN_MAX,"Ain06-11/2/6")
timebufferconfig(IdBuf_T_RL1,0,TBUF_LEN_MAX,"Ain07-11/2/7")
timebufferconfig(IdBuf_T_VL3,0,TBUF_LEN_MAX,"Ain08-11/2/8")
timebufferconfig(IdBuf_T_RL3,0,TBUF_LEN_MAX,"Ain09-11/2/9")
timebufferconfig(IdBuf_T_VL4,0,TBUF_LEN_MAX,"Ain10-11/2/10")
timebufferconfig(IdBuf_T_RL4,0,TBUF_LEN_MAX,"Ain11-11/2/11")
timebufferconfig(IdBuf_T_VCol9,0,TBUF_LEN_MAX,"Ain12-11/2/12")
timebufferconfig(IdBuf_T_RCol9,0,TBUF_LEN_MAX,"Ain13-11/2/13")

timebufferconfig(IdBuf_S_Pump1,0,TBUF_LEN_MAX,"Din11-11/0/11")
timebufferconfig(IdBuf_S_Pump3,0,TBUF_LEN_MAX,"Din09-11/0/9")
timebufferconfig(IdBuf_S_Pump4,0,TBUF_LEN_MAX,"Din08-11/0/8")
timebufferconfig(IdBuf_S_PumpWW,0,TBUF_LEN_MAX,"Din12-11/0/12")
// EG
timebufferconfig(IdBuf_T_EG_EssZ,0,TBUF_LEN_MAX,"TavgEGEssZ-6/1/14")
timebufferconfig(IdBuf_T_EG_WohnZ,0,TBUF_LEN_MAX,"TavgEGWohnZ-6/1/13")
timebufferconfig(IdBuf_T_EG_WC,0,TBUF_LEN_MAX,"TavgEGWC-6/1/15")
// OG1
timebufferconfig(IdBuf_T_OG1_MEG_Puck,0 ,TBUF_LEN_MAX,"T_OG1_Buero_Merten_MEG-6/2/3")
timebufferconfig(IdBuf_T_OG1_MEG_Emilia,0 ,TBUF_LEN_MAX,"T_OG1_Emilia_MRG-6/2/2")
timebufferconfig(IdBuf_T_OG1_MEG_Marisa,0 ,TBUF_LEN_MAX,"GetMEG_Marisa_IstT-7/2/19")
timebufferconfig(IdBuf_T_OG_Bas_Bad,0 ,TBUF_LEN_MAX,"T_OG1_Bad_Basalte-6/2/1")
// Dach
timebufferconfig(IdBuf_T_Dach_Bad,0 ,TBUF_LEN_MAX,"TavgDachBad-6/3/6")
timebufferconfig(IdBuf_H_Dach_Bad,0 ,TBUF_LEN_HUM ,"HyBad-3/4/2")
timebufferconfig(IdBuf_T_Dach_Ost,0 ,TBUF_LEN_MAX,"TavgDachOst-6/3/5")


// wind
timebufferconfig(IdBuf_Speed_Wind,0 ,TBUF_LEN_WIND,"RsWxWindSpeed-3/6/3")

///////////////////////////////////////////////////////////////////////////////
if( after(systemstart(),START_DELAY )  or change("Ain01-11/2/1")) then timebufferadd(IdBuf_PID_HK1,"Ain01-11/2/1") endif
if( after(systemstart(),START_DELAY )  or change("Ain03-11/2/3")) then timebufferadd(IdBuf_PID_HK3,"Ain03-11/2/3") endif
if( after(systemstart(),START_DELAY )  or change("Ain04-11/2/4")) then timebufferadd(IdBuf_PID_HK4,"Ain04-11/2/4") endif
if( after(systemstart(),START_DELAY )  or change("Ain05-11/2/5")) then timebufferadd(IdBuf_PID_HK5,"Ain05-11/2/5") endif

if( after(systemstart(),START_DELAY )  or change("Din11-11/0/11")) then timebufferadd(IdBuf_S_Pump1,"Din11-11/0/11") endif
if( after(systemstart(),START_DELAY )  or change("Din09-11/0/9"))  then timebufferadd(IdBuf_S_Pump3,"Din09-11/0/9") endif
if( after(systemstart(),START_DELAY )  or change("Din08-11/0/8"))  then timebufferadd(IdBuf_S_Pump4,"Din08-11/0/8") endif
if( after(systemstart(),START_DELAY )  or change("Din12-11/0/12"))  then timebufferadd(IdBuf_S_PumpWW,"Din12-11/0/12") endif


if( event( "Ain06-11/2/6")) then{

	timebufferadd(IdBuf_T_VL1,"Ain06-11/2/6");
	timebufferadd(IdBuf_T_RL1,"Ain07-11/2/7");
	timebufferadd(IdBuf_T_VL3,"Ain08-11/2/8");
	timebufferadd(IdBuf_T_RL3,"Ain09-11/2/9");
	timebufferadd(IdBuf_T_VL4,"Ain10-11/2/10");
	timebufferadd(IdBuf_T_RL4,"Ain11-11/2/11");
	timebufferadd(IdBuf_T_VCol9,"Ain12-11/2/12");
	timebufferadd(IdBuf_T_RCol9,"Ain12-11/2/12");
   }endif
	
	
if( mtime(0,0) or mtime(15,0) or mtime(30,0) or mtime(45,0) ) then{
	timebufferadd(IdBuf_T_Outside,"Ain16-11/2/16");

	timebufferadd(IdBuf_T_EG_EssZ,"TavgEGEssZ-6/1/14");
   timebufferadd(IdBuf_T_EG_WohnZ,"TavgEGWohnZ-6/1/13");
   timebufferadd(IdBuf_T_EG_WC,"TavgEGWC-6/1/15");

   timebufferadd(IdBuf_T_OG1_MEG_Puck,"T_OG1_Buero_Merten_MEG-6/2/3");
   timebufferadd(IdBuf_T_OG1_MEG_Emilia,"T_OG1_Emilia_MRG-6/2/2");
   timebufferadd(IdBuf_T_OG1_MEG_Marisa,"GetMEG_Marisa_IstT-7/2/19");
   timebufferadd(IdBuf_T_OG_Bas_Bad,"T_OG1_Bad_Basalte-6/2/1");

   timebufferadd(IdBuf_T_Dach_Bad,"TavgDachBad-6/3/6");
   timebufferadd(IdBuf_H_Dach_Bad,"HyBad-3/4/2");
   timebufferadd(IdBuf_T_Dach_Ost,"TavgDachOst-6/3/5");
   }endif
// wind
if( event("RsWxWindSpeed-3/6/3" )) then timebufferadd(IdBuf_Speed_Wind, "RsWxWindSpeed-3/6/3" ) endif

////////////////////////////////////////////////////////////////
if( chtime(01,00,00) or event( "EibPC_before_shutdown-8/5/25" ) )then{
	timebufferstore(IdBuf_T_Outside);
	timebufferstore(IdBuf_T_EG_EssZ);

	timebufferstore(IdBuf_PID_HK1);
	timebufferstore(IdBuf_PID_HK3);
	timebufferstore(IdBuf_PID_HK4);
	timebufferstore(IdBuf_PID_HK5);

	timebufferstore(IdBuf_T_VL1);
	timebufferstore(IdBuf_T_RL1);
	timebufferstore(IdBuf_T_VL3);
	timebufferstore(IdBuf_T_RL3);
	timebufferstore(IdBuf_T_VL4);
	timebufferstore(IdBuf_T_RL4);
	timebufferstore(IdBuf_T_VCol9);
	timebufferstore(IdBuf_T_RCol9);

   timebufferstore(IdBuf_S_Pump1);
   timebufferstore(IdBuf_S_Pump3);
	timebufferstore(IdBuf_S_Pump4);
   timebufferstore(IdBuf_S_PumpWW);


   timebufferstore(IdBuf_T_EG_EssZ);
   timebufferstore(IdBuf_T_EG_WohnZ);
   timebufferstore(IdBuf_T_EG_WC);

   timebufferstore(IdBuf_T_OG1_MEG_Puck);
   timebufferstore(IdBuf_T_OG1_MEG_Emilia);
   timebufferstore(IdBuf_T_OG1_MEG_Marisa);
   timebufferstore(IdBuf_T_OG_Bas_Bad);

   timebufferstore(IdBuf_T_Dach_Bad);
   timebufferstore(IdBuf_H_Dach_Bad);
   timebufferstore(IdBuf_T_Dach_Ost);
   timebufferstore(IdBuf_Speed_Wind);
   }endif

//////////////////////////////////////////////////////////////////////////////
if(after(systemstart(),START_DELAY_READ)) then{
	timebufferread(IdBuf_T_Outside);
	timebufferread(IdBuf_T_EG_EssZ);

	timebufferread(IdBuf_PID_HK1);
	timebufferread(IdBuf_PID_HK3);
	timebufferread(IdBuf_PID_HK4);
	timebufferread(IdBuf_PID_HK5);

	timebufferread(IdBuf_T_VL1);
	timebufferread(IdBuf_T_RL1);
	timebufferread(IdBuf_T_VL3);
	timebufferread(IdBuf_T_RL3);
	timebufferread(IdBuf_T_VL4);
	timebufferread(IdBuf_T_RL4);
	timebufferread(IdBuf_T_VCol9);
	timebufferread(IdBuf_T_RCol9);

   timebufferread(IdBuf_S_Pump1);
   timebufferread(IdBuf_S_Pump3);
	timebufferread(IdBuf_S_Pump4);
   timebufferread(IdBuf_S_PumpWW);  	

   timebufferread(IdBuf_T_EG_EssZ);  
   timebufferread(IdBuf_T_EG_WohnZ);  
   timebufferread(IdBuf_T_EG_WC);  

   timebufferread(IdBuf_T_OG1_MEG_Puck);  
   timebufferread(IdBuf_T_OG1_MEG_Emilia);  
   timebufferread(IdBuf_T_OG1_MEG_Marisa);  
   timebufferread(IdBuf_T_OG_Bas_Bad);  

   timebufferread(IdBuf_T_Dach_Bad);  
   timebufferread(IdBuf_H_Dach_Bad); 
   timebufferread(IdBuf_T_Dach_Ost);  
   timebufferread(IdBuf_Speed_Wind); 

   }endif


