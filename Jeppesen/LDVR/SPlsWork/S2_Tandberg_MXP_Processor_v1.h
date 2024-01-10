#ifndef __S2_TANDBERG_MXP_PROCESSOR_V1_H__
#define __S2_TANDBERG_MXP_PROCESSOR_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN1GO_DIG_INPUT 0
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN2GO_DIG_INPUT 1
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN3GO_DIG_INPUT 2
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN4GO_DIG_INPUT 3
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN5GO_DIG_INPUT 4
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN6GO_DIG_INPUT 5
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT1GO_DIG_INPUT 6
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT2GO_DIG_INPUT 7
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT3GO_DIG_INPUT 8
#define __S2_Tandberg_MXP_Processor_v1_REQUESTDIRECTORY_DIG_INPUT 9
#define __S2_Tandberg_MXP_Processor_v1_SORTDIRECTORY_DIG_INPUT 10
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYFIRST_DIG_INPUT 11
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYPREV_DIG_INPUT 12
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNEXT_DIG_INPUT 13
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYLAST_DIG_INPUT 14
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYDIAL_DIG_INPUT 15
#define __S2_Tandberg_MXP_Processor_v1_MCUFIRST_DIG_INPUT 16
#define __S2_Tandberg_MXP_Processor_v1_MCUPREV_DIG_INPUT 17
#define __S2_Tandberg_MXP_Processor_v1_MCUNEXT_DIG_INPUT 18
#define __S2_Tandberg_MXP_Processor_v1_MCULAST_DIG_INPUT 19
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYSELECTNAME_DIG_INPUT 20
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYSELECTNUMBER1_DIG_INPUT 21
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYSELECTNUMBER2_DIG_INPUT 22
#define __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER1FB_DIG_INPUT 23
#define __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER2FB_DIG_INPUT 24
#define __S2_Tandberg_MXP_Processor_v1_CALLRESTRICTEDFB_DIG_INPUT 25
#define __S2_Tandberg_MXP_Processor_v1_PLACECALL_DIG_INPUT 26
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYSAVEENTRY_DIG_INPUT 27
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYDELETEENTRY_DIG_INPUT 28
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYADDENTRYLOCAL_DIG_INPUT 29
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYCLEARSETTINGS_DIG_INPUT 30
#define __S2_Tandberg_MXP_Processor_v1_MCUENTERPASSWORD_DIG_INPUT 31
#define __S2_Tandberg_MXP_Processor_v1_MCUENTERID_DIG_INPUT 32
#define __S2_Tandberg_MXP_Processor_v1_STARTACCESSCODEFB_DIG_INPUT 33
#define __S2_Tandberg_MXP_Processor_v1_ACCESSCODEENTER_DIG_INPUT 34

#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYSELECT_DIG_INPUT 35
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYSELECT_ARRAY_LENGTH 20

/*
* ANALOG_INPUT
*/
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN1LEVEL_ANALOG_INPUT 0
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN2LEVEL_ANALOG_INPUT 1
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN3LEVEL_ANALOG_INPUT 2
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN4LEVEL_ANALOG_INPUT 3
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN5LEVEL_ANALOG_INPUT 4
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN6LEVEL_ANALOG_INPUT 5
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT1LEVEL_ANALOG_INPUT 6
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT2LEVEL_ANALOG_INPUT 7
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT3LEVEL_ANALOG_INPUT 8
#define __S2_Tandberg_MXP_Processor_v1_ENTRIESPERSCREEN_ANALOG_INPUT 9
#define __S2_Tandberg_MXP_Processor_v1_MCUENTRIESPERSCREEN_ANALOG_INPUT 10
#define __S2_Tandberg_MXP_Processor_v1_MCUVIEWSITE_ANALOG_INPUT 11
#define __S2_Tandberg_MXP_Processor_v1_MCUTRANSMITSITE_ANALOG_INPUT 12
#define __S2_Tandberg_MXP_Processor_v1_MCUDROPSITE_ANALOG_INPUT 13
#define __S2_Tandberg_MXP_Processor_v1_CALLQUALITY_ANALOG_INPUT 14
#define __S2_Tandberg_MXP_Processor_v1_CALLTYPE_ANALOG_INPUT 15
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYCALLQUALITYIN_ANALOG_INPUT 16
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYCALLTYPEIN_ANALOG_INPUT 17

#define __S2_Tandberg_MXP_Processor_v1_TEXTIN$_STRING_INPUT 18
#define __S2_Tandberg_MXP_Processor_v1_TEXTIN$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEXTIN$, __S2_Tandberg_MXP_Processor_v1_TEXTIN$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_NUMBER1IN$_STRING_INPUT 19
#define __S2_Tandberg_MXP_Processor_v1_NUMBER1IN$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __NUMBER1IN$, __S2_Tandberg_MXP_Processor_v1_NUMBER1IN$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_NUMBER2IN$_STRING_INPUT 20
#define __S2_Tandberg_MXP_Processor_v1_NUMBER2IN$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __NUMBER2IN$, __S2_Tandberg_MXP_Processor_v1_NUMBER2IN$_STRING_MAX_LEN );

