#include <iostream>
#include <stdlib.h>
#undef NDEBUG
#include <cassert>

int main(int argc, char** argv) {

	std::cout << "Hello World !" << std::endl;

	int toto;
	//scanf("%d", &toto);

	int *p = 0;
	//*p = 2;

	assert(false);
	
	return 0;
}