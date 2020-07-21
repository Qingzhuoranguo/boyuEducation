#include <stdio.h>
#include "LL_t.h"



int main () {
	struct node_t *Tail = NULL;
	struct node_t *Head = NULL;
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
	LL_append ( &Head, &Tail, 2 );
	LL_append ( &Head, &Tail, 3 );
	LL_append ( &Head, &Tail, 4 );
	LL_append ( &Head, &Tail, 5 );
	LL_append ( &Head, &Tail, 6 );

	// Head: does Head change in this function
	/*
	LL_print -> doesn't change Head -> pass by reference
	*/
	LL_print ( Head );

	// Head: does it change in this fucntion?
	LL_pop_head ( &Head, &Tail );
	LL_print ( Head );

	printf("LL_front: %d\n", LL_front (Head) );
	LL_print ( Head );

	printf("find 6:%d \n", LL_find (Head, 6));

	LL_delete ( &Head, &Tail, 5 );
	LL_print ( Head );
	
	return 0;
}
