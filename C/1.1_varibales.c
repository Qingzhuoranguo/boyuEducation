#include <stdio.h>


int main (){
	int x = 65;
	int* y = &x;

	char c = 'A';
	char* c_addr = &c;

	*c_addr = c


	char str[] = "hello"; 



	printf ("&x is: %p\n", &x);
	printf("y is: %p\n", y);

}

/*
1. what is string?
 a list of characters

2. integer
4 byte = 32 bit -> integer

_: 0 or 1   x2

_ _: 00 01 10 11   x4

_ _ _: 000 001 010 011 100 101 110 111

_ _ _ _: x 16


3.how to calculate the limit

type -> size -> conevert byte to bit 
2^(bit-1) -1

e.g 4 byte integer
4 byte = 4 * 8 = 32 bits

2^(32-1) -1 = 2147483647

e.g char = 1 byte
1 byte = 8 bit 
x^7 - 1 


*/