#ifndef __S2_TIMEOUTS_H__
#define __S2_TIMEOUTS_H__





/*
* DIGITAL_INPUT
*/

#define __S2_Timeouts_QSTART_DIG_INPUT 0
#define __S2_Timeouts_QSTART_ARRAY_LENGTH 16
#define __S2_Timeouts_QPASS_DIG_INPUT 16
#define __S2_Timeouts_QPASS_ARRAY_LENGTH 16

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/

#define __S2_Timeouts_QFAIL_DIG_OUTPUT 0
#define __S2_Timeouts_QFAIL_ARRAY_LENGTH 16

/*
* ANALOG_OUTPUT
*/

#define __S2_Timeouts_GRADE$_STRING_OUTPUT 0




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
#define __S2_Timeouts_FAIL$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Timeouts, __FAIL$, __S2_Timeouts_FAIL$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Timeouts )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __QSTART );
   DECLARE_IO_ARRAY( __QPASS );
   DECLARE_IO_ARRAY( __QFAIL );
};

START_NVRAM_VAR_STRUCT( S2_Timeouts )
{
   DECLARE_STRING_STRUCT( S2_Timeouts, __FAIL$ );
   unsigned short __Q;
   unsigned short __PASS;
   unsigned short __FAILCOUNT;
   unsigned short __PASSCOUNT;
   unsigned short __WORKING;
};

DEFINE_WAITEVENT( S2_Timeouts, Q1 );
DEFINE_WAITEVENT( S2_Timeouts, Q2 );
DEFINE_WAITEVENT( S2_Timeouts, Q3 );
DEFINE_WAITEVENT( S2_Timeouts, Q4 );
DEFINE_WAITEVENT( S2_Timeouts, Q5 );
DEFINE_WAITEVENT( S2_Timeouts, Q6 );
DEFINE_WAITEVENT( S2_Timeouts, Q7 );
DEFINE_WAITEVENT( S2_Timeouts, Q8 );
DEFINE_WAITEVENT( S2_Timeouts, Q9 );
DEFINE_WAITEVENT( S2_Timeouts, Q10 );
DEFINE_WAITEVENT( S2_Timeouts, Q11 );
DEFINE_WAITEVENT( S2_Timeouts, Q12 );
DEFINE_WAITEVENT( S2_Timeouts, Q13 );
DEFINE_WAITEVENT( S2_Timeouts, Q14 );
DEFINE_WAITEVENT( S2_Timeouts, Q15 );
DEFINE_WAITEVENT( S2_Timeouts, Q16 );


#endif //__S2_TIMEOUTS_H__

