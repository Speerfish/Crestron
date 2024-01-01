#ifndef __S2_APAD_MENU_CONTROL_V5_H__
#define __S2_APAD_MENU_CONTROL_V5_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_APAD_Menu_Control_v5_ROOMONFB_DIG_INPUT 0
#define __S2_APAD_Menu_Control_v5_EXITSOURCECONTROL_DIG_INPUT 1
#define __S2_APAD_Menu_Control_v5_CYCLEROOMSOURCE_DIG_INPUT 2
#define __S2_APAD_Menu_Control_v5_EXITTOOLS_DIG_INPUT 3
#define __S2_APAD_Menu_Control_v5_EXITSOURCESETUP_DIG_INPUT 4
#define __S2_APAD_Menu_Control_v5_DEFAULTROOMONFB_DIG_INPUT 5
#define __S2_APAD_Menu_Control_v5_ROOMCONNECTED_DIG_INPUT 6
#define __S2_APAD_Menu_Control_v5_SYSTEMBUILDER_DIG_INPUT 7
#define __S2_APAD_Menu_Control_v5_HOUSEMENUENABLED_DIG_INPUT 8
#define __S2_APAD_Menu_Control_v5_EXITHOUSEMENU_DIG_INPUT 9
#define __S2_APAD_Menu_Control_v5_SYSTEMINITIALIZED_DIG_INPUT 10
#define __S2_APAD_Menu_Control_v5_ALLSOURCESDISABLED_DIG_INPUT 11
#define __S2_APAD_Menu_Control_v5_POWER_DIG_INPUT 12
#define __S2_APAD_Menu_Control_v5_ENTER_DIG_INPUT 13
#define __S2_APAD_Menu_Control_v5_KNOBLEFT_DIG_INPUT 14
#define __S2_APAD_Menu_Control_v5_KNOBRIGHT_DIG_INPUT 15
#define __S2_APAD_Menu_Control_v5_SELECTINSTALLERMENU_DIG_INPUT 16
#define __S2_APAD_Menu_Control_v5_SELECTSOURCESETUPMENU_DIG_INPUT 17

#define __S2_APAD_Menu_Control_v5_SOFTKEY_DIG_INPUT 18
#define __S2_APAD_Menu_Control_v5_SOFTKEY_ARRAY_LENGTH 4
#define __S2_APAD_Menu_Control_v5_GROUPACTIVE_DIG_INPUT 22
#define __S2_APAD_Menu_Control_v5_GROUPACTIVE_ARRAY_LENGTH 6
#define __S2_APAD_Menu_Control_v5_SOURCEDISABLED_DIG_INPUT 28
#define __S2_APAD_Menu_Control_v5_SOURCEDISABLED_ARRAY_LENGTH 10

/*
* ANALOG_INPUT
*/
#define __S2_APAD_Menu_Control_v5_DEFAULTROOM_ANALOG_INPUT 0
#define __S2_APAD_Menu_Control_v5_CURRENTSOURCE_ANALOG_INPUT 1

#define __S2_APAD_Menu_Control_v5_EXTERNALSOURCENAME$_STRING_INPUT 3
#define __S2_APAD_Menu_Control_v5_EXTERNALSOURCENAME$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_APAD_Menu_Control_v5, __EXTERNALSOURCENAME$, __S2_APAD_Menu_Control_v5_EXTERNALSOURCENAME$_STRING_MAX_LEN );

#define __S2_APAD_Menu_Control_v5_ROOMLIST$_BUFFER_INPUT 2
#define __S2_APAD_Menu_Control_v5_ROOMLIST$_BUFFER_MAX_LEN 700
CREATE_STRING_STRUCT( S2_APAD_Menu_Control_v5, __ROOMLIST$, __S2_APAD_Menu_Control_v5_ROOMLIST$_BUFFER_MAX_LEN );

