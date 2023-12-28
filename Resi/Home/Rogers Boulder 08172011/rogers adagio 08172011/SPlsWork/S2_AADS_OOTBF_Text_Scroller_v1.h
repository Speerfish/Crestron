#ifndef __S2_AADS_OOTBF_TEXT_SCROLLER_V1_H__
#define __S2_AADS_OOTBF_TEXT_SCROLLER_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AADS_OOTBF_Text_Scroller_v1_INCREMENT_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_AADS_OOTBF_Text_Scroller_v1_SIZE_ANALOG_INPUT 0

#define __S2_AADS_OOTBF_Text_Scroller_v1_IN$_STRING_INPUT 1
#define __S2_AADS_OOTBF_Text_Scroller_v1_IN$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Text_Scroller_v1, __IN$, __S2_AADS_OOTBF_Text_Scroller_v1_IN$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_AADS_OOTBF_Text_Scroller_v1_SCROLLNEEDED_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_AADS_OOTBF_Text_Scroller_v1_OUT$_STRING_OUTPUT 0


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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_AADS_OOTBF_Text_Scroller_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __INDEX;
   unsigned short __LENGTH;
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Text_Scroller_v1, __IN$ );
};

START_NVRAM_VAR_STRUCT( S2_AADS_OOTBF_Text_Scroller_v1 )
{
};

DEFINE_WAITEVENT( S2_AADS_OOTBF_Text_Scroller_v1, STARTSCROLLWAIT );
DEFINE_WAITEVENT( S2_AADS_OOTBF_Text_Scroller_v1, STOPSCROLLWAIT );


#endif //__S2_AADS_OOTBF_TEXT_SCROLLER_V1_H__

