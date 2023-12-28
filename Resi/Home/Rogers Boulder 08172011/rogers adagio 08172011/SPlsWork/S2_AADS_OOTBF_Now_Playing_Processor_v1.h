#ifndef __S2_AADS_OOTBF_NOW_PLAYING_PROCESSOR_V1_H__
#define __S2_AADS_OOTBF_NOW_PLAYING_PROCESSOR_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_INCREMENT_DIG_INPUT 0
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_SCROLL_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_SIZE_ANALOG_INPUT 0

#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_LINE1$_STRING_INPUT 1
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_LINE1$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __LINE1$, __S2_AADS_OOTBF_Now_Playing_Processor_v1_LINE1$_STRING_MAX_LEN );
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_LINE2$_STRING_INPUT 2
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_LINE2$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __LINE2$, __S2_AADS_OOTBF_Now_Playing_Processor_v1_LINE2$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_SCROLLNEEDED_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_NOWPLAYING$_STRING_OUTPUT 0


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
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_TEMP$_STRING_MAX_LEN 210
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __TEMP$, __S2_AADS_OOTBF_Now_Playing_Processor_v1_TEMP$_STRING_MAX_LEN );
#define __S2_AADS_OOTBF_Now_Playing_Processor_v1_OLDTEMP$_STRING_MAX_LEN 210
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __OLDTEMP$, __S2_AADS_OOTBF_Now_Playing_Processor_v1_OLDTEMP$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __INDEX;
   unsigned short __LENGTH;
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __OLDTEMP$ );
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __LINE1$ );
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1, __LINE2$ );
};

START_NVRAM_VAR_STRUCT( S2_AADS_OOTBF_Now_Playing_Processor_v1 )
{
};

DEFINE_WAITEVENT( S2_AADS_OOTBF_Now_Playing_Processor_v1, STARTSCROLLWAIT );
DEFINE_WAITEVENT( S2_AADS_OOTBF_Now_Playing_Processor_v1, STOPSCROLLWAIT );


#endif //__S2_AADS_OOTBF_NOW_PLAYING_PROCESSOR_V1_H__

