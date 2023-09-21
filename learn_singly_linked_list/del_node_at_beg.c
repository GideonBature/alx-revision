#include "lists.h"

node_t *del_node_at_beg(node_t *head)
{
	node_t *ptr;

	ptr = head;

	if (!ptr)
		exit(1);

	head = head->next;

	free(ptr);
	ptr = NULL;

	return (head);
}
