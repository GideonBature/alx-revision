#include "lists.h"

node_t *del_node_at_beg(node_t *head)
{
	node_t *temp;

	temp = head;

	if (!temp)
		exit(1);

	head = head->next;
	head->prev = NULL;

	free(temp);
	temp = NULL;

	return (head);
}

