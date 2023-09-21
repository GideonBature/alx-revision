#include "lists.h"

node_t *reverse(node_t *head)
{
	node_t *ptr;

	if (!head)
		exit(1);

	ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
	}
	ptr = ptr->prev;

	return (ptr);
}
