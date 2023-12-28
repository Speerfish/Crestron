#ifndef __S2_SCROLLING_ROOM_LIST_H__
#define __S2_SCROLLING_ROOM_LIST_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Scrolling_Room_List_SYSTEMINITIALIZED_DIG_INPUT 0
#define __S2_Scrolling_Room_List_SCROLLFIRST_DIG_INPUT 1
#define __S2_Scrolling_Room_List_SCROLLPREVIOUS_DIG_INPUT 2
#define __S2_Scrolling_Room_List_SCROLLNEXT_DIG_INPUT 3

#define __S2_Scrolling_Room_List_ITEMSELECTED_DIG_INPUT 4
#define __S2_Scrolling_Room_List_ITEMSELECTED_ARRAY_LENGTH 10

/*
* ANALOG_INPUT
*/
#define __S2_Scrolling_Room_List_SCROLLPAGESIZE_ANALOG_INPUT 0
#define __S2_Scrolling_Room_List_TOTALROOMS_ANALOG_INPUT 1
#define __S2_Scrolling_Room_List_ITEMSELECTEDSEED_ANALOG_INPUT 2



#define __S2_Scrolling_Room_List_ROOMSOURCE_ANALOG_INPUT 3
#define __S2_Scrolling_Room_List_ROOMSOURCE_ARRAY_LENGTH 24
#define __S2_Scrolling_Room_List_ROOMNAMEIN$_STRING_INPUT 27
#define __S2_Scrolling_Room_List_ROOMNAMEIN$_ARRAY_NUM_ELEMS 24
#define __S2_Scrolling_Room_List_ROOMNAMEIN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Scrolling_Room_List, __ROOMNAMEIN$, __S2_Scrolling_Room_List_ROOMNAMEIN$_ARRAY_NUM_ELEMS, __S2_Scrolling_Room_List_ROOMNAMEIN$_ARRAY_NUM_CHARS );
#define __S2_Scrolling_Room_List_SOURCENAMEIN$_STRING_INPUT 51
#define __S2_Scrolling_Room_List_SOURCENAMEIN$_ARRAY_NUM_ELEMS 10
#define __S2_Scrolling_Room_List_SOURCENAMEIN$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Scrolling_Room_List, __SOURCENAMEIN$, __S2_Scrolling_Room_List_SOURCENAMEIN$_ARRAY_NUM_ELEMS, __S2_Scrolling_Room_List_SOURCENAMEIN$_ARRAY_NUM_CHARS );
#define __S2_Scrolling_Room_List_NOWPLAYINGIN$_STRING_INPUT 61
#define __S2_Scrolling_Room_List_NOWPLAYINGIN$_ARRAY_NUM_ELEMS 10
#define __S2_Scrolling_Room_List_NOWPLAYINGIN$_ARRAY_NUM_CHARS 255
CREATE_STRING_ARRAY( S2_Scrolling_Room_List, __NOWPLAYINGIN$, __S2_Scrolling_Room_List_NOWPLAYINGIN$_ARRAY_NUM_ELEMS, __S2_Scrolling_Room_List_NOWPLAYINGIN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/

#define __S2_Scrolling_Room_List_ITEMSELECTEDFB_DIG_OUTPUT 0
#define __S2_Scrolling_Room_List_ITEMSELECTEDFB_ARRAY_LENGTH 10
#define __S2_Scrolling_Room_List_ROOMSELECTED_DIG_OUTPUT 10
#define __S2_Scrolling_Room_List_ROOMSELECTED_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/

#define __S2_Scrolling_Room_List_CURRENTROOM$_STRING_OUTPUT 0

#define __S2_Scrolling_Room_List_ROOMNAMEOUT$_STRING_OUTPUT 1
#define __S2_Scrolling_Room_List_ROOMNAMEOUT$_ARRAY_LENGTH 10
#define __S2_Scrolling_Room_List_SOURCENAMEOUT$_STRING_OUTPUT 11
#define __S2_Scrolling_Room_List_SOURCENAMEOUT$_ARRAY_LENGTH 10
#define __S2_Scrolling_Room_List_NOWPLAYINGOUT$_STRING_OUTPUT 21
#define __S2_Scrolling_Room_List_NOWPLAYINGOUT$_ARRAY_LENGTH 10

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

START_GLOBAL_VAR_STRUCT( S2_Scrolling_Room_List )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ITEMSELECTED );
   DECLARE_IO_ARRAY( __ITEMSELECTEDFB );
   DECLARE_IO_ARRAY( __ROOMSELECTED );
   DECLARE_IO_ARRAY( __ROOMSOURCE );
   DECLARE_IO_ARRAY( __ROOMNAMEOUT$ );
   DECLARE_IO_ARRAY( __SOURCENAMEOUT$ );
   DECLARE_IO_ARRAY( __NOWPLAYINGOUT$ );
   unsigned short __INDEX;
   unsigned short __SCROLLMAX;
   unsigned short __ACTIVEROOM;
   DECLARE_STRING_ARRAY( S2_Scrolling_Room_List, __ROOMNAMEIN$ );
   DECLARE_STRING_ARRAY( S2_Scrolling_Room_List, __SOURCENAMEIN$ );
   DECLARE_STRING_ARRAY( S2_Scrolling_Room_List, __NOWPLAYINGIN$ );
};

START_NVRAM_VAR_STRUCT( S2_Scrolling_Room_List )
{
};



#endif //__S2_SCROLLING_ROOM_LIST_H__

