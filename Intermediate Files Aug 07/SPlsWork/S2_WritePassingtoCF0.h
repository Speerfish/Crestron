#ifndef __S2_WRITEPASSINGTOCF0_H__
#define __S2_WRITEPASSINGTOCF0_H__





/*
* DIGITAL_INPUT
*/
#define __S2_WritePassingtoCF0_WRITE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_WritePassingtoCF0_PASSDATA$_STRING_INPUT 0
#define __S2_WritePassingtoCF0_PASSDATA$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_WritePassingtoCF0, __PASSDATA$, __S2_WritePassingtoCF0_PASSDATA$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_WritePassingtoCF0_MESSAGE$_STRING_OUTPUT 0
#define __S2_WritePassingtoCF0_TOCONSOLE$_STRING_OUTPUT 1




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
#define __S2_WritePassingtoCF0_TEMP$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_WritePassingtoCF0, __TEMP$, __S2_WritePassingtoCF0_TEMP$_STRING_MAX_LEN );
#define __S2_WritePassingtoCF0_HOLD$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_WritePassingtoCF0, __HOLD$, __S2_WritePassingtoCF0_HOLD$_STRING_MAX_LEN );
#define __S2_WritePassingtoCF0_FILENAME$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_WritePassingtoCF0, __FILENAME$, __S2_WritePassingtoCF0_FILENAME$_STRING_MAX_LEN );
#define __S2_WritePassingtoCF0_COUNT$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_WritePassingtoCF0, __COUNT$, __S2_WritePassingtoCF0_COUNT$_STRING_MAX_LEN );
#define __S2_WritePassingtoCF0_STUDENT$_STRING_MAX_LEN 400
CREATE_STRING_STRUCT( S2_WritePassingtoCF0, __STUDENT$, __S2_WritePassingtoCF0_STUDENT$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_WritePassingtoCF0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_WritePassingtoCF0, __PASSDATA$ );
};

START_NVRAM_VAR_STRUCT( S2_WritePassingtoCF0 )
{
   DECLARE_STRING_STRUCT( S2_WritePassingtoCF0, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_WritePassingtoCF0, __HOLD$ );
   DECLARE_STRING_STRUCT( S2_WritePassingtoCF0, __FILENAME$ );
   DECLARE_STRING_STRUCT( S2_WritePassingtoCF0, __COUNT$ );
   DECLARE_STRING_STRUCT( S2_WritePassingtoCF0, __STUDENT$ );
   unsigned short __PASSCOUNT;
   unsigned short __FILECOUNT;
   short __NFILEHANDLE;
   short __NREADHANDLE;
   short __NWRITEHANDLE;
};



#endif //__S2_WRITEPASSINGTOCF0_H__

