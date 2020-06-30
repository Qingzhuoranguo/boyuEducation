#include <stdio.h>
#include "add.h"

int main () {
	int m = 5;
	int n = 6;

	int result = add (m,n);

	printf("result is: %d\n", result);
	return 0;
}