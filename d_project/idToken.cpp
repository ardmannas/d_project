#include "lexer.h"
#include "idToken.h"


using namespace std;

idToken::idToken( tokenType_t type, const string str ): tokenType( type ), text( str ) {}

string idToken::GetText() { 
	return text;
}

tokenType_t idToken::GetTokenType() {
	return tokenType;
}

void idToken::Evaluate() {}