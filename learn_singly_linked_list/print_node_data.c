#include "lists.h"

void print_node_data(node_t *head)
{
	node_t *ptr = NULL;
	int i = 1;


	if (!head)
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
