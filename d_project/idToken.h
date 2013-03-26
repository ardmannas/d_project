//#ifndef _idToken_
//#define _idToken_
#pragma once
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
 protected:
	 tokenType_t tokenType;
	 string text;
 public:
	 idToken( tokenType_t type, const string str );
	 virtual ~idToken() {};
	 tokenType_t GetTokenType();
	 string GetText();
	 virtual void Evaluate();
 };

//#endif