#define __S2_APAD_Menu_Control_v5_ROOMEQUIPMENTID_ANALOG_INPUT 4
#define __S2_APAD_Menu_Control_v5_ROOMEQUIPMENTID_ARRAY_LENGTH 24
#define __S2_APAD_Menu_Control_v5_SOURCEDEVICETYPE_ANALOG_INPUT 28
#define __S2_APAD_Menu_Control_v5_SOURCEDEVICETYPE_ARRAY_LENGTH 10
#define __S2_APAD_Menu_Control_v5_GROUPNAMES$_STRING_INPUT 38
#define __S2_APAD_Menu_Control_v5_GROUPNAMES$_ARRAY_NUM_ELEMS 6
#define __S2_APAD_Menu_Control_v5_GROUPNAMES$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_APAD_Menu_Control_v5, __GROUPNAMES$, __S2_APAD_Menu_Control_v5_GROUPNAMES$_ARRAY_NUM_ELEMS, __S2_APAD_Menu_Control_v5_GROUPNAMES$_ARRAY_NUM_CHARS );
#define __S2_APAD_Menu_Control_v5_SOURCENAMES$_STRING_INPUT 44
#define __S2_APAD_Menu_Control_v5_SOURCENAMES$_ARRAY_NUM_ELEMS 10
#define __S2_APAD_Menu_Control_v5_SOURCENAMES$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_APAD_Menu_Control_v5, __SOURCENAMES$, __S2_APAD_Menu_Control_v5_SOURCENAMES$_ARRAY_NUM_ELEMS, __S2_APAD_Menu_Control_v5_SOURCENAMES$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_APAD_Menu_Control_v5_ROOMCONNECT_DIG_OUTPUT 0
#define __S2_APAD_Menu_Control_v5_ROOMDISCONNECT_DIG_OUTPUT 1
#define __S2_APAD_Menu_Control_v5_ROOMON_DIG_OUTPUT 2
#define __S2_APAD_Menu_Control_v5_ROOMOFF_DIG_OUTPUT 3
#define __S2_APAD_Menu_Control_v5_SOURCECONNECT_DIG_OUTPUT 4
#define __S2_APAD_Menu_Control_v5_SOURCEDISCONNECT_DIG_OUTPUT 5
#define __S2_APAD_Menu_Control_v5_CONTROLLINGFOREIGNROOM_DIG_OUTPUT 6
#define __S2_APAD_Menu_Control_v5_DEFAULTROOMOFF_DIG_OUTPUT 7

#define __S2_APAD_Menu_Control_v5_DIGITALOUT_DIG_OUTPUT 8
#define __S2_APAD_Menu_Control_v5_DIGITALOUT_ARRAY_LENGTH 6
#define __S2_APAD_Menu_Control_v5_GROUPON_DIG_OUTPUT 14
#define __S2_APAD_Menu_Control_v5_GROUPON_ARRAY_LENGTH 6
#define __S2_APAD_Menu_Control_v5_GROUPOFF_DIG_OUTPUT 20
#define __S2_APAD_Menu_Control_v5_GROUPOFF_ARRAY_LENGTH 6

/*
* ANALOG_OUTPUT
*/
#define __S2_APAD_Menu_Control_v5_CURRENTPAGE_ANALOG_OUTPUT 0
#define __S2_APAD_Menu_Control_v5_CURRENTSUBPAGE_ANALOG_OUTPUT 1
#define __S2_APAD_Menu_Control_v5_ROOMEQUIPMENTIDSELECTED_ANALOG_OUTPUT 2
#define __S2_APAD_Menu_Control_v5_NOWPLAYINGINDEX_ANALOG_OUTPUT 3
#define __S2_APAD_Menu_Control_v5_SOURCEGUIIDSELECTED_ANALOG_OUTPUT 4
#define __S2_APAD_Menu_Control_v5_SOURCEEQUIPMENTIDSELECTED_ANALOG_OUTPUT 5
#define __S2_APAD_Menu_Control_v5_NEWSOURCEREQUESTED_ANALOG_OUTPUT 6
#define __S2_APAD_Menu_Control_v5_SCROLLBAR_ANALOG_OUTPUT 7

