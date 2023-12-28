#ifndef __S2_KNOB_LIST_ACCELERATION__IPOD__H__
#define __S2_KNOB_LIST_ACCELERATION__IPOD__H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Knob_List_Acceleration__iPod__AIPKTDELTA_ANALOG_INPUT 1
#define __S2_Knob_List_Acceleration__iPod__AIPKTTIME_ANALOG_INPUT 2
#define __S2_Knob_List_Acceleration__iPod__AISLOWTURNHSEC_ANALOG_INPUT 3
#define __S2_Knob_List_Acceleration__iPod__AISLOWTURNINCR_ANALOG_INPUT 4
#define __S2_Knob_List_Acceleration__iPod__AIFASTTURNHSEC_ANALOG_INPUT 5
#define __S2_Knob_List_Acceleration__iPod__AIFASTTURNINCR_ANALOG_INPUT 6

#define __S2_Knob_List_Acceleration__iPod__TRIG_STRING_INPUT 0
#define __S2_Knob_List_Acceleration__iPod__TRIG_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Knob_List_Acceleration__iPod_, __TRIG, __S2_Knob_List_Acceleration__iPod__TRIG_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Knob_List_Acceleration__iPod__NEXTLINE_DIG_OUTPUT 0
#define __S2_Knob_List_Acceleration__iPod__PREVIOUSLINE_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Knob_List_Acceleration__iPod__AOKNOBOUT_ANALOG_OUTPUT 0



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

START_GLOBAL_VAR_STRUCT( S2_Knob_List_Acceleration__iPod_ )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __G_IBUSY;
   long __G_SLISLOPE;
   long __G_SLIINTERCEPT;
   DECLARE_STRING_STRUCT( S2_Knob_List_Acceleration__iPod_, __TRIG );
};

START_NVRAM_VAR_STRUCT( S2_Knob_List_Acceleration__iPod_ )
{
};



#endif //__S2_KNOB_LIST_ACCELERATION__IPOD__H__

