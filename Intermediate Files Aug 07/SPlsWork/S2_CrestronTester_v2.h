#ifndef __S2_CRESTRONTESTER_V2_H__
#define __S2_CRESTRONTESTER_V2_H__



/*
* STRUCTURE S2_CrestronTester_v2__STATEEMAIL
*/
#define STATEEMAIL__S2_CrestronTester_v2_STATEABBR_STRING_MAX_LEN 10
#define STATEEMAIL__S2_CrestronTester_v2_STATEEMAIL_STRING_MAX_LEN 100
START_STRUCTURE_DEFINITION( S2_CrestronTester_v2, STATEEMAIL )
{
   CREATE_STRING_STRUCT( S2_CrestronTester_v2, STATEEMAIL__STATEABBR, STATEEMAIL__S2_CrestronTester_v2_STATEABBR_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, STATEEMAIL__STATEABBR );
   CREATE_STRING_STRUCT( S2_CrestronTester_v2, STATEEMAIL__STATEEMAIL, STATEEMAIL__S2_CrestronTester_v2_STATEEMAIL_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, STATEEMAIL__STATEEMAIL );
};



/*
* DIGITAL_INPUT
*/

#define __S2_CrestronTester_v2_QUESTION_DIG_INPUT 0
#define __S2_CrestronTester_v2_QUESTION_ARRAY_LENGTH 16

/*
* ANALOG_INPUT
*/


#define __S2_CrestronTester_v2_RESULT$_BUFFER_INPUT 0
#define __S2_CrestronTester_v2_RESULT$_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __RESULT$, __S2_CrestronTester_v2_RESULT$_BUFFER_MAX_LEN );
#define __S2_CrestronTester_v2_FROMCONSOLE$_BUFFER_INPUT 1
#define __S2_CrestronTester_v2_FROMCONSOLE$_BUFFER_MAX_LEN 4000
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __FROMCONSOLE$, __S2_CrestronTester_v2_FROMCONSOLE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_CrestronTester_v2_READY_DIG_OUTPUT 0
#define __S2_CrestronTester_v2_WRITECF0_DIG_OUTPUT 1

#define __S2_CrestronTester_v2_QUESTIONDONE_DIG_OUTPUT 2
#define __S2_CrestronTester_v2_QUESTIONDONE_ARRAY_LENGTH 16

/*
* ANALOG_OUTPUT
*/

