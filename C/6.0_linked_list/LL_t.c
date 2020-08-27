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

// find the node with the smallest data in it, and return its previous node
struct node_t *LL_findMin(struct node_t *Head){
	if ( Head == NULL ){
		return NULL;
	}
	if ( Head-> next == NULL ){
		return Head;
	}
	struct node_t *previous = Head;
	struct node_t *current = Head->next;
	int min = Head->data;
	struct node_t *min_pre_node = Head;
	while ( current != NULL ){
		if ( min > current->data){
			min = current->data;
			min_pre_node = previous;
		}
		previous = previous -> next;
		current = current -> next;
	}
	return min_pre_node;
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

	// struct node_t *

}

int LL_appendNode ( struct node_t **Head, struct node_t **Tail, struct node_t **node ){
	if ((*node) == NULL)
	{
		return -1;
	}

	// break the original link 
	(*node)->next = NULL;

	// list is empty: Head = Tail = NULL
	if (LL_is_Empty(*Head))
	{
		// head is the only node, and the tail is the only node too
		*Head = (*node);
		*Tail = (*node);
		return 0;
	}

	//list is not empty, head remains the same, but append to the tail
	(*Tail)->next = (*node);
	*Tail = (*node);
	return 0;
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
struct node_t *LL_Merge(struct node_t **Head1, struct node_t **Head2){
	// if one of the lists is empty, return the other list
	if ( *Head1 == NULL ) {
		return *Head2;
	}
	if ( *Head2 == NULL ) {
		return *Head1;
	}

	// current checking
	struct node_t *head1Current = *Head1;
	struct node_t *head2Current = *Head2;

	// the output list
	struct node_t *sortedHead = NULL;
	struct node_t *sortedTail = NULL;
	
	// loop unitl ONE of the lists is empty
	while ( head1Current != NULL && head2Current != NULL ){
		struct node_t *temp = NULL;
		if ( head1Current->data < head2Current -> data ){
			temp = head1Current;
			head1Current = head1Current -> next;
			LL_appendNode(&sortedHead, &sortedTail, &temp);
		}else {
			temp = head2Current;
			head2Current = head2Current -> next;
			LL_appendNode(&sortedHead, &sortedTail, &temp);
		}
	}
	// now one of the lists is empty, check which it is and if the other one still has nodes
	if ( head1Current == NULL ){
		if (head2Current == NULL){
			return sortedHead;
		}else {
			// can only be one leftover because divided by 2
			LL_appendNode(&sortedHead, &sortedTail, &head2Current);
			return sortedHead;
		}
	}else {
		LL_appendNode(&sortedHead, &sortedTail, &head1Current);
		return sortedHead;
	}
}