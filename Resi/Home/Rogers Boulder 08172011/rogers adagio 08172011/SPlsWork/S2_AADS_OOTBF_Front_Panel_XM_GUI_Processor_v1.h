#ifndef __S2_AADS_OOTBF_FRONT_PANEL_XM_GUI_PROCESSOR_V1_H__
#define __S2_AADS_OOTBF_FRONT_PANEL_XM_GUI_PROCESSOR_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_START_DIG_INPUT 0
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_KNOBLEFT_DIG_INPUT 1
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_KNOBRIGHT_DIG_INPUT 2
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_ENTER_DIG_INPUT 3
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MENU_DIG_INPUT 4
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MORE_DIG_INPUT 5
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_DISPLAY_DIG_INPUT 6
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_CONTROLOK_DIG_INPUT 7


/*
* ANALOG_INPUT
*/
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MODULEID_ANALOG_INPUT 0
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_SCROLLPAGESIZE_ANALOG_INPUT 1

#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_CURRENTSTATION$_STRING_INPUT 2
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_CURRENTSTATION$_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __CURRENTSTATION$, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_CURRENTSTATION$_STRING_MAX_LEN );
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_RADIOIDIN$_STRING_INPUT 3
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_RADIOIDIN$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __RADIOIDIN$, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_RADIOIDIN$_STRING_MAX_LEN );

#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_GUIDEINFO$_BUFFER_INPUT 4
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_GUIDEINFO$_BUFFER_MAX_LEN 500
CREATE_STRING_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __GUIDEINFO$, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_GUIDEINFO$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_EXIT_DIG_OUTPUT 0
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_ENTERACTIVE_DIG_OUTPUT 1
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_CHANNELSELECTED_DIG_OUTPUT 2


/*
* ANALOG_OUTPUT
*/
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_CURRENTMENU_ANALOG_OUTPUT 0

#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_LINE1$_STRING_OUTPUT 1
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_LINE2$_STRING_OUTPUT 2
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_LINE2SCROLLARROW$_STRING_OUTPUT 3
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_SCROLLINFOREQUEST$_STRING_OUTPUT 4
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_RADIOIDOUT$_STRING_OUTPUT 5


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
CREATE_INTARRAY1D( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __CATEGORYNUMBER, 1 );;
CREATE_INTARRAY1D( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __CHANNELNUMBER, 1 );;
CREATE_INTARRAY1D( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __PRESETNUMBER, 1 );;


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
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MAINMENU$_ARRAY_NUM_ELEMS 4
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MAINMENU$_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __MAINMENU$, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MAINMENU$_ARRAY_NUM_ELEMS, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_MAINMENU$_ARRAY_NUM_CHARS );
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_TECHMENU$_ARRAY_NUM_ELEMS 2
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_TECHMENU$_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __TECHMENU$, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_TECHMENU$_ARRAY_NUM_ELEMS, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_TECHMENU$_ARRAY_NUM_CHARS );
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_PRESETCONFIRM$_ARRAY_NUM_ELEMS 2
#define __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_PRESETCONFIRM$_ARRAY_NUM_CHARS 6
CREATE_STRING_ARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __PRESETCONFIRM$, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_PRESETCONFIRM$_ARRAY_NUM_ELEMS, __S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1_PRESETCONFIRM$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __SEMAPHORE;
   unsigned short __SCROLLMODE;
   unsigned short __SCROLLHIGHLIGHT;
   unsigned short __SCROLLINDEX;
   unsigned short __SCROLLMAX;
   unsigned short __SCROLLDISPLAYMODE;
   unsigned short __LASTSCROLLINDEX;
   unsigned short __LASTSCROLLHIGHLIGHT;
   unsigned short __LASTCATEGORYSELECTED;
   unsigned short __PRESETTOSAVE;
   unsigned short __NEWCHANNELSELECTED;
   unsigned short __CALLINGMENU;
   DECLARE_INTARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __CATEGORYNUMBER );
   DECLARE_INTARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __CHANNELNUMBER );
   DECLARE_INTARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __PRESETNUMBER );
   DECLARE_STRING_ARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __MAINMENU$ );
   DECLARE_STRING_ARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __TECHMENU$ );
   DECLARE_STRING_ARRAY( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __PRESETCONFIRM$ );
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __CURRENTSTATION$ );
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __RADIOIDIN$ );
   DECLARE_STRING_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1, __GUIDEINFO$ );
};

START_NVRAM_VAR_STRUCT( S2_AADS_OOTBF_Front_Panel_XM_GUI_Processor_v1 )
{
};



#endif //__S2_AADS_OOTBF_FRONT_PANEL_XM_GUI_PROCESSOR_V1_H__

