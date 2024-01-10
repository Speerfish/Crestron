#ifndef __S2_XACLI_CONTROL__REV_0_00_2__H__
#define __S2_XACLI_CONTROL__REV_0_00_2__H__



/*
* STRUCTURE S2_xacli_Control__Rev_0_00_2___SMCUSITELIST
*/
#define SMCUSITELIST__S2_xacli_Control__Rev_0_00_2__STRSITENAME_STRING_MAX_LEN 50
START_STRUCTURE_DEFINITION( S2_xacli_Control__Rev_0_00_2_, SMCUSITELIST )
{
   CREATE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, SMCUSITELIST__STRSITENAME, SMCUSITELIST__S2_xacli_Control__Rev_0_00_2__STRSITENAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, SMCUSITELIST__STRSITENAME );
   unsigned short SMCUSITELIST__NMCUID;
   unsigned short SMCUSITELIST__NTERMINALID;
   unsigned short SMCUSITELIST__NCALLREF;
};


/*
* Constructor and Destructor
*/
int S2_xacli_Control__Rev_0_00_2__SMCUSITELIST_Constructor ( START_STRUCTURE_DEFINITION( S2_xacli_Control__Rev_0_00_2_, SMCUSITELIST ) * me, int nVerbose );
int S2_xacli_Control__Rev_0_00_2__SMCUSITELIST_Destructor ( START_STRUCTURE_DEFINITION( S2_xacli_Control__Rev_0_00_2_, SMCUSITELIST ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_xacli_Control__Rev_0_00_2__MCU_DROP_SITE_GO_DIG_INPUT 0


/*
* ANALOG_INPUT
*/
#define __S2_xacli_Control__Rev_0_00_2__MCU_DROP_SITE_NUMBER_ANALOG_INPUT 0
#define __S2_xacli_Control__Rev_0_00_2__CURRENTMCUSCREEN_ANALOG_INPUT 1


#define __S2_xacli_Control__Rev_0_00_2__XACLIRX$_BUFFER_INPUT 2
#define __S2_xacli_Control__Rev_0_00_2__XACLIRX$_BUFFER_MAX_LEN 2096
CREATE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, __XACLIRX$, __S2_xacli_Control__Rev_0_00_2__XACLIRX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_xacli_Control__Rev_0_00_2__FLOOR_OFF_DIG_OUTPUT 0
#define __S2_xacli_Control__Rev_0_00_2__FLOOR_ON_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_xacli_Control__Rev_0_00_2__FECC_SOURCE_ANALOG_OUTPUT 0
#define __S2_xacli_Control__Rev_0_00_2__MCU_STATE_ANALOG_OUTPUT 1
#define __S2_xacli_Control__Rev_0_00_2__ONAIR_ANALOG_OUTPUT 2

#define __S2_xacli_Control__Rev_0_00_2__ONAIR_NAME_STRING_OUTPUT 3
#define __S2_xacli_Control__Rev_0_00_2__CODECTX$_STRING_OUTPUT 4


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
CREATE_INTARRAY1D( S2_xacli_Control__Rev_0_00_2_, __NDUOLOCAL, 11 );;
CREATE_INTARRAY1D( S2_xacli_Control__Rev_0_00_2_, __NDUOREMOTE, 11 );;


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
#define __S2_xacli_Control__Rev_0_00_2__TEMPSTRING$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, __TEMPSTRING$, __S2_xacli_Control__Rev_0_00_2__TEMPSTRING$_STRING_MAX_LEN );
#define __S2_xacli_Control__Rev_0_00_2__DUMP$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, __DUMP$, __S2_xacli_Control__Rev_0_00_2__DUMP$_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_xacli_Control__Rev_0_00_2__MCUSITELIST_STRUCT_MAX_LEN 100
CREATE_STRUCTURE_ARRAY( S2_xacli_Control__Rev_0_00_2_, __MCUSITELIST, SMCUSITELIST, __S2_xacli_Control__Rev_0_00_2__MCUSITELIST_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_xacli_Control__Rev_0_00_2_ )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __NBUSY;
   unsigned short __NMCUSTATE;
   unsigned short __NMCUONAIRID;
   unsigned short __NMCUONAIRTERMINAL;
   unsigned short __NTOTALSITES;
   unsigned short __NMCUID;
   unsigned short __NSITENUMBER;
   unsigned short __NSELFID;
   unsigned short __NCALLID;
   unsigned short __NLOCALDUOACTIVE;
   unsigned short __NREMOTEDUOACTIVE;
   unsigned short __NCOUNT;
   unsigned short __NMARKER;
   unsigned short __NMARKER1;
   unsigned short __NSITE;
   DECLARE_INTARRAY( S2_xacli_Control__Rev_0_00_2_, __NDUOLOCAL );
   DECLARE_INTARRAY( S2_xacli_Control__Rev_0_00_2_, __NDUOREMOTE );
   DECLARE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, __DUMP$ );
   DECLARE_STRING_STRUCT( S2_xacli_Control__Rev_0_00_2_, __XACLIRX$ );
   DECLARE_STRUCT_ARRAY( S2_xacli_Control__Rev_0_00_2_, __MCUSITELIST );
};

START_NVRAM_VAR_STRUCT( S2_xacli_Control__Rev_0_00_2_ )
{
};



#endif //__S2_XACLI_CONTROL__REV_0_00_2__H__

