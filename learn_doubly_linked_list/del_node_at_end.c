#include "lists.h"

void del_node_at_end(node_t *head)
{
	node_t *temp, *temp2;

	temp = head;

	if (!temp)
		exit(1);

	while (temp->next)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	free(temp);
	temp = NULL;
}
