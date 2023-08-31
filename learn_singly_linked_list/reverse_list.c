#include "lists.h"

node_t *reverse(node_t *head)
{
	node_t *n = NULL, *p = NULL;

	if (!head)
		exit(1);

	while (head)
	{
		n = head->next;
		head->next = p;
		p = head;
		head = n;
	}
	head = p;

	return (head);
}
