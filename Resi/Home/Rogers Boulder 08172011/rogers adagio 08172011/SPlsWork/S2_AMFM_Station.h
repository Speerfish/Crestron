#ifndef __S2_AMFM_STATION_H__
#define __S2_AMFM_STATION_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AMFM_Station_AMACTIVE_DIG_INPUT 0
#define __S2_AMFM_Station_FMACTIVE_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_AMFM_Station_AMFREQIN_ANALOG_INPUT 0
#define __S2_AMFM_Station_FMFREQIN_ANALOG_INPUT 1
#define __S2_AMFM_Station_AMPRESETIN_ANALOG_INPUT 2
#define __S2_AMFM_Station_FMPRESETIN_ANALOG_INPUT 3




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_AMFM_Station_STATION$_STRING_OUTPUT 0
#define __S2_AMFM_Station_PRESET$_STRING_OUTPUT 1


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

START_GLOBAL_VAR_STRUCT( S2_AMFM_Station )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_AMFM_Station )
{
};



#endif //__S2_AMFM_STATION_H__

