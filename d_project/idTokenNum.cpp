#include "idTokenNum.h"


idTokenNum::idTokenNum( tokenType_t type, const string str ): idToken( type, str ) {}

idTokenNum::~idTokenNum(){}

void idTokenNum::Evaluate() {
	evalNum = atol(text.c_str());
};