#define __S2_Tandberg_MXP_Processor_v1_TANDBERGRX$_BUFFER_INPUT 21
#define __S2_Tandberg_MXP_Processor_v1_TANDBERGRX$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TANDBERGRX$, __S2_Tandberg_MXP_Processor_v1_TANDBERGRX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Tandberg_MXP_Processor_v1_REQUESTINPROGRESS_DIG_OUTPUT 0
#define __S2_Tandberg_MXP_Processor_v1_SORTING_DIG_OUTPUT 1
#define __S2_Tandberg_MXP_Processor_v1_GLOBALSELECTED_DIG_OUTPUT 2
#define __S2_Tandberg_MXP_Processor_v1_LOCALSELECTED_DIG_OUTPUT 3
#define __S2_Tandberg_MXP_Processor_v1_LINE1CONNECTED_DIG_OUTPUT 4
#define __S2_Tandberg_MXP_Processor_v1_LINE2CONNECTED_DIG_OUTPUT 5
#define __S2_Tandberg_MXP_Processor_v1_LINE3CONNECTED_DIG_OUTPUT 6
#define __S2_Tandberg_MXP_Processor_v1_LINE4CONNECTED_DIG_OUTPUT 7
#define __S2_Tandberg_MXP_Processor_v1_MCUDROPSITEOUT_DIG_OUTPUT 8


/*
* ANALOG_OUTPUT
*/
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN1LEVELOUT_ANALOG_OUTPUT 0
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN2LEVELOUT_ANALOG_OUTPUT 1
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN3LEVELOUT_ANALOG_OUTPUT 2
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN4LEVELOUT_ANALOG_OUTPUT 3
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN5LEVELOUT_ANALOG_OUTPUT 4
#define __S2_Tandberg_MXP_Processor_v1_AUDIOIN6LEVELOUT_ANALOG_OUTPUT 5
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT1LEVELOUT_ANALOG_OUTPUT 6
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT2LEVELOUT_ANALOG_OUTPUT 7
#define __S2_Tandberg_MXP_Processor_v1_AUDIOOUT3LEVELOUT_ANALOG_OUTPUT 8
#define __S2_Tandberg_MXP_Processor_v1_RECALLBAR_ANALOG_OUTPUT 9
#define __S2_Tandberg_MXP_Processor_v1_ISDNBW_ANALOG_OUTPUT 10
#define __S2_Tandberg_MXP_Processor_v1_LANBW_ANALOG_OUTPUT 11
#define __S2_Tandberg_MXP_Processor_v1_NPOPTION_ANALOG_OUTPUT 12
#define __S2_Tandberg_MXP_Processor_v1_MCUOPTION_ANALOG_OUTPUT 13
#define __S2_Tandberg_MXP_Processor_v1_LOCALENTRIESFREE_ANALOG_OUTPUT 14
#define __S2_Tandberg_MXP_Processor_v1_CURRENTMCUSCREENOUT_ANALOG_OUTPUT 15

