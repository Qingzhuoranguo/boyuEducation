#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "LL_t.h"

_Bool LL_is_Empty ( struct node_t *Head ){
	if (Head == NULL){
		return true;
	}
	return false;
}

// Create a node with data, put it at the Tail of the linked list
int LL_append( struct node_t **Head, struct node_t **Tail, int data ){
	// because need dynamic memory, use malloc().
	// get size of struct node_t of memory 
	struct node_t *node = (struct node_t *)malloc ( sizeof (struct node_t) );

	// if malloc failed: ask operating system for memory but failed
	if (node == NULL){
		return -1;
	}
	// if success
	node -> data = data;
	// because append to the Tail, this new node must be the last one, that is next = NULL
	node -> next = NULL;

	// list is empty: Head = Tail = NULL
	if ( LL_is_Empty(*Head) ){
		// head is the only node, and the tail is the only node too
		*Head = node;
		*Tail = node;
		return 0;
	}

	//list is not empty, head remains the same, but append to the tail
	(*Tail)->next = node;
	*Tail = node;
	return 0;
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

/*
Head -> node1 -> node2 -> ... -> NULL
LL_pop_head: 
Head -> node2 -> ... -> NULL
*/
int LL_pop_head ( struct node_t **Head, struct node_t **Tail ) {
	int headValue = 0;

	// List is originally empty
	if ( (*Head) == NULL ){
		printf("Error: List empty\n");
		return -1;
	}

	// List has only one item
	// because if only has one item, after pop, both Head and Tail must change
	headValue = (*Head)->data;
	if ( *Head == *Tail ) {
		free (*Head);
		*Head = NULL;
		*Tail = NULL;
	}else{ // List has >1 items
		// because >1 item, Head need to point to the second, but Tail remains the same
		
		// record the first node's addr, then let Head points the second
		struct node_t *tmp = *Head;
		*Head =( *Head )-> next;
		// because the node is poped, no longer need, return the memory to system
		free ( tmp );
	}
	return headValue;
}


// return the frst element's data
/*
Head -> node(32) -> node(12) -> .....
LL_front () = 32
Head -> node(32) -> node(12) -> .....
*/
int LL_front (struct node_t *Head){
	//List empty
	if (Head == NULL){
		printf("List empty.\n");
		return -1;
	}
	return Head->data;
}

// return true or false whethere target data is in the list
_Bool LL_find ( struct node_t *Head, int target ){
	// start at the Head
	struct node_t *current = Head;

	// as long as it's not the tail, keep moving to the next
	// != NULL means not yet the Tail
	while ( current != NULL ){
		if (current->data == target){
			return true;
		}	
		current = current -> next; // keep moving to the next: i = i + 1
	}
	return false; 
}

/*
delete the first node contains the target, remove the node from the list
*/
int LL_delete (struct node_t **Head, struct node_t **Tail, int target){
	//List is empty 
	if (*Head == NULL){
		printf("Error: list is empty\n");
		return -1;
	}

	//List only have 1 item
	// only has 1 item, just check it 
	if ( *Head == *Tail ){
		// if the only item contins the target
		if ( (*Head) -> data == target ){
			// empty the entire list
			free( *Head );
			*Head = NULL;
			*Tail = NULL;
			return 1;
		}
	}

	//List has more than 1 item
	/*
	because by the time it finds the node has the target, it cannot 
	delete it directly - it will break the list:
		Head -> node1 -> node2 -> ... -> nodeN(target) -> nodeN+1 -> ... 
	if directly delte nodeN, cannot link the list:
		don't know the previous, only know the next: nodeN+1

	strategy: 
	1. first manually check the first one, set it as the prevs
	2. loop through the list start at the second:
		previous = first
		currrent = second 
	*/


	//manually check the first item - if it contains the target
	if ( (*Head) -> data == target ){
			/*
			Head -> node1(target) -> node2 ->...
			
			temp = node1(target)
			Head -> node2 -> ...
			delete (temp)
			*/
			struct node_t *tmp = *Head;
			*Head = (*Head)->next;
			free (tmp);
			return 2;
	}

	//loop the rest 
	struct node_t *previous = *Head; //previous = first
	struct node_t *current = (*Head)->next; // current = second
	
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

/*
head -> null
		tail

head -> 2 -> 3 -> 4 -> 5 -> null
					  tail

head = newhead
tail = newtail


*/
void LL_selection_sort(struct node_t **Head, struct node_t **Tail){
	struct node_t *sortedHead = NULL;
	struct node_t *sortedTail = NULL;


	// while loop only does 2 things:
	// 1. find the smallest
	// 2. put it into the new sorted list.
	while ( *Head != NULL ) {
		// only one element
		if ((*Head)->next == NULL ){
			LL_append(&sortedHead, &sortedTail, (*Head)->data);
			*Head = sortedHead;
			*Tail = sortedTail;
			return;
		}

		// actual results of tracing: minimum and minimum's previous node
		struct node_t *cur_target = NULL;
		struct node_t *tar_previous = NULL;

		// assume the first element is the smallest
		cur_target = *Head;
		tar_previous = *Head;

		// iteration
		// always keep tracking previous in order to link the list after
		struct node_t *previous = *Head;
		struct node_t *current = (*Head)->next;
		while ( current != NULL ){
			if (current->data <= cur_target->data){
				// record the minimum and its precious node
				cur_target = current;
				tar_previous = previous;
			}
			// otherwise: loop through
			previous = current;
			current = current->next;
		}
		// now we have the current min, and its previous node
		// head -> .... -> tar_previous -> min -> node -> .....
		// relink the list, push the min to the new sorted list 
		tar_previous->next = cur_target->next;
		// sortedHead -> .... -> min -> null
		LL_append(&sortedHead, &sortedTail, cur_target->data );

	}
	// remap the list
	*Head = sortedHead;
	*Tail = sortedTail;
	return;
}

/*

input:
Head1 -> 3 -> 27 -> 38 -> 43
						  tail
Head2 -> 9 -> 10 -> 82 
					tail

output:
Head -> 3 -> 9 -> 10 -> 27 -> 38 -> 43 -> 82
										tail

special case:
Head1 -> 3
Head2 -> 2
return 
Head -> 2 -> 3

Head1 -> 
Head2 -> 2
return 
Head -> 2

*/
void LL_Merge (struct node_t **Head1, struct node_t **Head2) {

}