#ifndef __S2_AMFM_PRESET_SCROLLER_V2_H__
#define __S2_AMFM_PRESET_SCROLLER_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_AMFM_Preset_Scroller_v2_SCROLLPRESETS_DIG_INPUT 0
#define __S2_AMFM_Preset_Scroller_v2_SCROLLUP_DIG_INPUT 1
#define __S2_AMFM_Preset_Scroller_v2_SCROLLDOWN_DIG_INPUT 2
#define __S2_AMFM_Preset_Scroller_v2_SCROLLSELECT_DIG_INPUT 3
#define __S2_AMFM_Preset_Scroller_v2_SCROLLSAVEPRESET_DIG_INPUT 4
#define __S2_AMFM_Preset_Scroller_v2_SCROLLCLEARPRESET_DIG_INPUT 5
#define __S2_AMFM_Preset_Scroller_v2_AMACTIVE_DIG_INPUT 6
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETSAVEFB_DIG_INPUT 7
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETSAVEFB_DIG_INPUT 8
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETCLEARFB_DIG_INPUT 9
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETCLEARFB_DIG_INPUT 10


/*
* ANALOG_INPUT
*/
#define __S2_AMFM_Preset_Scroller_v2_SCROLLPAGESIZE_ANALOG_INPUT 0



#define __S2_AMFM_Preset_Scroller_v2_AMPRESETVALUE_ANALOG_INPUT 1
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETVALUE_ARRAY_LENGTH 10
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETVALUE_ANALOG_INPUT 11
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETVALUE_ARRAY_LENGTH 20

/*
* DIGITAL_OUTPUT
*/
#define __S2_AMFM_Preset_Scroller_v2_CHANNELSELECTED_DIG_OUTPUT 0
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETSAVE_DIG_OUTPUT 1
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETSAVE_DIG_OUTPUT 2
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETCLEAR_DIG_OUTPUT 3
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETCLEAR_DIG_OUTPUT 4

#define __S2_AMFM_Preset_Scroller_v2_SCROLLHIGHLIGHTFB_DIG_OUTPUT 5
#define __S2_AMFM_Preset_Scroller_v2_SCROLLHIGHLIGHTFB_ARRAY_LENGTH 10
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETSELECT_DIG_OUTPUT 15
#define __S2_AMFM_Preset_Scroller_v2_AMPRESETSELECT_ARRAY_LENGTH 10
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETSELECT_DIG_OUTPUT 25
#define __S2_AMFM_Preset_Scroller_v2_FMPRESETSELECT_ARRAY_LENGTH 20

/*
* ANALOG_OUTPUT
*/

#define __S2_AMFM_Preset_Scroller_v2_SCROLLHEADER$_STRING_OUTPUT 0

#define __S2_AMFM_Preset_Scroller_v2_SCROLLLIST$_STRING_OUTPUT 1
#define __S2_AMFM_Preset_Scroller_v2_SCROLLLIST$_ARRAY_LENGTH 10

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

START_GLOBAL_VAR_STRUCT( S2_AMFM_Preset_Scroller_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SCROLLHIGHLIGHTFB );
   DECLARE_IO_ARRAY( __AMPRESETSELECT );
   DECLARE_IO_ARRAY( __FMPRESETSELECT );
   DECLARE_IO_ARRAY( __AMPRESETVALUE );
   DECLARE_IO_ARRAY( __FMPRESETVALUE );
   DECLARE_IO_ARRAY( __SCROLLLIST$ );
   unsigned short __SCROLLINDEX;
   unsigned short __SCROLLHIGHLIGHT;
   unsigned short __SCROLLMAX;
   unsigned short __PRESETTOSAVE;
   unsigned short __OLDSCROLLINDEX;
   unsigned short __OLDSCROLLHIGHLIGHT;
};

START_NVRAM_VAR_STRUCT( S2_AMFM_Preset_Scroller_v2 )
{
};



#endif //__S2_AMFM_PRESET_SCROLLER_V2_H__

