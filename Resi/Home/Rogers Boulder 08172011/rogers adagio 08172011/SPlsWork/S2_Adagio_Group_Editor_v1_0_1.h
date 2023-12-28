#ifndef __S2_ADAGIO_GROUP_EDITOR_V1_0_1_H__
#define __S2_ADAGIO_GROUP_EDITOR_V1_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_Adagio_Group_Editor_v1_0_1_ROOM_DIG_INPUT 0
#define __S2_Adagio_Group_Editor_v1_0_1_ROOM_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/
#define __S2_Adagio_Group_Editor_v1_0_1_MAPINLOW_ANALOG_INPUT 0
#define __S2_Adagio_Group_Editor_v1_0_1_MAPINHIGH_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/

#define __S2_Adagio_Group_Editor_v1_0_1_ROOMFB_DIG_OUTPUT 0
#define __S2_Adagio_Group_Editor_v1_0_1_ROOMFB_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/
#define __S2_Adagio_Group_Editor_v1_0_1_MAPOUTLOW_ANALOG_OUTPUT 0
#define __S2_Adagio_Group_Editor_v1_0_1_MAPOUTHIGH_ANALOG_OUTPUT 1



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

START_GLOBAL_VAR_STRUCT( S2_Adagio_Group_Editor_v1_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ROOM );
   DECLARE_IO_ARRAY( __ROOMFB );
   unsigned short __CURRENTMAPLOW;
   unsigned short __CURRENTMAPHIGH;
};

START_NVRAM_VAR_STRUCT( S2_Adagio_Group_Editor_v1_0_1 )
{
};



#endif //__S2_ADAGIO_GROUP_EDITOR_V1_0_1_H__

