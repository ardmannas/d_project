#pragma once

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
private:
	bool isFile;
	string fileName;
public:
	idStream(const int argc, const char * argv[]);
	bool GetMode() { return this->isFile; }
	string GetFilename() { return this->fileName; }
	void InterpreterMode( const bool type ) { this->isFile = !type; }
};