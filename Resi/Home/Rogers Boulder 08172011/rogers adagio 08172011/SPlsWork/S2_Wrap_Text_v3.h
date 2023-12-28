#ifndef __S2_WRAP_TEXT_V3_H__
#define __S2_WRAP_TEXT_V3_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Wrap_Text_v3_MAXCHARACTERS_ANALOG_INPUT 0

#define __S2_Wrap_Text_v3_IN$_STRING_INPUT 1
#define __S2_Wrap_Text_v3_IN$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Wrap_Text_v3, __IN$, __S2_Wrap_Text_v3_IN$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Wrap_Text_v3_OUT$_STRING_OUTPUT 0
#define __S2_Wrap_Text_v3_OUT$_ARRAY_LENGTH 4

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
#define __S2_Wrap_Text_v3_NEWSTRING$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Wrap_Text_v3, __NEWSTRING$, __S2_Wrap_Text_v3_NEWSTRING$_STRING_MAX_LEN );
#define __S2_Wrap_Text_v3_TEMPSTRING$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Wrap_Text_v3, __TEMPSTRING$, __S2_Wrap_Text_v3_TEMPSTRING$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Wrap_Text_v3 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUT$ );
   unsigned short __POINTER;
   unsigned short __TEMP;
   unsigned short __LASTSPACE;
   DECLARE_STRING_STRUCT( S2_Wrap_Text_v3, __NEWSTRING$ );
   DECLARE_STRING_STRUCT( S2_Wrap_Text_v3, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_Wrap_Text_v3, __IN$ );
};

START_NVRAM_VAR_STRUCT( S2_Wrap_Text_v3 )
{
};



#endif //__S2_WRAP_TEXT_V3_H__

