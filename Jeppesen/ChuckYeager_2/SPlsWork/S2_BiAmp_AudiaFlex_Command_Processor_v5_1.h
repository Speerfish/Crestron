#ifndef __S2_BIAMP_AUDIAFLEX_COMMAND_PROCESSOR_V5_1_H__
#define __S2_BIAMP_AUDIAFLEX_COMMAND_PROCESSOR_V5_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SEND_NEXT_DIG_INPUT 0


/*
* ANALOG_INPUT
*/


#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_FROM_MODULES$_BUFFER_INPUT 0
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_FROM_MODULES$_BUFFER_MAX_LEN 300
CREATE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __FROM_MODULES$, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_FROM_MODULES$_BUFFER_MAX_LEN );
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_FROM_DEVICE$_BUFFER_INPUT 1
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_FROM_DEVICE$_BUFFER_MAX_LEN 500
CREATE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __FROM_DEVICE$, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_TIMED_OUT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_TO_DEVICE$_STRING_OUTPUT 0

#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_TO_UNIT$_STRING_OUTPUT 1
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_TO_UNIT$_ARRAY_LENGTH 25

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
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_STEMPMODULES_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __STEMPMODULES, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_STEMPMODULES_STRING_MAX_LEN );
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_STEMPDEVICE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __STEMPDEVICE, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_STEMPDEVICE_STRING_MAX_LEN );
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SCOMMAND_ARRAY_NUM_ELEMS 40
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SCOMMAND_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __SCOMMAND, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SCOMMAND_ARRAY_NUM_ELEMS, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SCOMMAND_ARRAY_NUM_CHARS );
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SGET_ARRAY_NUM_ELEMS 40
#define __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SGET_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __SGET, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SGET_ARRAY_NUM_ELEMS, __S2_BiAmp_AudiaFlex_Command_Processor_v5_1_SGET_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __TO_UNIT$ );
   unsigned short __INEXTCOMMANDSTORE;
   unsigned short __INEXTCOMMANDSEND;
   unsigned short __INEXTGETSTORE;
   unsigned short __INEXTGETSEND;
   unsigned short __BFLAG1;
   unsigned short __BFLAG2;
   unsigned short __BOKTOSEND;
   unsigned short __ITEMP;
   DECLARE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __STEMPMODULES );
   DECLARE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __STEMPDEVICE );
   DECLARE_STRING_ARRAY( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __SCOMMAND );
   DECLARE_STRING_ARRAY( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __SGET );
   DECLARE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __FROM_MODULES$ );
   DECLARE_STRING_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1 )
{
};

DEFINE_WAITEVENT( S2_BiAmp_AudiaFlex_Command_Processor_v5_1, WTIMEOUT );


#endif //__S2_BIAMP_AUDIAFLEX_COMMAND_PROCESSOR_V5_1_H__

