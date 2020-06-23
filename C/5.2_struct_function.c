#include <stdio.h>
#include <stdlib.h>

struct Numbers {
	int x;
	int y;
	double z;
};


struct Numbers *foo () {
	int x = 1;
	int y = 2;
	double z = 3;
	struct Numbers *r = malloc (sizeof (struct Numbers));

	r->x = x;
	r->y = y;
	r->z = z;

	return r;
}



int main () {

	printf("%s\n", "here");
	struct Numbers *result = foo();
	printf("result: %d, %d, %d\n", result->x, result->y, result->z);

	free(result);
	
	return 0;
}