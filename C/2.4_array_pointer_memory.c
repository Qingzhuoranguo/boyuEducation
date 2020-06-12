#include <stdio.h>


int main () {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	/*
	variable with
	type: integer array
	reference: arr
	value: {1,2,3,4,5,6,7,8,9,10}
	*/

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);

	arr[0] = 3;
	/*
	vairable with
	type: integer
	reference: arr[0]
	value: 3
	address: &arr[0]
	*/
	printf("%p\n", arr );


	// char str[] = "hello";
	char str[6];
	printf("%s\n", str);



	//pointer access
	int ar [10] = {1,2,3,4,5,6,7,8,9,10};

	printf("%p: %d\n", ar, *(ar));
	printf("%p: %d\n", &ar[0], ar[0]);

	printf("%p: %d\n", &ar[3], ar[3] );
	printf("%p: %d\n", ar+3, *(ar+3) );

	//loop print 
	for (int i =0; i<10; i++){
		printf("%d\n", *(ar+i) );
		printf("%d\n\n", ar[i] );
	}

	return 0;
}


// 1 2 3 4 5 6 7 8 9 a b c d e f