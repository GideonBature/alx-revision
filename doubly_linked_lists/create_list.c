#include "main.h"

void main(void)
{
	node_t *head, *new_node;

	new_node = malloc(sizeof(node_t));

	if (new_node == NULL)
	{
		exit(0);
	}

	printf("Please enter number: \n");

	scanf("%d", &new_node->data);

	head = new_node;

	printf("%p, %d\n", head, new_node->data);
}
