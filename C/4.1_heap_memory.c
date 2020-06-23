#include <stdio.h>
#include <stdlib.h>


void print (){
	printf("it prints!\n");
}


int main (){
	int x = 3;
	/*
	variable reference: x
	type: integer
	size: integer -> 4 bytes
	*/


	int *pt2 = &x;
	
	int *pt = (int *)malloc ( 4 );
	/*
	variable reference: *pt
	type: deferenced pointer
	size: 4 (casted to integer)
	*/

	*pt = 3;
	printf("%d\n", *pt);

	free (pt);

	return 0;
}

