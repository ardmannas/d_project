#ifndef _idStream_
#define _idStream_

#include "lexer.h"

using namespace std;

/*
===============================================================================

	File or interpreter mode.
	Read first two parameters and if it is "-t" and name of existing file then
	get it name.

===============================================================================
*/
class idStream {
public:
	bool isFile;
	string fileName;
	idStream(const int argc, const char * argv[]);
};

#endif