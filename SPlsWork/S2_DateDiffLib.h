#ifndef __S2_DATEDIFFLIB_H__
#define __S2_DATEDIFFLIB_H__


#include "S2_DateDiffLib.h"



/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/



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

START_GLOBAL_VAR_STRUCT( S2_DateDiffLib )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_DateDiffLib )
{
};


unsigned long S2_DateDiffLib__CHECK_FOR_LEAPYEARS ( long __STARTYEAR , long __ENDYEAR ) ;
unsigned short S2_DateDiffLib__DAYS_IN_MONTH ( unsigned long __MONTHNUM ) ;
unsigned long S2_DateDiffLib__DAYS_FROM_ZERO ( unsigned long __I_DAY , unsigned long __I_MON , long __I_YR , unsigned short __BCE ) ;
unsigned short S2_DateDiffLib__CHECK_SYNTAX ( unsigned long __I_DAY , unsigned long __I_MON , unsigned long __I_YR ) ;
struct StringHdr_s* S2_DateDiffLib__GETDATEDIFFLONG ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __STARTDATE , struct StringHdr_s* __ENDDATE , struct StringHdr_s* __STARTTIME , struct StringHdr_s* __ENDTIME , unsigned short __STARTISBCE , unsigned short __ENDISBCE ) ;
struct StringHdr_s* S2_DateDiffLib__GETDATEDIFF ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __STARTDATE , struct StringHdr_s* __ENDDATE , struct StringHdr_s* __STARTTIME , struct StringHdr_s* __ENDTIME ) ;
struct StringHdr_s* S2_DateDiffLib__GETDATEDIFFNOW ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __STARTDATE , struct StringHdr_s* __STARTTIME ) ;

#endif //__S2_PROJCART_PARSER_H__

