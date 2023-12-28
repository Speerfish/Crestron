#ifndef __S2_ADAGIO_SYSTEM_INFO_V1_0_H__
#define __S2_ADAGIO_SYSTEM_INFO_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Adagio_System_Info_v1_0_GO_DIG_INPUT 0


/*
* ANALOG_INPUT
*/


#define __S2_Adagio_System_Info_v1_0_FROMCONSOLE$_BUFFER_INPUT 0
#define __S2_Adagio_System_Info_v1_0_FROMCONSOLE$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Adagio_System_Info_v1_0, __FROMCONSOLE$, __S2_Adagio_System_Info_v1_0_FROMCONSOLE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Adagio_System_Info_v1_0_BUSY_DIG_OUTPUT 0
#define __S2_Adagio_System_Info_v1_0_ERROR_DIG_OUTPUT 1
#define __S2_Adagio_System_Info_v1_0_ADANTO_DIG_OUTPUT 2


/*
* ANALOG_OUTPUT
*/

#define __S2_Adagio_System_Info_v1_0_OPS$_STRING_OUTPUT 0
#define __S2_Adagio_System_Info_v1_0_PROGRAM$_STRING_OUTPUT 1
#define __S2_Adagio_System_Info_v1_0_COMPILED$_STRING_OUTPUT 2
#define __S2_Adagio_System_Info_v1_0_IPA$_STRING_OUTPUT 3
#define __S2_Adagio_System_Info_v1_0_IPM$_STRING_OUTPUT 4
#define __S2_Adagio_System_Info_v1_0_DEFR$_STRING_OUTPUT 5
#define __S2_Adagio_System_Info_v1_0_VERSION$_STRING_OUTPUT 6
#define __S2_Adagio_System_Info_v1_0_MAC$_STRING_OUTPUT 7
#define __S2_Adagio_System_Info_v1_0_HOSTNAME$_STRING_OUTPUT 8
#define __S2_Adagio_System_Info_v1_0_TOCONSOLE$_STRING_OUTPUT 9


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
#define __S2_Adagio_System_Info_v1_0_TEMPSTRING$_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Adagio_System_Info_v1_0, __TEMPSTRING$, __S2_Adagio_System_Info_v1_0_TEMPSTRING$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Adagio_System_Info_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __MARKER1;
   unsigned short __MARKER2;
   unsigned short __SEMAPHORE;
   unsigned short __COUNTER;
   unsigned short __BUSYINT;
   unsigned short __COUNT;
   DECLARE_STRING_STRUCT( S2_Adagio_System_Info_v1_0, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_Adagio_System_Info_v1_0, __FROMCONSOLE$ );
};

START_NVRAM_VAR_STRUCT( S2_Adagio_System_Info_v1_0 )
{
};

DEFINE_WAITEVENT( S2_Adagio_System_Info_v1_0, __SPLS_TMPVAR__WAITLABEL_0__ );


#endif //__S2_ADAGIO_SYSTEM_INFO_V1_0_H__

