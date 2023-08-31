#include "lists.h"

void add_node_at_pos(int data, int pos, node_t *head)
{
	node_t *new_node, *ptr;
	int count = 1;

	ptr = head;

	new_node = malloc(sizeof(node_t));

	if (!(new_node || ptr))
		exit(1);

	new_node->data = data;
	new_node->next = NULL;

	while (count < pos - 1)
	{
		ptr = ptr->next;
		count++;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
}
