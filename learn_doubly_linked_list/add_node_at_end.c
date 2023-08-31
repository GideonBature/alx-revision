#include "lists.h"

void add_node_at_end(int data, node_t *head)
{
	node_t *ptr, *new_node;

	ptr = head;

	new_node = malloc(sizeof(node_t));

	if (!(new_node) || !(ptr))
		exit(1);

	new_node->data = data;
	new_node->next = NULL;

	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
}
