#include <stdio.h>
#include <stdlib.h>


struct string { 
	char a[12];
	int len;
};

int main () {
	int x = 3 ;
	struct string str1 = {"Hello World!", 12};
	/*
	variable info:
	reference: str1
	type: struct string
	value: none
	*/
	// printf("%s, %d\n", str1.a, str1.len);

	// str1.a[0] = 'h';

	// printf("%s, %d\n", str1.a, str1.len);



	int *y;
	struct string *str2;
	/*
	reference: str2
	type: struct string pointer
	value: none
	*/

	str2->a[0] = 'h';
	str2->a[1] = '\0';

	str2->len = 1;
	printf("%s, %d\n", str2->a, str2->len);
	return 0;
}


/*
dot:
reference.elements

arrow:
pointer -> element

*/

