#include "lexer.h"
#include "idStream.h"
#include "idToken.h"
#include "idTokenNum.h"

using namespace std;

int main(const int argc, const char * argv[]) {
	locale::global( locale( "Russian" ) );
	idStream program( argc, argv );
	idToken * abc = new idTokenNum( tokenType_t::NAT_NUMBER, "1235000000" );
	//cout << abc->GetType();
	//cout << abc.GetType();
	//abc.get();
	//delete abc;
	//bp->~idTokenNum();
	system( "pause" );
}