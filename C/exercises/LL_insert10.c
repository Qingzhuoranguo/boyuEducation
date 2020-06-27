#include <stdio.h>
#include <stdlib.h>

struct node_t {
	int content; //4 byte
	struct node_t *next; //8 byte
};


int main () {

	struct node_t *node1 = malloc ( sizeof( struct node_t ) );	
	struct node_t *node2 = malloc (sizeof(struct node_t));
	struct node_t *node3 = malloc (sizeof(struct node_t));
	struct node_t *node4 = malloc (sizeof(struct node_t));
	struct node_t *node5 = malloc (sizeof(struct node_t));
	struct node_t *node6 = malloc (sizeof(struct node_t));
	struct node_t *node7 = malloc (sizeof(struct node_t));
	struct node_t *node8 = malloc (sizeof(struct node_t));
	struct node_t *node9 = malloc (sizeof(struct node_t));
	struct node_t *node10 = malloc (sizeof(struct node_t));

	node1->content = 1;
	node1->next = node2;

	node2->content = 2;
	node2->next = node3;

	node3->content = 3;
	node3->next = node4;

	node4->content = 4;
	node4->next = node5;

	node5->content = 5;
	node5->next = node6;

	node6->content = 6;
	node6->next = node7;

	node7->content = 7;
	node7->next = node8;

	node8->content = 8;
	node8->next = node9;

	node9->content = 9;
	node9->next = node10;

	node10->content = 10;
	node10->next = NULL;

	struct node_t *Head;
	struct node_t *Tail;
	Head = node1;
	Tail = node10;

	struct node_t *current = Head;
	printf("[ " );
	while (current != NULL){
		printf("%d ", current->content);
		current = current -> next;
	}
	printf("]\n");

	return 0;
}
