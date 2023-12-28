#ifndef __S2_AUTODISCOVERY_V3_H__
#define __S2_AUTODISCOVERY_V3_H__



/*
* STRUCTURE S2_Autodiscovery_v3__INFO
*/
#define INFO__S2_Autodiscovery_v3_IPADDRESS$_STRING_MAX_LEN 15
#define INFO__S2_Autodiscovery_v3_IPID$_STRING_MAX_LEN 2
#define INFO__S2_Autodiscovery_v3_HOSTNAME$_STRING_MAX_LEN 128
#define INFO__S2_Autodiscovery_v3_FIRMWAREID$_STRING_MAX_LEN 128
START_STRUCTURE_DEFINITION( S2_Autodiscovery_v3, INFO )
{
   CREATE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__IPADDRESS$, INFO__S2_Autodiscovery_v3_IPADDRESS$_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__IPADDRESS$ );
   CREATE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__IPID$, INFO__S2_Autodiscovery_v3_IPID$_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__IPID$ );
   CREATE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__HOSTNAME$, INFO__S2_Autodiscovery_v3_HOSTNAME$_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__HOSTNAME$ );
   CREATE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__FIRMWAREID$, INFO__S2_Autodiscovery_v3_FIRMWAREID$_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, INFO__FIRMWAREID$ );
};


/*
* Constructor and Destructor
*/
int S2_Autodiscovery_v3_INFO_Constructor ( START_STRUCTURE_DEFINITION( S2_Autodiscovery_v3, INFO ) * me, int nVerbose );
int S2_Autodiscovery_v3_INFO_Destructor ( START_STRUCTURE_DEFINITION( S2_Autodiscovery_v3, INFO ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_Autodiscovery_v3_ENABLE_DIG_INPUT 0
#define __S2_Autodiscovery_v3_DISCOVER_DIG_INPUT 1
#define __S2_Autodiscovery_v3_ABORT_DIG_INPUT 2
#define __S2_Autodiscovery_v3_SETIPOD_DIG_INPUT 3
#define __S2_Autodiscovery_v3_SETAAS_DIG_INPUT 4


/*
* ANALOG_INPUT
*/

#define __S2_Autodiscovery_v3_NEXTID$_STRING_INPUT 0
#define __S2_Autodiscovery_v3_NEXTID$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Autodiscovery_v3, __NEXTID$, __S2_Autodiscovery_v3_NEXTID$_STRING_MAX_LEN );
#define __S2_Autodiscovery_v3_PROMPT$_STRING_INPUT 1
#define __S2_Autodiscovery_v3_PROMPT$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Autodiscovery_v3, __PROMPT$, __S2_Autodiscovery_v3_PROMPT$_STRING_MAX_LEN );
#define __S2_Autodiscovery_v3_CONSOLERX$_STRING_INPUT 2
#define __S2_Autodiscovery_v3_CONSOLERX$_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Autodiscovery_v3, __CONSOLERX$, __S2_Autodiscovery_v3_CONSOLERX$_STRING_MAX_LEN );
#define __S2_Autodiscovery_v3_MATCH$_STRING_INPUT 3
#define __S2_Autodiscovery_v3_MATCH$_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Autodiscovery_v3, __MATCH$, __S2_Autodiscovery_v3_MATCH$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Autodiscovery_v3_FOUND_DIG_OUTPUT 0
#define __S2_Autodiscovery_v3_NOTFOUND_DIG_OUTPUT 1
#define __S2_Autodiscovery_v3_IDSET_DIG_OUTPUT 2
#define __S2_Autodiscovery_v3_IDFAILNONE_DIG_OUTPUT 3
#define __S2_Autodiscovery_v3_IDFAILMULTIPLE_DIG_OUTPUT 4
#define __S2_Autodiscovery_v3_DISCOVERYCOMPLETE_DIG_OUTPUT 5


/*
* ANALOG_OUTPUT
*/
#define __S2_Autodiscovery_v3_AASZONESFOUND_ANALOG_OUTPUT 0

#define __S2_Autodiscovery_v3_CONSOLETX$_STRING_OUTPUT 1


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
#define __S2_Autodiscovery_v3_DEVICEINFO_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_Autodiscovery_v3, __DEVICEINFO, INFO, __S2_Autodiscovery_v3_DEVICEINFO_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_Autodiscovery_v3 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __COMMAND;
   unsigned short __AUTODISCOVERYCOUNTER;
   unsigned short __SEMAPHORE;
   unsigned short __TOTALENTRIES;
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, __NEXTID$ );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, __PROMPT$ );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, __CONSOLERX$ );
   DECLARE_STRING_STRUCT( S2_Autodiscovery_v3, __MATCH$ );
   DECLARE_STRUCT_ARRAY( S2_Autodiscovery_v3, __DEVICEINFO );
};

START_NVRAM_VAR_STRUCT( S2_Autodiscovery_v3 )
{
};



#endif //__S2_AUTODISCOVERY_V3_H__

