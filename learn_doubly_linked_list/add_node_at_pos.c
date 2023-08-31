#include "lists.h"

void add_node_at_pos(int data, int pos, node_t *head)
{
	int count = 0;
	node_t *new_node, *ptr;

	ptr = head;

	new_node = malloc(sizeof(node_t));

	if (!(new_node || ptr))
		exit(1);

	new_node->prev = NULL;
	new_node->data = data;
	new_node->next = NULL;

	while (count < pos)
	{
		ptr = ptr->next;
		count++;
	}
	new_node->next = ptr->next;
	ptr->next->prev = new_node;
	new_node->prev = ptr;
	ptr->next = new_node;
}
