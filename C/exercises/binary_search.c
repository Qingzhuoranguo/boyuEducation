#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binarySearch (int target, int *A, int left, int right){
	if (right < left){
		return -1;
	}
	int mid = (left + right)/2;
	if ( *(A+mid) == target ){
		return mid;
	}

	if ( *(A+mid) > target ){
		return binarySearch ( target, A, left, mid-1 );
	}
	if ( *(A+mid) < target ){
		return binarySearch ( target, A, mid+1, right);
	}
}

int main (int argc, char **argv) {
	int size = atoi(argv[2]);
	int ar [size];
	for (int i = 0; i < size; i++){
		ar[i] = i;
	}
	printf("\n");
	printf("%d\n", binarySearch( atoi(argv[1]) , ar, 0, size) );
	return 0;
}