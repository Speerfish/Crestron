#ifndef __S2_GMTTIME_H__
#define __S2_GMTTIME_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_GMTTime_SET_DIG_INPUT 0
#define __S2_GMTTime_TIMEREQUEST_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_GMTTime_GMTMONTH_ANALOG_INPUT 0
#define __S2_GMTTime_GMTDAY_ANALOG_INPUT 1
#define __S2_GMTTime_GMTYEAR_ANALOG_INPUT 2
#define __S2_GMTTime_GMTHOUR_ANALOG_INPUT 3
#define __S2_GMTTime_GMTMINUTE_ANALOG_INPUT 4
#define __S2_GMTTime_GMTSECONDS_ANALOG_INPUT 5
#define __S2_GMTTime_GMTOFFSET_ANALOG_INPUT 6




/*
* DIGITAL_OUTPUT
*/
#define __S2_GMTTime_WAITINGFORTIMEDATA_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_GMTTime_LOCALMONTH_ANALOG_OUTPUT 0
#define __S2_GMTTime_LOCALDAY_ANALOG_OUTPUT 1
#define __S2_GMTTime_LOCALYEAR_ANALOG_OUTPUT 2
#define __S2_GMTTime_LOCALHOUR_ANALOG_OUTPUT 3
#define __S2_GMTTime_LOCALMINUTE_ANALOG_OUTPUT 4
#define __S2_GMTTime_LOCALSECONDS_ANALOG_OUTPUT 5



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

START_GLOBAL_VAR_STRUCT( S2_GMTTime )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __SAVEDMONTH;
   unsigned short __SAVEDDAY;
   unsigned short __SAVEDYEAR;
   unsigned short __SAVEDHOUR;
   unsigned short __SAVEDMINUTE;
   unsigned short __SAVEDSECONDS;
   unsigned short __GMT_TIMEFLAGS;
};

START_NVRAM_VAR_STRUCT( S2_GMTTime )
{
   short __SAVEDGMTOFFSET;
};

DEFINE_WAITEVENT( S2_GMTTime, TIME_REQUEST_WAIT );


#endif //__S2_GMTTIME_H__

