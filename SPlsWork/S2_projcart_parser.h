#ifndef __S2_PROJCART_PARSER_H__
#define __S2_PROJCART_PARSER_H__


#include "S2_DateDiffLib.h"


/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_projcart_parser_ENABLE_SERVER_DIG_INPUT 0

#define __S2_projcart_parser_PROJ_TURNON_DIG_INPUT 1
#define __S2_projcart_parser_PROJ_TURNON_ARRAY_LENGTH 100
#define __S2_projcart_parser_PROJ_TURNOFF_DIG_INPUT 101
#define __S2_projcart_parser_PROJ_TURNOFF_ARRAY_LENGTH 100
#define __S2_projcart_parser_DISCONNECTED_CHECK_DIG_INPUT 201
#define __S2_projcart_parser_DISCONNECTED_CHECK_ARRAY_LENGTH 100

/*
* ANALOG_INPUT
*/
#define __S2_projcart_parser_RESTART_INTERVAL_ANALOG_INPUT 0




/*
* DIGITAL_OUTPUT
*/

#define __S2_projcart_parser_POWER_STATE_DIG_OUTPUT 0
#define __S2_projcart_parser_POWER_STATE_ARRAY_LENGTH 100
#define __S2_projcart_parser_SYSTEM_POWER_DIG_OUTPUT 100
#define __S2_projcart_parser_SYSTEM_POWER_ARRAY_LENGTH 100

/*
* ANALOG_OUTPUT
*/
#define __S2_projcart_parser_SERVER_STATUS_ANALOG_OUTPUT 0
#define __S2_projcart_parser_LAST_CART_ANALOG_OUTPUT 1


#define __S2_projcart_parser_LAMP_HOURS_ANALOG_OUTPUT 402
#define __S2_projcart_parser_LAMP_HOURS_ARRAY_LENGTH 100
#define __S2_projcart_parser_FILTER_HOURS_ANALOG_OUTPUT 502
#define __S2_projcart_parser_FILTER_HOURS_ARRAY_LENGTH 100
#define __S2_projcart_parser_ASSET_NUMBER_STRING_OUTPUT 2
#define __S2_projcart_parser_ASSET_NUMBER_ARRAY_LENGTH 100
#define __S2_projcart_parser_ERROR_TEXT_STRING_OUTPUT 102
#define __S2_projcart_parser_ERROR_TEXT_ARRAY_LENGTH 100
#define __S2_projcart_parser_PROJECTOR_TYPE_STRING_OUTPUT 202
#define __S2_projcart_parser_PROJECTOR_TYPE_ARRAY_LENGTH 100
#define __S2_projcart_parser_LAST_IP_STRING_OUTPUT 302
#define __S2_projcart_parser_LAST_IP_ARRAY_LENGTH 100
#define __S2_projcart_parser_LAST_CHECK_IN_STRING_OUTPUT 602
#define __S2_projcart_parser_LAST_CHECK_IN_ARRAY_LENGTH 100
#define __S2_projcart_parser_DURATION_ONLINE_STRING_OUTPUT 702
#define __S2_projcart_parser_DURATION_ONLINE_ARRAY_LENGTH 100

/*
* Direct Socket Variables
*/