#define __S2_Tandberg_MXP_Processor_v1_NEARNAME1$_STRING_OUTPUT 16
#define __S2_Tandberg_MXP_Processor_v1_NEARNAME2$_STRING_OUTPUT 17
#define __S2_Tandberg_MXP_Processor_v1_NEARNAME3$_STRING_OUTPUT 18
#define __S2_Tandberg_MXP_Processor_v1_NEARNAME4$_STRING_OUTPUT 19
#define __S2_Tandberg_MXP_Processor_v1_NEARNAME5$_STRING_OUTPUT 20
#define __S2_Tandberg_MXP_Processor_v1_FARNAME1$_STRING_OUTPUT 21
#define __S2_Tandberg_MXP_Processor_v1_FARNAME2$_STRING_OUTPUT 22
#define __S2_Tandberg_MXP_Processor_v1_FARNAME3$_STRING_OUTPUT 23
#define __S2_Tandberg_MXP_Processor_v1_FARNAME4$_STRING_OUTPUT 24
#define __S2_Tandberg_MXP_Processor_v1_FARNAME5$_STRING_OUTPUT 25
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNAME$_STRING_OUTPUT 26
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNUMBER1$_STRING_OUTPUT 27
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNUMBER2$_STRING_OUTPUT 28
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNETWORK$_STRING_OUTPUT 29
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYQUALITY$_STRING_OUTPUT 30
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYTYPE$_STRING_OUTPUT 31
#define __S2_Tandberg_MXP_Processor_v1_MCUNUMBERS$_STRING_OUTPUT 32
#define __S2_Tandberg_MXP_Processor_v1_MCUSITENUMBERS$_STRING_OUTPUT 33
#define __S2_Tandberg_MXP_Processor_v1_MCUSITENAMES$_STRING_OUTPUT 34
#define __S2_Tandberg_MXP_Processor_v1_MCUVIEWINGSITE$_STRING_OUTPUT 35
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS$_STRING_OUTPUT 36
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS1DIRECTION$_STRING_OUTPUT 37
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS2DIRECTION$_STRING_OUTPUT 38
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS3DIRECTION$_STRING_OUTPUT 39
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS4DIRECTION$_STRING_OUTPUT 40
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS1TYPE$_STRING_OUTPUT 41
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS2TYPE$_STRING_OUTPUT 42
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS3TYPE$_STRING_OUTPUT 43
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS4TYPE$_STRING_OUTPUT 44
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS1STATUS$_STRING_OUTPUT 45
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS2STATUS$_STRING_OUTPUT 46
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS3STATUS$_STRING_OUTPUT 47
#define __S2_Tandberg_MXP_Processor_v1_CALLSTATUS4STATUS$_STRING_OUTPUT 48
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYTEXT$_STRING_OUTPUT 49
#define __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER1$_STRING_OUTPUT 50
#define __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER2$_STRING_OUTPUT 51
#define __S2_Tandberg_MXP_Processor_v1_ACCESSCODE$_STRING_OUTPUT 52
#define __S2_Tandberg_MXP_Processor_v1_SYSTEMTYPE$_STRING_OUTPUT 53
#define __S2_Tandberg_MXP_Processor_v1_TANDBERGTX$_STRING_OUTPUT 54

#define __S2_Tandberg_MXP_Processor_v1_DIRECTORY$_STRING_OUTPUT 55
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORY$_ARRAY_LENGTH 20

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
CREATE_INTARRAY1D( S2_Tandberg_MXP_Processor_v1, __TEMPLOCATION, 301 );;
CREATE_INTARRAY1D( S2_Tandberg_MXP_Processor_v1, __DIRECTORY, 301 );;
CREATE_INTARRAY1D( S2_Tandberg_MXP_Processor_v1, __MCUNUMBER, 50 );;
CREATE_INTARRAY1D( S2_Tandberg_MXP_Processor_v1, __MCUSITENUMBER, 50 );;
CREATE_INTARRAY1D( S2_Tandberg_MXP_Processor_v1, __DIRECTORYUSED, 100 );;


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
#define __S2_Tandberg_MXP_Processor_v1_TEMPSTRING$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEMPSTRING$, __S2_Tandberg_MXP_Processor_v1_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_TEXT$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEXT$, __S2_Tandberg_MXP_Processor_v1_TEXT$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_NAME$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __NAME$, __S2_Tandberg_MXP_Processor_v1_NAME$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_TEMP$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEMP$, __S2_Tandberg_MXP_Processor_v1_TEMP$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_TEMP2$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEMP2$, __S2_Tandberg_MXP_Processor_v1_TEMP2$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIRECTION$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTION$, __S2_Tandberg_MXP_Processor_v1_DIRECTION$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_TYPE$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TYPE$, __S2_Tandberg_MXP_Processor_v1_TYPE$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_STATUS$_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __STATUS$, __S2_Tandberg_MXP_Processor_v1_STATUS$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNAMEINT$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTORYNAMEINT$, __S2_Tandberg_MXP_Processor_v1_DIRECTORYNAMEINT$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNUMBER1INT$_STRING_MAX_LEN 40
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTORYNUMBER1INT$, __S2_Tandberg_MXP_Processor_v1_DIRECTORYNUMBER1INT$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIRECTORYNUMBER2INT$_STRING_MAX_LEN 40
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTORYNUMBER2INT$, __S2_Tandberg_MXP_Processor_v1_DIRECTORYNUMBER2INT$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER1INT$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIALCALLNUMBER1INT$, __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER1INT$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER2INT$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIALCALLNUMBER2INT$, __S2_Tandberg_MXP_Processor_v1_DIALCALLNUMBER2INT$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_CALLQUALITY$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __CALLQUALITY$, __S2_Tandberg_MXP_Processor_v1_CALLQUALITY$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIRCALLQUALITY$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRCALLQUALITY$, __S2_Tandberg_MXP_Processor_v1_DIRCALLQUALITY$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_CALLTYPE$_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __CALLTYPE$, __S2_Tandberg_MXP_Processor_v1_CALLTYPE$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_DIRCALLTYPE$_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRCALLTYPE$, __S2_Tandberg_MXP_Processor_v1_DIRCALLTYPE$_STRING_MAX_LEN );
#define __S2_Tandberg_MXP_Processor_v1_TEMPSTORAGE$_ARRAY_NUM_ELEMS 301
#define __S2_Tandberg_MXP_Processor_v1_TEMPSTORAGE$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Tandberg_MXP_Processor_v1, __TEMPSTORAGE$, __S2_Tandberg_MXP_Processor_v1_TEMPSTORAGE$_ARRAY_NUM_ELEMS, __S2_Tandberg_MXP_Processor_v1_TEMPSTORAGE$_ARRAY_NUM_CHARS );
#define __S2_Tandberg_MXP_Processor_v1_STORAGE$_ARRAY_NUM_ELEMS 301
#define __S2_Tandberg_MXP_Processor_v1_STORAGE$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Tandberg_MXP_Processor_v1, __STORAGE$, __S2_Tandberg_MXP_Processor_v1_STORAGE$_ARRAY_NUM_ELEMS, __S2_Tandberg_MXP_Processor_v1_STORAGE$_ARRAY_NUM_CHARS );
#define __S2_Tandberg_MXP_Processor_v1_MCUSITENAME$_ARRAY_NUM_ELEMS 50
#define __S2_Tandberg_MXP_Processor_v1_MCUSITENAME$_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Tandberg_MXP_Processor_v1, __MCUSITENAME$, __S2_Tandberg_MXP_Processor_v1_MCUSITENAME$_ARRAY_NUM_ELEMS, __S2_Tandberg_MXP_Processor_v1_MCUSITENAME$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Tandberg_MXP_Processor_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DIRECTORYSELECT );
   DECLARE_IO_ARRAY( __DIRECTORY$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEXTIN$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __NUMBER1IN$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __NUMBER2IN$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TANDBERGRX$ );
};

