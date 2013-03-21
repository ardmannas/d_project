#ifndef _idToken_
#define _idToken_

#include "lexer.h"
 using namespace std;

 enum tokenType_t {
	IDENTIFIER,
	ASSIGNMENT,
	OPEN_PARENTHESIS,
	CLOSE_PERANTHESIS,
	SEPARATOR,
	NEXTOP,
	NAT_NUMBER,
	REAL_NUMBER,
	STRING,
	COMMENT,
	SPACE,
 };

 /*
===============================================================================

	This class store token type and value if necessary.
	*some tokens must have additional value.

===============================================================================
*/
 class idToken {
 public:
	 unsigned short int tokenType;

 };

#endif