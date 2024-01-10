#ifndef __S2_MXP_PARSER___DIRECTOR__REV0_00_0__H__
#define __S2_MXP_PARSER___DIRECTOR__REV0_00_0__H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/


#define __S2_MXP_Parser___Director__Rev0_00_0__CODECBUFFER$_BUFFER_INPUT 0
#define __S2_MXP_Parser___Director__Rev0_00_0__CODECBUFFER$_BUFFER_MAX_LEN 4096
CREATE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CODECBUFFER$, __S2_MXP_Parser___Director__Rev0_00_0__CODECBUFFER$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_MXP_Parser___Director__Rev0_00_0__XACLIINFO$_STRING_OUTPUT 0
#define __S2_MXP_Parser___Director__Rev0_00_0__CODECINFO$_STRING_OUTPUT 1


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
#define __S2_MXP_Parser___Director__Rev0_00_0__CTEMPBUFFER$_STRING_MAX_LEN 4096
CREATE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CTEMPBUFFER$, __S2_MXP_Parser___Director__Rev0_00_0__CTEMPBUFFER$_STRING_MAX_LEN );
#define __S2_MXP_Parser___Director__Rev0_00_0__CTEMP$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CTEMP$, __S2_MXP_Parser___Director__Rev0_00_0__CTEMP$_STRING_MAX_LEN );
#define __S2_MXP_Parser___Director__Rev0_00_0__CPARENT$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CPARENT$, __S2_MXP_Parser___Director__Rev0_00_0__CPARENT$_STRING_MAX_LEN );
#define __S2_MXP_Parser___Director__Rev0_00_0__CINFO$_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CINFO$, __S2_MXP_Parser___Director__Rev0_00_0__CINFO$_STRING_MAX_LEN );
#define __S2_MXP_Parser___Director__Rev0_00_0__CXACLIINFOBUFFER$_STRING_MAX_LEN 10000
CREATE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CXACLIINFOBUFFER$, __S2_MXP_Parser___Director__Rev0_00_0__CXACLIINFOBUFFER$_STRING_MAX_LEN );
#define __S2_MXP_Parser___Director__Rev0_00_0__CELEMENTS_ARRAY_NUM_ELEMS 100
#define __S2_MXP_Parser___Director__Rev0_00_0__CELEMENTS_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_MXP_Parser___Director__Rev0_00_0_, __CELEMENTS, __S2_MXP_Parser___Director__Rev0_00_0__CELEMENTS_ARRAY_NUM_ELEMS, __S2_MXP_Parser___Director__Rev0_00_0__CELEMENTS_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_ )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __NBUSY;
   unsigned short __NPARSE;
   unsigned short __NMARKER;
   unsigned short __NVALUE;
   unsigned short __NCOUNT;
   unsigned short __NCOUNT1;
   DECLARE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CTEMPBUFFER$ );
   DECLARE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CTEMP$ );
   DECLARE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CPARENT$ );
   DECLARE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CINFO$ );
   DECLARE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CXACLIINFOBUFFER$ );
   DECLARE_STRING_ARRAY( S2_MXP_Parser___Director__Rev0_00_0_, __CELEMENTS );
   DECLARE_STRING_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_, __CODECBUFFER$ );
};

START_NVRAM_VAR_STRUCT( S2_MXP_Parser___Director__Rev0_00_0_ )
{
};



#endif //__S2_MXP_PARSER___DIRECTOR__REV0_00_0__H__

