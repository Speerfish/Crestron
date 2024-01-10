#ifndef __S2_SHARP_LC_52D64U_PROCESSOR_V1_0_H__
#define __S2_SHARP_LC_52D64U_PROCESSOR_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP0_DIG_INPUT 0
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP1_DIG_INPUT 1
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP2_DIG_INPUT 2
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP3_DIG_INPUT 3
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP4_DIG_INPUT 4
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP5_DIG_INPUT 5
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP6_DIG_INPUT 6
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP7_DIG_INPUT 7
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP8_DIG_INPUT 8
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP9_DIG_INPUT 9
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP_DOT_DIG_INPUT 10
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP_CLEAR_DIG_INPUT 11
#define __S2_Sharp_LC_52D64U_Processor_v1_0_KP_ENTER_DIG_INPUT 12
#define __S2_Sharp_LC_52D64U_Processor_v1_0_AIR_DIG_INPUT 13
#define __S2_Sharp_LC_52D64U_Processor_v1_0_CABLE_DIG_INPUT 14


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Sharp_LC_52D64U_Processor_v1_0_NUMBER$_STRING_OUTPUT 0
#define __S2_Sharp_LC_52D64U_Processor_v1_0_TO_DEVICE$_STRING_OUTPUT 1


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
#define __S2_Sharp_LC_52D64U_Processor_v1_0_SNUMBER_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0, __SNUMBER, __S2_Sharp_LC_52D64U_Processor_v1_0_SNUMBER_STRING_MAX_LEN );
#define __S2_Sharp_LC_52D64U_Processor_v1_0_SCHANNELF_STRING_MAX_LEN 9
CREATE_STRING_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0, __SCHANNELF, __S2_Sharp_LC_52D64U_Processor_v1_0_SCHANNELF_STRING_MAX_LEN );
#define __S2_Sharp_LC_52D64U_Processor_v1_0_SCHANNELR_STRING_MAX_LEN 9
CREATE_STRING_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0, __SCHANNELR, __S2_Sharp_LC_52D64U_Processor_v1_0_SCHANNELR_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __ALOC;
   DECLARE_STRING_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0, __SNUMBER );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0, __SCHANNELF );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0, __SCHANNELR );
};

START_NVRAM_VAR_STRUCT( S2_Sharp_LC_52D64U_Processor_v1_0 )
{
};



#endif //__S2_SHARP_LC_52D64U_PROCESSOR_V1_0_H__

