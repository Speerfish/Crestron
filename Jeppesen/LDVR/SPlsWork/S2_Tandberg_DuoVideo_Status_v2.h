#ifndef __S2_TANDBERG_DUOVIDEO_STATUS_V2_H__
#define __S2_TANDBERG_DUOVIDEO_STATUS_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/


#define __S2_Tandberg_DuoVideo_Status_v2_TANDBERG_RX$_BUFFER_INPUT 0
#define __S2_Tandberg_DuoVideo_Status_v2_TANDBERG_RX$_BUFFER_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __TANDBERG_RX$, __S2_Tandberg_DuoVideo_Status_v2_TANDBERG_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Tandberg_DuoVideo_Status_v2_DUOVID_READY_DIG_OUTPUT 0
#define __S2_Tandberg_DuoVideo_Status_v2_DUOVID_NOTREADY_DIG_OUTPUT 1
#define __S2_Tandberg_DuoVideo_Status_v2_DUOLOCAL_DIG_OUTPUT 2
#define __S2_Tandberg_DuoVideo_Status_v2_DUOREMOTE_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/

#define __S2_Tandberg_DuoVideo_Status_v2_TANDBERG_TX$_STRING_OUTPUT 0


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
#define __S2_Tandberg_DuoVideo_Status_v2_SGATHERED_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __SGATHERED, __S2_Tandberg_DuoVideo_Status_v2_SGATHERED_STRING_MAX_LEN );
#define __S2_Tandberg_DuoVideo_Status_v2_SDATA_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __SDATA, __S2_Tandberg_DuoVideo_Status_v2_SDATA_STRING_MAX_LEN );
#define __S2_Tandberg_DuoVideo_Status_v2_SDUOSTATUS_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __SDUOSTATUS, __S2_Tandberg_DuoVideo_Status_v2_SDUOSTATUS_STRING_MAX_LEN );
#define __S2_Tandberg_DuoVideo_Status_v2_STEMP_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __STEMP, __S2_Tandberg_DuoVideo_Status_v2_STEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Tandberg_DuoVideo_Status_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __TANDBERG_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Tandberg_DuoVideo_Status_v2 )
{
   DECLARE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __SGATHERED );
   DECLARE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __SDATA );
   DECLARE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __SDUOSTATUS );
   DECLARE_STRING_STRUCT( S2_Tandberg_DuoVideo_Status_v2, __STEMP );
   unsigned short __ISTART;
   unsigned short __ICNT;
   unsigned short __BUSY;
   unsigned short __ISTATUS;
   unsigned short __IVAL;
};



#endif //__S2_TANDBERG_DUOVIDEO_STATUS_V2_H__

