#include "lists.h"

node_t *del_node_all(node_t *head)
{
	node_t *temp;

	temp = head;

	if (!temp)
		exit(1);

	while (temp->next)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
	head = NULL;

	return (head);
}
