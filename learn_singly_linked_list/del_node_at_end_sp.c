#include "lists.h"

void del_node_at_end_sp(node_t *head)
{
	node_t *ptr;

	ptr = head;

	if (!ptr)
		exit(1);

	while(ptr->next)
		ptr = ptr->next;

	free(ptr->next);
	ptr->next = NULL;
}