#define __S2_CrestronTester_v2_TOCONSOLE$_STRING_OUTPUT 0
#define __S2_CrestronTester_v2_TOCF0$_STRING_OUTPUT 1




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
#define __S2_CrestronTester_v2_TEMP$_STRING_MAX_LEN 4000
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __TEMP$, __S2_CrestronTester_v2_TEMP$_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_TRASH$_STRING_MAX_LEN 4000
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __TRASH$, __S2_CrestronTester_v2_TRASH$_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_STATE$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __STATE$, __S2_CrestronTester_v2_STATE$_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_CC_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __CC, __S2_CrestronTester_v2_CC_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_AREACODE$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __AREACODE$, __S2_CrestronTester_v2_AREACODE$_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_TEMPFAIL$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __TEMPFAIL$, __S2_CrestronTester_v2_TEMPFAIL$_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_FINALMESSAGE_STRING_MAX_LEN 4000
CREATE_STRING_STRUCT( S2_CrestronTester_v2, __FINALMESSAGE, __S2_CrestronTester_v2_FINALMESSAGE_STRING_MAX_LEN );
#define __S2_CrestronTester_v2_Q16ARRAY_ARRAY_NUM_ELEMS 10
#define __S2_CrestronTester_v2_Q16ARRAY_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_CrestronTester_v2, __Q16ARRAY, __S2_CrestronTester_v2_Q16ARRAY_ARRAY_NUM_ELEMS, __S2_CrestronTester_v2_Q16ARRAY_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/
#define __S2_CrestronTester_v2_STATECOMPARE_STRUCT_MAX_LEN 53
CREATE_STRUCTURE_ARRAY( S2_CrestronTester_v2, __STATECOMPARE, STATEEMAIL, __S2_CrestronTester_v2_STATECOMPARE_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_CrestronTester_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __QUESTION );
   DECLARE_IO_ARRAY( __QUESTIONDONE );
   unsigned short __TXR;
   unsigned short __TXI;
   unsigned short __TXF;
   unsigned short __RXR;
   unsigned short __RXI;
   unsigned short __RXF;
   unsigned short __Q;
   unsigned short __PROCESSING;
   unsigned short __UPTIMESTART;
   unsigned short __UPTIMESTOP;
   unsigned short __UPFINAL;
   unsigned short __EMAILTEST;
   unsigned short __RELAY7;
   unsigned short __RELAY8;
   unsigned short __Q2S1;
   unsigned short __Q2S2;
   unsigned short __Q2S3;
   unsigned short __Q2S4;
   unsigned short __Q3S1;
   unsigned short __Q3S2;
   unsigned short __Q4S1;
   unsigned short __Q4S2;
   unsigned short __Q4S3;
   unsigned short __Q5S1;
   unsigned short __Q5S2;
   unsigned short __Q5S3;
   unsigned short __Q6S1;
   unsigned short __Q6S2;
   unsigned short __Q6S3;
   unsigned short __Q7S1;
   unsigned short __Q7S2;
   unsigned short __Q8S1;
   unsigned short __Q8S2;
   unsigned short __Q9S1;
   unsigned short __Q9S2;
   unsigned short __Q9S3;
   unsigned short __Q9S4;
   unsigned short __Q10S1;
   unsigned short __Q10S2;
   unsigned short __Q10UPOK;
   unsigned short __Q11S1;
   unsigned short __Q11S2;
   unsigned short __Q12MUTE;
   unsigned short __Q12COUNT;
   unsigned short __Q13S1;
   unsigned short __Q13S2;
   unsigned short __Q13S3;
   unsigned short __Q13S4;
   unsigned short __Q14S1;
   unsigned short __DAYNUM;
   unsigned short __YEARNUM;
   unsigned short __MONTHNUM;
   unsigned short __Q16STEP;
   unsigned short __CTR;
   unsigned short __Q16PASS;
   unsigned short __I;
   unsigned short __STATEMATCH;
   unsigned short __JOIN40;
   unsigned short __JOIN41;
   unsigned short __JOIN42;
   unsigned short __DOWNTIMESTART;
   unsigned short __DOWNTIMESTOP;
   unsigned short __DOWNFINAL;
   unsigned short __FAILCASE;
   unsigned short __TESTING;
   short __UPMATH;
   short __Q13STARTTIME;
   short __Q13STOPTIME;
   short __Q13MATH;
   short __DOWNMATH;
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __TRASH$ );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __STATE$ );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __CC );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __AREACODE$ );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __TEMPFAIL$ );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __FINALMESSAGE );
   DECLARE_STRING_ARRAY( S2_CrestronTester_v2, __Q16ARRAY );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __RESULT$ );
   DECLARE_STRING_STRUCT( S2_CrestronTester_v2, __FROMCONSOLE$ );
   DECLARE_STRUCT_ARRAY( S2_CrestronTester_v2, __STATECOMPARE );
};

START_NVRAM_VAR_STRUCT( S2_CrestronTester_v2 )
{
};

DEFINE_WAITEVENT( S2_CrestronTester_v2, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_CrestronTester_v2, __SPLS_TMPVAR__WAITLABEL_1__ );
DEFINE_WAITEVENT( S2_CrestronTester_v2, __SPLS_TMPVAR__WAITLABEL_2__ );
DEFINE_WAITEVENT( S2_CrestronTester_v2, __SPLS_TMPVAR__WAITLABEL_3__ );
DEFINE_WAITEVENT( S2_CrestronTester_v2, __SPLS_TMPVAR__WAITLABEL_4__ );


#endif //__S2_CRESTRONTESTER_V2_H__