START_NVRAM_VAR_STRUCT( S2_Tandberg_MXP_Processor_v1 )
{
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEXT$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __NAME$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TEMP2$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTION$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __TYPE$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __STATUS$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTORYNAMEINT$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTORYNUMBER1INT$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRECTORYNUMBER2INT$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIALCALLNUMBER1INT$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIALCALLNUMBER2INT$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __CALLQUALITY$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRCALLQUALITY$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __CALLTYPE$ );
   DECLARE_STRING_STRUCT( S2_Tandberg_MXP_Processor_v1, __DIRCALLTYPE$ );
   DECLARE_STRING_ARRAY( S2_Tandberg_MXP_Processor_v1, __TEMPSTORAGE$ );
   DECLARE_STRING_ARRAY( S2_Tandberg_MXP_Processor_v1, __STORAGE$ );
   DECLARE_STRING_ARRAY( S2_Tandberg_MXP_Processor_v1, __MCUSITENAME$ );
   unsigned short __SEMAPHORE;
   unsigned short __NUMBER;
   unsigned short __PARAMATER;
   unsigned short __LEVEL;
   unsigned short __MARKER1;
   unsigned short __MARKER2;
   unsigned short __LOCATION;
   unsigned short __I;
   unsigned short __J;
   unsigned short __TOTALRECORDS;
   unsigned short __TEMP;
   unsigned short __TOTALSCREENS;
   unsigned short __CURRENTSCREEN;
   unsigned short __COUNTER;
   unsigned short __STARTCOUNTER;
   unsigned short __K;
   unsigned short __MARKER3;
   unsigned short __DIRECTORYSELECTED;
   unsigned short __TEMPDIRECTORY;
   unsigned short __STORECOUNTER;
   unsigned short __RECALLCOUNTER;
   unsigned short __TEMPCOUNT;
   unsigned short __MCUCOUNTER;
   unsigned short __TOTALMCUSCREENS;
   unsigned short __CURRENTMCUSCREEN;
   unsigned short __OFFSET;
   unsigned short __VIEWMCU;
   unsigned short __VIEWSITE;
   unsigned short __FOUND;
   unsigned short __SITE;
   unsigned short __CHANNEL;
   unsigned short __CALLRESTRICTED;
   unsigned short __LASTDIRECTORY;
   unsigned short __LASTDIRECTORYINDEX;
   unsigned short __SAVEDSITE;
   DECLARE_INTARRAY( S2_Tandberg_MXP_Processor_v1, __TEMPLOCATION );
   DECLARE_INTARRAY( S2_Tandberg_MXP_Processor_v1, __DIRECTORY );
   DECLARE_INTARRAY( S2_Tandberg_MXP_Processor_v1, __MCUNUMBER );
   DECLARE_INTARRAY( S2_Tandberg_MXP_Processor_v1, __MCUSITENUMBER );
   DECLARE_INTARRAY( S2_Tandberg_MXP_Processor_v1, __DIRECTORYUSED );
};



#endif //__S2_TANDBERG_MXP_PROCESSOR_V1_H__

