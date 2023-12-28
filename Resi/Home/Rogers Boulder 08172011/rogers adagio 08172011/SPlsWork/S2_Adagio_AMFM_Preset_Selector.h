#ifndef __S2_ADAGIO_AMFM_PRESET_SELECTOR_H__
#define __S2_ADAGIO_AMFM_PRESET_SELECTOR_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Adagio_AMFM_Preset_Selector_NEXT_DIG_INPUT 0
#define __S2_Adagio_AMFM_Preset_Selector_PREV_DIG_INPUT 1


/*
* ANALOG_INPUT
*/



#define __S2_Adagio_AMFM_Preset_Selector_PRESETIN_ANALOG_INPUT 0
#define __S2_Adagio_AMFM_Preset_Selector_PRESETIN_ARRAY_LENGTH 20

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Adagio_AMFM_Preset_Selector_FREQUENCY_ANALOG_OUTPUT 0



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

START_GLOBAL_VAR_STRUCT( S2_Adagio_AMFM_Preset_Selector )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __PRESETIN );
   unsigned short __INDEX;
};

START_NVRAM_VAR_STRUCT( S2_Adagio_AMFM_Preset_Selector )
{
};



#endif //__S2_ADAGIO_AMFM_PRESET_SELECTOR_H__

