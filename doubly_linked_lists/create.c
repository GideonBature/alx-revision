#include "main.h"

void create(void)
{
	new_node = malloc(sizeof(node_t));
	printf("Enter Data: ");
	scanf("%d", &new_node -> data);

	new_node -> prev = 0;
	new_node -> next = 0;

	if (head == 0)
	{
		head = new_node;
	}
	printf("%p, %d, %p", new_node->prev, new_node->data, new_node->next);

}
