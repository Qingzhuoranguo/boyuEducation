#include <stdio.h>
#include <string.h>

int len ( char *A ){
	return sizeof(A); //do not know the entire array only the first element
}


int main () {
	char ar [] = "hello world";
	/*
	variable definition with
	type: char array == string == char pter
	reference: ar
	value: "hello world"
	ar -> 'h'
	*/
	char ele = 'a';

	char *ele_addr = &ele;
	/*
	variable definition with
	type: char pter 
	reference: ele_addr
	value: &ele;
	*/


	char arr[] = "hi this is ar[]";
	printf( "%s\n", arr );

	char arra = 'h';
	char *arra_addr = &arra;
    
	int x = 3;

	*(arra_addr+1) = 'i';
	*(arra_addr+2) = ' ';
	*(arra_addr+3) = 't';
	*(arra_addr+4) = 'h';
	*(arra_addr+5) = 'i';
	*(arra_addr+6) = 's';
	*(arra_addr+7) = '\0';

	printf("%s\n",	arra_addr );


	return 0;
}

