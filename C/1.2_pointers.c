#include <stdio.h>

void addOne ( int* m ){
	/*
	"int* m"
	varibale with
	1. type: inter pointer
	2. reference: m
	3. value: y
	*/
	*m = *m + 1;
	/*
	equivalent to:
	*m = *(y) = *(&x) = x
	
	x = x + 1
	*/

}


int main (){
	int x = 3; 
	/* 
	"int x"
	variable with 
	1.type: integer 
	2. reference: x 
	3. value: 3
	*/

	int* y = &x; // 0x111fff00
	/*
	"int* y"
	variable with
	1. type: integer pointer
	2. reference: y
	3. value: &x
	*/
	addOne(y);

	printf ("x now is: %d\n",x);


	return 0;
}


/*

%d decimal
%p pointer/address  0xffffffff
%c character
%f float
%s string
%x hexadecimal

*/