#ifndef __S2_SAMSUNG_400P___460P_CHECKSUM_H__
#define __S2_SAMSUNG_400P___460P_CHECKSUM_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_Samsung_400P___460P_Checksum_FROM_SMPL$_STRING_INPUT 0
#define __S2_Samsung_400P___460P_Checksum_FROM_SMPL$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Samsung_400P___460P_Checksum, __FROM_SMPL$, __S2_Samsung_400P___460P_Checksum_FROM_SMPL$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Samsung_400P___460P_Checksum_TO_DEVICE$_STRING_OUTPUT 0


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
#define __S2_Samsung_400P___460P_Checksum_TEMP$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Samsung_400P___460P_Checksum, __TEMP$, __S2_Samsung_400P___460P_Checksum_TEMP$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Samsung_400P___460P_Checksum )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Samsung_400P___460P_Checksum, __FROM_SMPL$ );
};

START_NVRAM_VAR_STRUCT( S2_Samsung_400P___460P_Checksum )
{
   DECLARE_STRING_STRUCT( S2_Samsung_400P___460P_Checksum, __TEMP$ );
   unsigned short __SEMAPHORE;
   unsigned short __I;
   unsigned short __ILENGTH;
   unsigned short __CHECKSUM;
};



#endif //__S2_SAMSUNG_400P___460P_CHECKSUM_H__