#define __S2_projcart_parser_SERVER_SOCKET 1
#define __S2_projcart_parser_SERVER_STRING_MAX_LEN 1024
START_SOCKET_DEFINITION( S2_projcart_parser, __SERVER )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_projcart_parser, SocketRxBuf, __S2_projcart_parser_SERVER_STRING_MAX_LEN );
};



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
CREATE_INTARRAY1D( S2_projcart_parser, __TURNON, 100 );;
CREATE_INTARRAY1D( S2_projcart_parser, __TURNOFF, 100 );;
CREATE_INTARRAY1D( S2_projcart_parser, __TIMEOUT, 100 );;


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
#define __S2_projcart_parser_SERVERIP_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_projcart_parser, __SERVERIP, __S2_projcart_parser_SERVERIP_STRING_MAX_LEN );
#define __S2_projcart_parser_HANDSHAKEDATE_ARRAY_NUM_ELEMS 100
#define __S2_projcart_parser_HANDSHAKEDATE_ARRAY_NUM_CHARS 10
CREATE_STRING_ARRAY( S2_projcart_parser, __HANDSHAKEDATE, __S2_projcart_parser_HANDSHAKEDATE_ARRAY_NUM_ELEMS, __S2_projcart_parser_HANDSHAKEDATE_ARRAY_NUM_CHARS );
#define __S2_projcart_parser_HANDSHAKETIME_ARRAY_NUM_ELEMS 100
#define __S2_projcart_parser_HANDSHAKETIME_ARRAY_NUM_CHARS 8
CREATE_STRING_ARRAY( S2_projcart_parser, __HANDSHAKETIME, __S2_projcart_parser_HANDSHAKETIME_ARRAY_NUM_ELEMS, __S2_projcart_parser_HANDSHAKETIME_ARRAY_NUM_CHARS );
#define __S2_projcart_parser_LASTCHECKINDATE_ARRAY_NUM_ELEMS 100
#define __S2_projcart_parser_LASTCHECKINDATE_ARRAY_NUM_CHARS 10
CREATE_STRING_ARRAY( S2_projcart_parser, __LASTCHECKINDATE, __S2_projcart_parser_LASTCHECKINDATE_ARRAY_NUM_ELEMS, __S2_projcart_parser_LASTCHECKINDATE_ARRAY_NUM_CHARS );
#define __S2_projcart_parser_LASTCHECKINTIME_ARRAY_NUM_ELEMS 100
#define __S2_projcart_parser_LASTCHECKINTIME_ARRAY_NUM_CHARS 8
CREATE_STRING_ARRAY( S2_projcart_parser, __LASTCHECKINTIME, __S2_projcart_parser_LASTCHECKINTIME_ARRAY_NUM_ELEMS, __S2_projcart_parser_LASTCHECKINTIME_ARRAY_NUM_CHARS );
#define __S2_projcart_parser_IPADDRESS_ARRAY_NUM_ELEMS 100
#define __S2_projcart_parser_IPADDRESS_ARRAY_NUM_CHARS 16
CREATE_STRING_ARRAY( S2_projcart_parser, __IPADDRESS, __S2_projcart_parser_IPADDRESS_ARRAY_NUM_ELEMS, __S2_projcart_parser_IPADDRESS_ARRAY_NUM_CHARS );
#define __S2_projcart_parser_DURATIONONLINE_ARRAY_NUM_ELEMS 100
#define __S2_projcart_parser_DURATIONONLINE_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_projcart_parser, __DURATIONONLINE, __S2_projcart_parser_DURATIONONLINE_ARRAY_NUM_ELEMS, __S2_projcart_parser_DURATIONONLINE_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_projcart_parser )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __PROJ_TURNON );
   DECLARE_IO_ARRAY( __PROJ_TURNOFF );
   DECLARE_IO_ARRAY( __DISCONNECTED_CHECK );
   DECLARE_IO_ARRAY( __POWER_STATE );
   DECLARE_IO_ARRAY( __SYSTEM_POWER );
   DECLARE_IO_ARRAY( __LAMP_HOURS );
   DECLARE_IO_ARRAY( __FILTER_HOURS );
   DECLARE_IO_ARRAY( __ASSET_NUMBER );
   DECLARE_IO_ARRAY( __ERROR_TEXT );
   DECLARE_IO_ARRAY( __PROJECTOR_TYPE );
   DECLARE_IO_ARRAY( __LAST_IP );
   DECLARE_IO_ARRAY( __LAST_CHECK_IN );
   DECLARE_IO_ARRAY( __DURATION_ONLINE );
   unsigned short __SERVERPORT;
   unsigned short __CARTIDENT;
   DECLARE_INTARRAY( S2_projcart_parser, __TURNON );
   DECLARE_INTARRAY( S2_projcart_parser, __TURNOFF );
   DECLARE_INTARRAY( S2_projcart_parser, __TIMEOUT );
   DECLARE_STRING_STRUCT( S2_projcart_parser, __SERVERIP );
   DECLARE_SOCKET( S2_projcart_parser, __SERVER );
};

START_NVRAM_VAR_STRUCT( S2_projcart_parser )
{
   DECLARE_STRING_ARRAY( S2_projcart_parser, __HANDSHAKEDATE );
   DECLARE_STRING_ARRAY( S2_projcart_parser, __HANDSHAKETIME );
   DECLARE_STRING_ARRAY( S2_projcart_parser, __LASTCHECKINDATE );
   DECLARE_STRING_ARRAY( S2_projcart_parser, __LASTCHECKINTIME );
   DECLARE_STRING_ARRAY( S2_projcart_parser, __IPADDRESS );
   DECLARE_STRING_ARRAY( S2_projcart_parser, __DURATIONONLINE );
};



#endif //__S2_PROJCART_PARSER_H__

