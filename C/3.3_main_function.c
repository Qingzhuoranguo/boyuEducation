#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv ) {
	/*
	argc: how many arguments are there
	argv: array of arugments
	*/

	//1st argument:
	//argv[0];

	//last argument:
	//argv[argc-1];
	// for (int i = 0; i < argc; i ++){
	// 	printf("%s\n", argv[i]);
	// }

	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return 0;
}