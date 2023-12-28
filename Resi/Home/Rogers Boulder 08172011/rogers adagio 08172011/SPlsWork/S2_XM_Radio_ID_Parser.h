#ifndef __S2_XM_RADIO_ID_PARSER_H__
#define __S2_XM_RADIO_ID_PARSER_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_XM_Radio_ID_Parser_RADIOIDIN$_STRING_INPUT 0
#define __S2_XM_Radio_ID_Parser_RADIOIDIN$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_XM_Radio_ID_Parser, __RADIOIDIN$, __S2_XM_Radio_ID_Parser_RADIOIDIN$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_XM_Radio_ID_Parser_RADIOIDOUT$_STRING_OUTPUT 0


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

START_GLOBAL_VAR_STRUCT( S2_XM_Radio_ID_Parser )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_XM_Radio_ID_Parser, __RADIOIDIN$ );
};

START_NVRAM_VAR_STRUCT( S2_XM_Radio_ID_Parser )
{
};



#endif //__S2_XM_RADIO_ID_PARSER_H__

