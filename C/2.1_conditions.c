#include <stdio.h>


int main () {
	// Python:
	// if condition:
	// 	operations
	// elif condition2:
	// 	operations
	// elif condition3:
	//  	operations
	// ...
	// else:
	// 	operations

	// c:
	int x;

	int answer = 100;

	if ( x < 100 ){
		printf("too small!\n");
	}else if (x > 100){
		printf("too big!\n");
	}else{
		printf("you are correct!\n");
	}

	return 0;
}


/*
logic expression

python 			c 			java (same as c)

not				!
and				&&
or 				||
>				>
>=				>=
<				<
<=				<=
==				==
not =			!=

*/