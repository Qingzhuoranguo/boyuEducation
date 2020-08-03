// only need function prototypes


struct node_t {
	int data;
	struct node_t *next;
};


// define function prototype:
_Bool LL_is_Empty ( struct node_t *Head ); // need this semicolon;
int LL_append( struct node_t **Head, struct node_t **Tail, int data );
void LL_print ( struct node_t *Head );
int LL_pop_head ( struct node_t **Head, struct node_t **Tail );
int LL_front (struct node_t *Head);
_Bool LL_find ( struct node_t *Head, int target );
int LL_delete (struct node_t **Head, struct node_t **Tail, int target);

// Linked List sorting
/*
array sorting:
swap (a[0], a[100])
array is continuous, if known a[0], also known a[100], a[100] = a[0+100]

Linked list sorting:
cannot swap (head, tail)
each notes is not continuous in memory, so cannot do head + index 
always need to trace for index
*/

/*
find the "smallest", put it at the head
*/
void LL_selection_sort(struct node_t **Head, struct node_t **Tail);

void LL_merge_sort(struct node_t **Head, struct node_t **Tail);