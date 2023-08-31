#include "lists.h"

void del_node_at_pos(int pos, node_t *head)
{
	int count = 1;
	node_t *ptr, *temp;

	temp = head;

	if (!temp)
		exit(1);

	while (count < pos)
	{
		ptr = temp;
		temp = temp->next;
		count++;
	}
	ptr->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	temp = NULL;
}
