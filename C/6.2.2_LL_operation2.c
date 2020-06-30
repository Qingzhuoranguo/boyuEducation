#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "6.2.1_LL_operation1.c"

int LL_pop_head ( struct node_t **Head, struct node_t **Tail ) {
	// List is originally empty
	if ( (*Head) == NULL ){
		printf("Error: List empty\n");
		return -1;
	}
	// List has only one item
	if ( *Head == *Tail ) {
		free (*Head);
		*Head = NULL;
		*Tail = NULL;
		return 0;
	}
	// otherwise : List has >1 items
	struct node_t *tmp = *Head;
	*Head =( *Head )-> next;
	free ( tmp );
	return 0;
}

// return address of the node, return null otherwise
_Bool LL_find ( struct node_t *Head, int target ){
	struct node_t *current = Head;
	while ( current != NULL ){
		if (current->data == target){
			return true;
		}	
		current = current -> next;
	}
	return false; 
}


int LL_delete (struct node_t **Head, struct node_t **Tail, int target){
	//List is empty 
	if (*Head == NULL){
		printf("Error: list is empty\n");
		return -1;
	}
	//List only have 1 item
	if ( *Head == *Tail ){
		if ( (*Head) -> data == target ){
			struct node_t *tmp = *Head;
			*Head = NULL;
			*Tail = NULL;
			free (tmp);
			return 1;
		}
	}

	//List has more than 1 item
	//manually check the first item
	if ( (*Head) -> data == target ){
			struct node_t *tmp = *Head;
			*Head = (*Head)->next;
			free (tmp);
			return 2;
	}
	//loop the rest 
	struct node_t *previous = *Head;
	struct node_t *current = (*Head)->next;
	while ( current!= NULL ){
		if (current->data == target){
			struct node_t *tmp = current;
			previous -> next = current -> next;
			free (tmp);
			return 3;
		}
		previous = current;	
		current = current -> next;
	}
	//not found;
	return -2;
}

// return the frst element's data
int LL_front (struct node_t *Head){
	//List empty
	if (Head == NULL){
		printf("List empty.\n");
		return -1;
	}
	return Head->data;
}

int main (){
	struct node_t *Head = NULL;
	struct node_t *Tail = NULL;

	// insert 10 items
	for (int i = 0; i < 10; i ++ ){
		LL_append (&Head, &Tail, i);
	}
	LL_print (Head);

	// pop head 10 times
	for (int i = 0; i < 10; i ++ ){
		LL_pop_head(&Head, &Tail);
		LL_print(Head);
	}

	// LL_find:
	// insert 10 items
	for (int i = 0; i < 0; i ++ ){
		LL_append (&Head, &Tail, i);
	}
	LL_print (Head);

	int result = LL_delete(&Head, &Tail, 10);
	printf("result is: %d\n", result);
	LL_print (Head);
	printf ("front is: %d\n",LL_front(Head));
	return 0;
}
