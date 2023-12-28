#ifndef __S2_ANALOGSETTINGS_H__
#define __S2_ANALOGSETTINGS_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_analogsettings_READ_DIG_INPUT 0
#define __S2_analogsettings_WRITE_DIG_INPUT 1


/*
* ANALOG_INPUT
*/

#define __S2_analogsettings_FILE_PATH_STRING_INPUT 0
#define __S2_analogsettings_FILE_PATH_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_analogsettings, __FILE_PATH, __S2_analogsettings_FILE_PATH_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_analogsettings_READ_OK_DIG_OUTPUT 0
#define __S2_analogsettings_WRITE_OK_DIG_OUTPUT 1
#define __S2_analogsettings_NVRAM_AVAILABLE_DIG_OUTPUT 2
#define __S2_analogsettings_READ_ERROR_DIG_OUTPUT 3
#define __S2_analogsettings_WRITE_ERROR_DIG_OUTPUT 4


/*
* ANALOG_OUTPUT
*/


#define __S2_analogsettings_ANLG_PRESET_ANALOG_OUTPUT 0
#define __S2_analogsettings_ANLG_PRESET_ARRAY_LENGTH 200

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

START_GLOBAL_VAR_STRUCT( S2_analogsettings )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ANLG_PRESET );
   unsigned short __G_INUMANALOGPRESETS;
   DECLARE_STRING_STRUCT( S2_analogsettings, __FILE_PATH );
};

START_NVRAM_VAR_STRUCT( S2_analogsettings )
{
};



#endif //__S2_ANALOGSETTINGS_H__

