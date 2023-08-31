#include "lists.h"

void del_node_at_end_sp(node_t *head)
{
	node_t *temp;

	temp = head;

	if (!temp)
		exit(1);

	while (temp->next)
	{
		temp = temp->next;
	}
	free(temp->next);
	temp = NULL;
}
