#include "Karen.h"

int main(int argc, char **argv){
	if (argc != 2)
		exit(1);

	Karen ver1;
	ver1.complain(argv[1]);
}