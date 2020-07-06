#include <stdio.h>
#include <stdlib.h>

void prime_factors ( int target ){
	int divisor = 2;
	int ls [target/2];
	int i = 0;
	while ( target/divisor >= 1 ){
		if (target%divisor == 0){
			ls[i] = divisor;
			printf("target:%d divisor:%d\n",target, divisor);
			target = target/divisor;
			i = i + 1;
		}else {
			divisor = divisor + 1;
		}
	}
}


//least common multiple
// int LCM ( int x, int y ){


// 	return LCM;
// }


int main () {
	prime_factors (36);
	return 0;
}