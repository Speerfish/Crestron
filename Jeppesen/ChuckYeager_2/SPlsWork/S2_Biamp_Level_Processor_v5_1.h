#ifndef __S2_BIAMP_LEVEL_PROCESSOR_V5_1_H__
#define __S2_BIAMP_LEVEL_PROCESSOR_V5_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Biamp_Level_Processor_v5_1_VOL_UP_DIG_INPUT 0
#define __S2_Biamp_Level_Processor_v5_1_VOL_DOWN_DIG_INPUT 1
#define __S2_Biamp_Level_Processor_v5_1_POLL_LEVEL_DIG_INPUT 2
#define __S2_Biamp_Level_Processor_v5_1_SEND_NEW_LEVEL_DIG_INPUT 3


/*
* ANALOG_INPUT
*/
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_MAX_LEVEL_ANALOG_INPUT 0
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_MIN_LEVEL_ANALOG_INPUT 1
#define __S2_Biamp_Level_Processor_v5_1_NEW_VOLUME_LEVEL_ANALOG_INPUT 2

#define __S2_Biamp_Level_Processor_v5_1_VOLUME_DEVICE_ID_STRING_INPUT 3
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_DEVICE_ID_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_DEVICE_ID, __S2_Biamp_Level_Processor_v5_1_VOLUME_DEVICE_ID_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_DEVICE_INSTANCE_STRING_INPUT 4
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_DEVICE_INSTANCE_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_DEVICE_INSTANCE, __S2_Biamp_Level_Processor_v5_1_VOLUME_DEVICE_INSTANCE_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_INDEX1_STRING_INPUT 5
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_INDEX1_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_INDEX1, __S2_Biamp_Level_Processor_v5_1_VOLUME_INDEX1_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_INDEX2_STRING_INPUT 6
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_INDEX2_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_INDEX2, __S2_Biamp_Level_Processor_v5_1_VOLUME_INDEX2_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_COMMAND_TYPE_STRING_INPUT 7
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_COMMAND_TYPE_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_COMMAND_TYPE, __S2_Biamp_Level_Processor_v5_1_VOLUME_COMMAND_TYPE_STRING_MAX_LEN );

#define __S2_Biamp_Level_Processor_v5_1_DEVICE_RX$_BUFFER_INPUT 8
#define __S2_Biamp_Level_Processor_v5_1_DEVICE_RX$_BUFFER_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __DEVICE_RX$, __S2_Biamp_Level_Processor_v5_1_DEVICE_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Biamp_Level_Processor_v5_1_VOLUME_LEVEL_ANALOG_OUTPUT 0

#define __S2_Biamp_Level_Processor_v5_1_DEVICE_TX$_STRING_OUTPUT 1


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
#define __S2_Biamp_Level_Processor_v5_1_STEMPDATA_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __STEMPDATA, __S2_Biamp_Level_Processor_v5_1_STEMPDATA_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_SVOL_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __SVOL, __S2_Biamp_Level_Processor_v5_1_SVOL_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_SVOLUMEPREFIX_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __SVOLUMEPREFIX, __S2_Biamp_Level_Processor_v5_1_SVOLUMEPREFIX_STRING_MAX_LEN );
#define __S2_Biamp_Level_Processor_v5_1_SVOLUMETYPE_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __SVOLUMETYPE, __S2_Biamp_Level_Processor_v5_1_SVOLUMETYPE_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Biamp_Level_Processor_v5_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __BRXOK;
   unsigned short __BUPOK;
   unsigned short __BDOWNOK;
   unsigned short __IVOLINDEX1;
   unsigned short __IVOLINDEX2;
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __STEMPDATA );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __SVOL );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __SVOLUMEPREFIX );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __SVOLUMETYPE );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_DEVICE_ID );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_DEVICE_INSTANCE );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_INDEX1 );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_INDEX2 );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __VOLUME_COMMAND_TYPE );
   DECLARE_STRING_STRUCT( S2_Biamp_Level_Processor_v5_1, __DEVICE_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Biamp_Level_Processor_v5_1 )
{
};



#endif //__S2_BIAMP_LEVEL_PROCESSOR_V5_1_H__

