#include <stdio.h>
#include <string.h>


int compare ( int x, int y ){
	if ( x > y){
		return x;
	}else{
		return y;
	}
}

int maxN ( int *A, int length){
	int max = *(A+0);
	for (int i = 1; i < length; i ++ ){
		max = compare (max, *(A+i));
	}
	return max;
}

int main () {
	int array[10] = {1,2,3,4,5,6,7,8,9,0};
	
	int result = maxN (array, 10);

	printf("%d\n", result);

	return 0;
}