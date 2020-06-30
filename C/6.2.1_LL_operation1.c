#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct node_t {
	int data;
	struct node_t *next;
};

_Bool LL_is_Empty ( struct node_t *Head ){
	if (Head == NULL){
		return true;
	}
	return false;
}

void LL_print ( struct node_t *Head ) {
	struct node_t *current = Head;
	printf("[ " );
	while (current != NULL){
		printf("%d ", current->data);
		current = current -> next;
	}
	printf("]\n");
	return;
}


int LL_append( struct node_t **Head, struct node_t **Tail, int data ){
	struct node_t *node = malloc (sizeof (struct node_t));
	if (node == NULL){
		return -1;
	}
	node -> data = data;
	node -> next = NULL;

	// list is empty
	if ( LL_is_Empty(*Head) ){
		*Head = node;
		*Tail = node;
		return 0;
	}
	//list is not empty
	(*Tail)->next = node;
	*Tail = node;
	return 0;
}


// int main () {
 
// 	struct node_t *Head = NULL;
// 	struct node_t *Tail = NULL;

// 	LL_append (&Head, &Tail, 1);
// 	LL_append (&Head, &Tail, 2);
// 	LL_append (&Head, &Tail, 3);
// 	LL_append (&Head, &Tail, 4);
// 	LL_append (&Head, &Tail, 5);

// 	LL_print (Head);

// 	return 0;
// }


