#ifndef __S2_ADAGIO_AMFM_GUI_PROCESSOR_V1_H__
#define __S2_ADAGIO_AMFM_GUI_PROCESSOR_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Adagio_AMFM_GUI_Processor_v1_AMACTIVE_DIG_INPUT 0
#define __S2_Adagio_AMFM_GUI_Processor_v1_FMACTIVE_DIG_INPUT 1
#define __S2_Adagio_AMFM_GUI_Processor_v1_EUROPEAN_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_Adagio_AMFM_GUI_Processor_v1_AMFREQIN_ANALOG_INPUT 0
#define __S2_Adagio_AMFM_GUI_Processor_v1_FMFREQIN_ANALOG_INPUT 1
#define __S2_Adagio_AMFM_GUI_Processor_v1_AMPRESETIN_ANALOG_INPUT 2
#define __S2_Adagio_AMFM_GUI_Processor_v1_FMPRESETIN_ANALOG_INPUT 3
#define __S2_Adagio_AMFM_GUI_Processor_v1_AIPKTDELTA_ANALOG_INPUT 5
#define __S2_Adagio_AMFM_GUI_Processor_v1_AIPKTTIME_ANALOG_INPUT 6
#define __S2_Adagio_AMFM_GUI_Processor_v1_AISLOWTURNHSEC_ANALOG_INPUT 7
#define __S2_Adagio_AMFM_GUI_Processor_v1_AISLOWTURNINCR_ANALOG_INPUT 8
#define __S2_Adagio_AMFM_GUI_Processor_v1_AIFASTTURNHSEC_ANALOG_INPUT 9
#define __S2_Adagio_AMFM_GUI_Processor_v1_AIFASTTURNINCR_ANALOG_INPUT 10

#define __S2_Adagio_AMFM_GUI_Processor_v1_TRIG_STRING_INPUT 4
#define __S2_Adagio_AMFM_GUI_Processor_v1_TRIG_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Adagio_AMFM_GUI_Processor_v1, __TRIG, __S2_Adagio_AMFM_GUI_Processor_v1_TRIG_STRING_MAX_LEN );


#define __S2_Adagio_AMFM_GUI_Processor_v1_AIKNOBIN_ANALOG_INPUT 11
#define __S2_Adagio_AMFM_GUI_Processor_v1_AIKNOBIN_ARRAY_LENGTH 2

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Adagio_AMFM_GUI_Processor_v1_STATION$_STRING_OUTPUT 0
#define __S2_Adagio_AMFM_GUI_Processor_v1_PRESET$_STRING_OUTPUT 1

#define __S2_Adagio_AMFM_GUI_Processor_v1_AOKNOBOUT_ANALOG_OUTPUT 2
#define __S2_Adagio_AMFM_GUI_Processor_v1_AOKNOBOUT_ARRAY_LENGTH 2

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

START_GLOBAL_VAR_STRUCT( S2_Adagio_AMFM_GUI_Processor_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __AIKNOBIN );
   DECLARE_IO_ARRAY( __AOKNOBOUT );
   unsigned short __G_IBUSY;
   unsigned short __MAX_ANALOG;
   unsigned short __MIN_ANALOG;
   unsigned short __STEPSIZE;
   unsigned short __BAND;
   long __G_SLISLOPE;
   long __G_SLIINTERCEPT;
   DECLARE_STRING_STRUCT( S2_Adagio_AMFM_GUI_Processor_v1, __TRIG );
};

START_NVRAM_VAR_STRUCT( S2_Adagio_AMFM_GUI_Processor_v1 )
{
};



#endif //__S2_ADAGIO_AMFM_GUI_PROCESSOR_V1_H__

