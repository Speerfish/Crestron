#ifndef __S2_SCROLLING_SOURCE_LIST_H__
#define __S2_SCROLLING_SOURCE_LIST_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Scrolling_Source_List_SYSTEMINITIALIZED_DIG_INPUT 0
#define __S2_Scrolling_Source_List_SCROLLFIRST_DIG_INPUT 1
#define __S2_Scrolling_Source_List_SCROLLPREVIOUS_DIG_INPUT 2
#define __S2_Scrolling_Source_List_SCROLLNEXT_DIG_INPUT 3

#define __S2_Scrolling_Source_List_ENABLED_DIG_INPUT 4
#define __S2_Scrolling_Source_List_ENABLED_ARRAY_LENGTH 24
#define __S2_Scrolling_Source_List_ITEMSELECTED_DIG_INPUT 28
#define __S2_Scrolling_Source_List_ITEMSELECTED_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/
#define __S2_Scrolling_Source_List_SCROLLPAGESIZE_ANALOG_INPUT 0
#define __S2_Scrolling_Source_List_SOURCEACTIVEIN_ANALOG_INPUT 1



#define __S2_Scrolling_Source_List_NAMEIN$_STRING_INPUT 2
#define __S2_Scrolling_Source_List_NAMEIN$_ARRAY_NUM_ELEMS 24
#define __S2_Scrolling_Source_List_NAMEIN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Scrolling_Source_List, __NAMEIN$, __S2_Scrolling_Source_List_NAMEIN$_ARRAY_NUM_ELEMS, __S2_Scrolling_Source_List_NAMEIN$_ARRAY_NUM_CHARS );
#define __S2_Scrolling_Source_List_NOWPLAYINGIN$_STRING_INPUT 26
#define __S2_Scrolling_Source_List_NOWPLAYINGIN$_ARRAY_NUM_ELEMS 24
#define __S2_Scrolling_Source_List_NOWPLAYINGIN$_ARRAY_NUM_CHARS 255
CREATE_STRING_ARRAY( S2_Scrolling_Source_List, __NOWPLAYINGIN$, __S2_Scrolling_Source_List_NOWPLAYINGIN$_ARRAY_NUM_ELEMS, __S2_Scrolling_Source_List_NOWPLAYINGIN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/

#define __S2_Scrolling_Source_List_SELECTFB_DIG_OUTPUT 0
#define __S2_Scrolling_Source_List_SELECTFB_ARRAY_LENGTH 24
#define __S2_Scrolling_Source_List_SOURCESELECTED_DIG_OUTPUT 24
#define __S2_Scrolling_Source_List_SOURCESELECTED_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/


#define __S2_Scrolling_Source_List_NAMEOUT$_STRING_OUTPUT 0
#define __S2_Scrolling_Source_List_NAMEOUT$_ARRAY_LENGTH 24
#define __S2_Scrolling_Source_List_NOWPLAYINGOUT$_STRING_OUTPUT 24
#define __S2_Scrolling_Source_List_NOWPLAYINGOUT$_ARRAY_LENGTH 24

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
CREATE_INTARRAY1D( S2_Scrolling_Source_List, __TABLE, 24 );;


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

START_GLOBAL_VAR_STRUCT( S2_Scrolling_Source_List )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ENABLED );
   DECLARE_IO_ARRAY( __ITEMSELECTED );
   DECLARE_IO_ARRAY( __SELECTFB );
   DECLARE_IO_ARRAY( __SOURCESELECTED );
   DECLARE_IO_ARRAY( __NAMEOUT$ );
   DECLARE_IO_ARRAY( __NOWPLAYINGOUT$ );
   unsigned short __INDEX;
   unsigned short __SCROLLMAX;
   DECLARE_INTARRAY( S2_Scrolling_Source_List, __TABLE );
   DECLARE_STRING_ARRAY( S2_Scrolling_Source_List, __NAMEIN$ );
   DECLARE_STRING_ARRAY( S2_Scrolling_Source_List, __NOWPLAYINGIN$ );
};

START_NVRAM_VAR_STRUCT( S2_Scrolling_Source_List )
{
};



#endif //__S2_SCROLLING_SOURCE_LIST_H__

