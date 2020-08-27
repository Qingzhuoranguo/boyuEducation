#include <stdio.h>
#include "LL_t.h"



int main () {
	struct node_t *Tail = NULL;
	struct node_t *Head = NULL;

	struct node_t *Tail1 = NULL;
	struct node_t *Head1 = NULL;
	/*
	variable with 
	type: pointer (struct node_t pointer)
	reference: Head
	value: NULL;
	*/

	// need to append:
	/*
	need to pass: 1. Head 2. Tail 3. the data
	1. Head: need to be changed -> need to pass by address
		address = &reference 
		Head's address = &Head
	*/
	LL_append ( &Head, &Tail, 1 );
	LL_append ( &Head, &Tail, 3 );
	LL_append ( &Head, &Tail, 5 );
	LL_append ( &Head, &Tail, 7 );
	LL_append ( &Head, &Tail, 9 );
	LL_append ( &Head, &Tail, 11 );
	LL_append(&Head1, &Tail1, 2);
	LL_append(&Head1, &Tail1, 4);
	LL_append(&Head1, &Tail1, 6);
	LL_append(&Head1, &Tail1, 8);
	LL_append(&Head1, &Tail1, 10);
	// LL_append(&Head1, &Tail1, 12);

	LL_print ( Head );
	LL_print (Head1);

	LL_print(LL_Merge(&Head, &Head1));
	return 0;
}
