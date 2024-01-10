#ifndef __S2_BIAMP_AUDIAFLEX___NEXIA_UNIT_BUFFER_V5_1_H__
#define __S2_BIAMP_AUDIAFLEX___NEXIA_UNIT_BUFFER_V5_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/


#define __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_FROM_PROCESSOR$_BUFFER_INPUT 0
#define __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_FROM_PROCESSOR$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1, __FROM_PROCESSOR$, __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_FROM_PROCESSOR$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_TO_INSTANCE$_STRING_OUTPUT 0
#define __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_TO_INSTANCE$_ARRAY_LENGTH 65534

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
#define __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_STEMP_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1, __STEMP, __S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1_STEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __TO_INSTANCE$ );
   unsigned short __ITEMP;
   unsigned short __IFLAG1;
   unsigned short __IMARK1;
   unsigned short __IMARK2;
   unsigned short __IMAXINSTANCEUSED;
   unsigned short __A;
   unsigned short __IINITIALIZING;
   DECLARE_STRING_STRUCT( S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1, __STEMP );
   DECLARE_STRING_STRUCT( S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1, __FROM_PROCESSOR$ );
};

START_NVRAM_VAR_STRUCT( S2_BiAmp_AudiaFlex___Nexia_Unit_Buffer_v5_1 )
{
};



#endif //__S2_BIAMP_AUDIAFLEX___NEXIA_UNIT_BUFFER_V5_1_H__

