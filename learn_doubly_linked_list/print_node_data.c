#include "lists.h"

void print_node_data(node_t *head)
{
	int i = 1;
	node_t *ptr = NULL;

	ptr = malloc(sizeof(node_t));

	if (!ptr)
	{
		printf("There are no nodes available\n");
		exit(1);
	}

	ptr = head;

	while (ptr)
	{
		printf("Data %d: %d\n", i, ptr->data);
		i++;
		ptr = ptr->next;
	}
}
