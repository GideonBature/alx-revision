#include "lists.h"

void del_node_at_end(node_t *head)
{
	node_t *ptr, *temp;

	ptr = head;
	temp = head;

	if (!ptr || !temp)
		exit(1);

	while (temp->next)
	{
		ptr = temp;
		temp = temp->next;
	}
	ptr->next = NULL;
	free(temp);
	temp = NULL;
}