#define __S2_APAD_Menu_Control_v5_CURRENTSOURCE$_STRING_OUTPUT 8

#define __S2_APAD_Menu_Control_v5_SOFTKEY$_STRING_OUTPUT 9
#define __S2_APAD_Menu_Control_v5_SOFTKEY$_ARRAY_LENGTH 4
#define __S2_APAD_Menu_Control_v5_SERIALOUT$_STRING_OUTPUT 13
#define __S2_APAD_Menu_Control_v5_SERIALOUT$_ARRAY_LENGTH 5

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
#define __S2_APAD_Menu_Control_v5_CURRENTSOURCEINT$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_APAD_Menu_Control_v5, __CURRENTSOURCEINT$, __S2_APAD_Menu_Control_v5_CURRENTSOURCEINT$_STRING_MAX_LEN );
#define __S2_APAD_Menu_Control_v5_ROOMNAMES$_ARRAY_NUM_ELEMS 24
#define __S2_APAD_Menu_Control_v5_ROOMNAMES$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_APAD_Menu_Control_v5, __ROOMNAMES$, __S2_APAD_Menu_Control_v5_ROOMNAMES$_ARRAY_NUM_ELEMS, __S2_APAD_Menu_Control_v5_ROOMNAMES$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_APAD_Menu_Control_v5 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __SOFTKEY );
   DECLARE_IO_ARRAY( __GROUPACTIVE );
   DECLARE_IO_ARRAY( __SOURCEDISABLED );
   DECLARE_IO_ARRAY( __DIGITALOUT );
   DECLARE_IO_ARRAY( __GROUPON );
   DECLARE_IO_ARRAY( __GROUPOFF );
   DECLARE_IO_ARRAY( __ROOMEQUIPMENTID );
   DECLARE_IO_ARRAY( __SOURCEDEVICETYPE );
   DECLARE_IO_ARRAY( __SOFTKEY$ );
   DECLARE_IO_ARRAY( __SERIALOUT$ );
   unsigned short __CURRENTROOM;
   unsigned short __ROOMSEMAPHORE;
   unsigned short __TOTALROOMENTRIES;
   unsigned short __SOURCESEMAPHORE;
   unsigned short __CURRENTSOURCECONTROLLABLE;
   unsigned short __LASTSOURCEREQUESTED;
   unsigned short __PREVIEWSOURCE;
   unsigned short __PREVIEWROOM;
   unsigned short __SCROLLINDEX;
   unsigned short __SCROLLHIGHLIGHT;
   unsigned short __SCROLLMAX;
   unsigned short __CURRENTMESSAGE;
   unsigned short __PREVIOUSPAGE;
   unsigned short __PAGEOTHERINDEX;
   DECLARE_STRING_STRUCT( S2_APAD_Menu_Control_v5, __CURRENTSOURCEINT$ );
   DECLARE_STRING_ARRAY( S2_APAD_Menu_Control_v5, __ROOMNAMES$ );
   DECLARE_STRING_STRUCT( S2_APAD_Menu_Control_v5, __EXTERNALSOURCENAME$ );
   DECLARE_STRING_ARRAY( S2_APAD_Menu_Control_v5, __GROUPNAMES$ );
   DECLARE_STRING_ARRAY( S2_APAD_Menu_Control_v5, __SOURCENAMES$ );
   DECLARE_STRING_STRUCT( S2_APAD_Menu_Control_v5, __ROOMLIST$ );
};

START_NVRAM_VAR_STRUCT( S2_APAD_Menu_Control_v5 )
{
};

DEFINE_WAITEVENT( S2_APAD_Menu_Control_v5, SOURCESELECTWAIT );
DEFINE_WAITEVENT( S2_APAD_Menu_Control_v5, ROOMSELECTWAIT );


#endif //__S2_APAD_MENU_CONTROL_V5_H__
