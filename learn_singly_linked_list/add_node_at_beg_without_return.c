#include "lists.h"

void add_node_at_beg(int data, node_t **head)
{
	node_t *ptr, *new_node;

	ptr = *head;

	new_node = malloc(sizeof(node_t));

	if (!(new_node) || !(ptr))
		exit(1);

	new_node->data = data;
	new_node->next = ptr;
	*head = new_node;
}
