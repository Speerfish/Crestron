#ifndef __S2_SHARP_XG_MB70X_VOLUME_H__
#define __S2_SHARP_XG_MB70X_VOLUME_H__





/*
* DIGITAL_INPUT
*/
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_UP_DIG_INPUT 0
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_DOWN_DIG_INPUT 1
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_DONE_DIG_INPUT 2
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_MUTE_ON_DIG_INPUT 3
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_MUTE_OFF_DIG_INPUT 4
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_POLL_SENT_DIG_INPUT 5
#define __S2_Sharp_XG_MB70X_Volume_LAMP_HOURS_SENT_DIG_INPUT 6
#define __S2_Sharp_XG_MB70X_Volume_POLL_NEXT_ALL_DIG_INPUT 7
#define __S2_Sharp_XG_MB70X_Volume_NO_SIGNAL_DIG_INPUT 8


/*
* ANALOG_INPUT
*/
#define __S2_Sharp_XG_MB70X_Volume_POLL_SEED_ANALOG_INPUT 0

#define __S2_Sharp_XG_MB70X_Volume_FROM_DEVICE$_STRING_INPUT 1
#define __S2_Sharp_XG_MB70X_Volume_FROM_DEVICE$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Sharp_XG_MB70X_Volume, __FROM_DEVICE$, __S2_Sharp_XG_MB70X_Volume_FROM_DEVICE$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_MUTE_ON_FB_DIG_OUTPUT 0
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_MUTE_OFF_FB_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Sharp_XG_MB70X_Volume_VOLUME_LEVEL_ANALOG_OUTPUT 0
#define __S2_Sharp_XG_MB70X_Volume_LAMP_HOURS_ANALOG_OUTPUT 1
#define __S2_Sharp_XG_MB70X_Volume_POLL_SEND_ANALOG_OUTPUT 2

#define __S2_Sharp_XG_MB70X_Volume_TO_DEVICE$_STRING_OUTPUT 3




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
#define __S2_Sharp_XG_MB70X_Volume_STEMP_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Sharp_XG_MB70X_Volume, __STEMP, __S2_Sharp_XG_MB70X_Volume_STEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Sharp_XG_MB70X_Volume )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __IVOL;
   unsigned short __IMUTE;
   unsigned short __IFLAG1;
   unsigned short __ITEMP;
   unsigned short __IMUTESENT;
   unsigned short __IVOLCOUNT;
   unsigned short __IPOLLNEXT;
   unsigned short __INOSIGNAL;
   DECLARE_STRING_STRUCT( S2_Sharp_XG_MB70X_Volume, __STEMP );
   DECLARE_STRING_STRUCT( S2_Sharp_XG_MB70X_Volume, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Sharp_XG_MB70X_Volume )
{
};

DEFINE_WAITEVENT( S2_Sharp_XG_MB70X_Volume, WNOSIGNAL );


#endif //__S2_SHARP_XG_MB70X_VOLUME_H__

