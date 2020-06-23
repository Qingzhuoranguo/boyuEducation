#include <stdio.h>
#include <stdlib.h>

struct node_t {
	int data;
	struct node_t *next;
};

int main () {

	struct node_t *node1, node2, node3;


	node1->data = 1;
	node1->next = node2;

	node2->data = 2;
	node2->next = node3;

	node3->data = 3;
	node3->next = NULL;

	struct node_t *Head;
	struct node_t *Tail;
	Head = node1;
	Tail = node3;

	return 0;
}



