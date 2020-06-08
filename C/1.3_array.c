#include <stdio.h>


int main () {

	int ls[5] = {1,2,3,4,5};
	/*
	variable with
	type: integer array
	reference: ls
	value: {1,2,3,4,5}
	*/

	int ls2[5];
	/*
	variable with
	type: integer array
	reference: ls2
	value: none
	*/


	ls2[0] = 1;

	/*
	variable with
	type integer
	reference: ls2[0]
	value: 1
	*/

	ls2[1] = 2;
	ls2[2] = 3;
	ls2[3] = 4;
	ls2[4] = 5;
	

	printf("the number is %d, %d, %d, %d\n", ls[1],ls[2],ls[3],ls[4]);
	/*
	
	print format:

	string = world + %
	variable = one to one   to   %

	*/

	return 0;
}

