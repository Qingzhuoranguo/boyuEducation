#include <stdio.h>


int main () {
	//Q1 declare an integer array with 10 elements
	int arr [10];
	/*
	variable with
	type: integer array
	reference: arr
	value: currently none but 10 slots
	*/
	
	//Q2 write a for loop to put 10 numbers (1-10) into the array 
	for (int i = 1; i < 11; i ++){
		arr[i-1] = i;
	}
	//Q3 use printf() and for loop to print out each element in the array
	for (int i = 0; i < 10; i ++){
		printf ("%d\n", arr[i]);
	}

	return 0;
}