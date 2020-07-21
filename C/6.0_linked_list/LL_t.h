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
