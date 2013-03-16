#include "idStream.h"

idStream::idStream(const int argc, const char * argv[]): isFile(true) {
	if ( ( argc >= 3 ) && ( argv[ 1 ][ 1 ] == 'f' ) ) {
		fstream program( argv[ 2 ] );
		if ( !program.is_open() ) {
			this->isFile = false;
			delete program;
		}
		this->fileName = argv[ 2 ];
		program.close();
	}
	this->isFile = false;
}