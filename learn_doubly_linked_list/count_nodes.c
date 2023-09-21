#include "lists.h"

void count_nodes(node_t *head)
{
	int count = 0;

	node_t *ptr = NULL;

	ptr = malloc(sizeof(node_t));

	if (ptr == NULL)
		exit(1);

	ptr = head;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	printf("Number of nodes: %d\n\n", count);
}
