#include <stdio.h>
#include <stdlib.h>


void print (){
	printf("it prints!\n");
}


int main (){
	int x = 3;
	int *pt2 = &x;
	
	int *pt = (int *)malloc ( 4 );

	*pt = 3;

	printf("%d\n", *pt);

	free(pt);
	
	return 0;
}

