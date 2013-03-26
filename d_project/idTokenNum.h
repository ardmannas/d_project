#pragma once
#include "idToken.h"
class idTokenNum: public idToken {
protected:
	long long evalNum;
public:
	idTokenNum( tokenType_t type, const string str );
	~idTokenNum();
	void Evaluate();
};

