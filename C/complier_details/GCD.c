#include <stdio.h>
#include <stdlib.h>
#include "GCD.h"


// int main (int argc, char **argv ) {
// 	int a = atoi (argv[1]);
// 	int b = atoi (argv[2]);

// 	printf("%d\n", GCD (a,b));

// 	return 0;
// }

int max (int x, int y){
	if (x >= y){
		return x;
	}
	return y;
}

int min (int x, int y){
	if (x >= y){
		return y;
	}
	return x;
}
//greatest common divisor
int GCD (int x, int y){
	int upper = max (x,y);
	int lower = min (x,y);
	int q = 0;
	int r = 1;
	int GCD = lower;

	q = upper/lower;
	r = upper%lower;

	while (r!=0){
		GCD = r;
		upper = lower;
		lower = r;
		q = upper/lower;
		r = upper%lower;
	}
	return GCD;
}




/*
Euclidian algorithm
e.g

10 45

45 = 10 * q + r 
45 = 10 * 4 + 5

10 = 5 * q + r
10 = 5 * 2 + 0



implementation:

1. find min/max
2. upper = lower * q + r
q = upper /lower 
r = upper % lower
while (r!=0){
	keep going
		upper = lower 
		lower = r
}
return previous r

*/