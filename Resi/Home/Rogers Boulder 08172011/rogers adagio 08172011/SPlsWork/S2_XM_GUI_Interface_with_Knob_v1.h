#ifndef __S2_XM_GUI_INTERFACE_WITH_KNOB_V1_H__
#define __S2_XM_GUI_INTERFACE_WITH_KNOB_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLCATEGORIES_DIG_INPUT 0
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLCHANNELS_DIG_INPUT 1
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLPRESETS_DIG_INPUT 2
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLSELECT_DIG_INPUT 3
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLDISPLAYCYCLE_DIG_INPUT 4
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLLASTSELECTEDCATEGORY_DIG_INPUT 5
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLSAVEPRESET_DIG_INPUT 6
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLCLEARPRESET_DIG_INPUT 7


/*
* ANALOG_INPUT
*/
#define __S2_XM_GUI_Interface_with_Knob_v1_MODULEID_ANALOG_INPUT 0
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLPAGESIZE_ANALOG_INPUT 1
#define __S2_XM_GUI_Interface_with_Knob_v1_AIPKTDELTA_ANALOG_INPUT 3
#define __S2_XM_GUI_Interface_with_Knob_v1_AIPKTTIME_ANALOG_INPUT 4
#define __S2_XM_GUI_Interface_with_Knob_v1_AISLOWTURNHSEC_ANALOG_INPUT 5
#define __S2_XM_GUI_Interface_with_Knob_v1_AISLOWTURNINCR_ANALOG_INPUT 6
#define __S2_XM_GUI_Interface_with_Knob_v1_AIFASTTURNHSEC_ANALOG_INPUT 7
#define __S2_XM_GUI_Interface_with_Knob_v1_AIFASTTURNINCR_ANALOG_INPUT 8

#define __S2_XM_GUI_Interface_with_Knob_v1_TRIG_STRING_INPUT 2
#define __S2_XM_GUI_Interface_with_Knob_v1_TRIG_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_XM_GUI_Interface_with_Knob_v1, __TRIG, __S2_XM_GUI_Interface_with_Knob_v1_TRIG_STRING_MAX_LEN );

#define __S2_XM_GUI_Interface_with_Knob_v1_GUIDEINFO$_BUFFER_INPUT 9
#define __S2_XM_GUI_Interface_with_Knob_v1_GUIDEINFO$_BUFFER_MAX_LEN 500
CREATE_STRING_STRUCT( S2_XM_GUI_Interface_with_Knob_v1, __GUIDEINFO$, __S2_XM_GUI_Interface_with_Knob_v1_GUIDEINFO$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_XM_GUI_Interface_with_Knob_v1_CHANNELSELECTED_DIG_OUTPUT 0

#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLHIGHLIGHTFB_DIG_OUTPUT 1
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLHIGHLIGHTFB_ARRAY_LENGTH 10

/*
* ANALOG_OUTPUT
*/
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLBAR_ANALOG_OUTPUT 0

#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLINFOREQUEST$_STRING_OUTPUT 1
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLHEADER$_STRING_OUTPUT 2

#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLLIST$_STRING_OUTPUT 3
#define __S2_XM_GUI_Interface_with_Knob_v1_SCROLLLIST$_ARRAY_LENGTH 10

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
CREATE_INTARRAY1D( S2_XM_GUI_Interface_with_Knob_v1, __CATEGORYNUMBER, 10 );;
CREATE_INTARRAY1D( S2_XM_GUI_Interface_with_Knob_v1, __CHANNELNUMBER, 10 );;
CREATE_INTARRAY1D( S2_XM_GUI_Interface_with_Knob_v1, __PRESETNUMBER, 10 );;


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

START_GLOBAL_VAR_STRUCT( S2_XM_GUI_Interface_with_Knob_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SCROLLHIGHLIGHTFB );
   DECLARE_IO_ARRAY( __SCROLLLIST$ );
   unsigned short __SEMAPHORE;
   unsigned short __SCROLLMODE;
   unsigned short __SCROLLHIGHLIGHT;
   unsigned short __SCROLLINDEX;
   unsigned short __SCROLLMAX;
   unsigned short __SCROLLDISPLAYMODE;
   unsigned short __LASTSCROLLINDEX;
   unsigned short __LASTSCROLLHIGHLIGHT;
   unsigned short __LASTCATEGORYSELECTED;
   unsigned short __G_IBUSY;
   DECLARE_INTARRAY( S2_XM_GUI_Interface_with_Knob_v1, __CATEGORYNUMBER );
   DECLARE_INTARRAY( S2_XM_GUI_Interface_with_Knob_v1, __CHANNELNUMBER );
   DECLARE_INTARRAY( S2_XM_GUI_Interface_with_Knob_v1, __PRESETNUMBER );
   long __G_SLISLOPE;
   long __G_SLIINTERCEPT;
   DECLARE_STRING_STRUCT( S2_XM_GUI_Interface_with_Knob_v1, __TRIG );
   DECLARE_STRING_STRUCT( S2_XM_GUI_Interface_with_Knob_v1, __GUIDEINFO$ );
};

START_NVRAM_VAR_STRUCT( S2_XM_GUI_Interface_with_Knob_v1 )
{
};



#endif //__S2_XM_GUI_INTERFACE_WITH_KNOB_V1_H__

