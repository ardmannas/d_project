#include "lexer.h"
#include "idStream.h"

using namespace std;

int main(const int argc, const char * argv[]) {
	locale::global(locale("Russian"));
	idStream program(argc, argv);
	cout << program.fileName << '|' << program.isFile << endl;
	system("pause");
}