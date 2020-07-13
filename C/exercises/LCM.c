#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int maxList ( int *ls ){
	int i = 0;
	int max = ls[i];
	while (ls[i]!= -1){
		if (ls[i]>max){
			max = ls[i];
		}
		i++;
	}
	return max;
}

int maxInt (int x, int y){
	if (x > y){
		return x;
	}else{
		return y;
	}
}

_Bool is_Prime (int x){
	for (int i = 2; i <= x/2; i++){
		if (x%i == 0){
			return false;
		}
	}
	return true;
}

// return a integer list of all prime factors end with -1
int *prime_factors ( int target ){
	int divisor = 2;
	int ls [target/2];
	int i = 0;
	while ( target/divisor >= 1 ){
		if (target%divisor == 0){
			ls[i] = divisor;
			// printf("target:%d divisor:%d\n",target, divisor);
			target = target/divisor;
			i = i + 1;
		}else {
			divisor = divisor + 1;
		}
	}

	// end indicator
	ls[i] = -1;
	i++;

	// malloc steady memory to return.
	int *result = (int *)malloc ( i*sizeof(int) );
	for (int m = 0; m < i; m ++){
		result[m] = ls[m];
	}
	return result;
}

int countInt ( int *ls, int target ){
	int count = 0;
	int i = 0;
	while (ls[i]!= -1){
		if (ls[i] == target){
			count ++;
		}
		i++;
	}
	return count;
}

// least common multiple
int LCM ( int x, int y ){
	// find the prime list
	int *ls1 = prime_factors(x);
	int *ls2 = prime_factors(y);

	// initialize the LCM to 1
	int LCM = 1;

	//LCM = LCM * ( current prime factor ^ maxAppearance in both list )
	for (int i = 2; i <= maxInt( maxList (ls1), maxList (ls2) ); i++ ){
		int maxAppearance = maxInt (countInt (ls1, i), countInt (ls2, i));
		LCM = LCM * (i^maxAppearance);
	}

	free(ls1);
	free(ls2);
	
	return LCM;
}


int main (int arg, char ** argv) {
	int a = atoi (argv[1]);
	int b = atoi (argv[2]);
	printf("LCM is: %d\n", LCM(a, b));
	return 0;
}


/*
Prime factors logic:
divisor = 2 
target = n


if target mod divisor == 0      => no reminder
	target = target/divisor 	=> move to the next
	result [0] = divisor 		=> record this division


if target mode divisor != 0		=> yes reminder
	divisor ++					=> skip the current divisor
	check prime
	continue

*/

/*
LCM 16 24

16: 2 2 2 2 
24: 2 2 2 3 

2: 4 times
3: once

LCM = 1;

LCM = LCM * 2^4  => fist time, checked 2
    = 1 * 16 
    = 16

LCM = LCM * 3^1  => second time, checked 3 
	= 16 * 3 
	= 48


*/
