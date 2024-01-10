#ifndef __S2_BIAMP_AUDIAFLEX_DIALER_PROCESSOR_V5_1_H__
#define __S2_BIAMP_AUDIAFLEX_DIALER_PROCESSOR_V5_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ON_HOOK_DIG_INPUT 0
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_OFF_HOOK_DIG_INPUT 1
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_KEYBOARDGO_DIG_INPUT 2
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_CLEAR_DIG_INPUT 3
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_BACK_DIG_INPUT 4
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_DIAL_DIG_INPUT 5
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_REDIAL_DIG_INPUT 6
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_CLEAR_LAST__LB___DIALED_DIG_INPUT 7
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESET_STORE_DIG_INPUT 8
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_GET_NAMES_DIG_INPUT 9
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_FIRST_DIG_INPUT 10
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SCROLL_UP_DIG_INPUT 11
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SCROLL_DOWN_DIG_INPUT 12
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_POLL_DIG_INPUT 13

#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_DIAL_ENTRY_DIG_INPUT 14
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_DIAL_ENTRY_ARRAY_LENGTH 16
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESETS_DIG_INPUT 30
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESETS_ARRAY_LENGTH 16

/*
* ANALOG_INPUT
*/
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_MAXCHARACTERS_ANALOG_INPUT 0
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_KEYBOARDAN_ANALOG_INPUT 1
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_APRESET_ANALOG_INPUT 2
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ENTRIES_PER_PAGE_ANALOG_INPUT 3

#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_HEADER$_STRING_INPUT 4
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_HEADER$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __HEADER$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_HEADER$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ADDRESS$_STRING_INPUT 5
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ADDRESS$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __ADDRESS$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ADDRESS$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_INSTANCE$_STRING_INPUT 6
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_INSTANCE$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __INSTANCE$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_INSTANCE$_STRING_MAX_LEN );

#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_FROM_SMPL$_BUFFER_INPUT 7
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_FROM_SMPL$_BUFFER_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __FROM_SMPL$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_FROM_SMPL$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ON_HOOK_FB_DIG_OUTPUT 0
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_OFF_HOOK_FB_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/

#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PHONE_NUMBER$_STRING_OUTPUT 0
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_TO_DEVICE$_STRING_OUTPUT 1

#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ENTRY_NAME$_STRING_OUTPUT 2
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_ENTRY_NAME$_ARRAY_LENGTH 16

/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/
CREATE_INTARRAY1D( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __IDISPLAYENTRYNUMBER, 16 );;


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_TEMPDIAL$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __TEMPDIAL$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_TEMPDIAL$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SHEADER_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SHEADER, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SHEADER_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_NUM$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __NUM$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_NUM$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SNUM2_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SNUM2, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SNUM2_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_LAST_NUM_DIALED$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __LAST_NUM_DIALED$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_LAST_NUM_DIALED$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SLABELCOMPARE$_STRING_MAX_LEN 40
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SLABELCOMPARE$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SLABELCOMPARE$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SHOOKSTATECOMPARE$_STRING_MAX_LEN 40
CREATE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SHOOKSTATECOMPARE$, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SHOOKSTATECOMPARE$_STRING_MAX_LEN );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESET_RAM_ARRAY_NUM_ELEMS 16
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESET_RAM_ARRAY_NUM_CHARS 40
CREATE_STRING_ARRAY( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __PRESET_RAM, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESET_RAM_ARRAY_NUM_ELEMS, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_PRESET_RAM_ARRAY_NUM_CHARS );
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SENTRYNAME_ARRAY_NUM_ELEMS 16
#define __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SENTRYNAME_ARRAY_NUM_CHARS 40
CREATE_STRING_ARRAY( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SENTRYNAME, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SENTRYNAME_ARRAY_NUM_ELEMS, __S2_Biamp_AudiaFlex_Dialer_Processor_v5_1_SENTRYNAME_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DIAL_ENTRY );
   DECLARE_IO_ARRAY( __PRESETS );
   DECLARE_IO_ARRAY( __ENTRY_NAME$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __HEADER$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __ADDRESS$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __INSTANCE$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __FROM_SMPL$ );
};

START_NVRAM_VAR_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1 )
{
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __TEMPDIAL$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SHEADER );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __NUM$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SNUM2 );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __LAST_NUM_DIALED$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SLABELCOMPARE$ );
   DECLARE_STRING_STRUCT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SHOOKSTATECOMPARE$ );
   DECLARE_STRING_ARRAY( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __PRESET_RAM );
   DECLARE_STRING_ARRAY( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SENTRYNAME );
   unsigned short __IMAXCHARS;
   unsigned short __IPRESET;
   unsigned short __SEMAPHORE;
   unsigned short __IHOOK;
   unsigned short __IENTRIESPERPAGE;
   unsigned short __IOFFSET;
   DECLARE_INTARRAY( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __IDISPLAYENTRYNUMBER );
};

DEFINE_WAITEVENT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_Biamp_AudiaFlex_Dialer_Processor_v5_1, __SPLS_TMPVAR__WAITLABEL_1__ );


#endif //__S2_BIAMP_AUDIAFLEX_DIALER_PROCESSOR_V5_1_H__

