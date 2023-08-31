#include "lists.h"

int main(void)
{
	node_t *head, *current = NULL;

	head = malloc(sizeof(node_t));
	current = malloc(sizeof(node_t));

	if (head == NULL || current == NULL)
		exit(1);

	head->data = 45;
	head->next = NULL;

	current->data = 55;
	current->next = NULL;
	head->next = current;

	current = malloc(sizeof(node_t));

	current->data = 65;
	current->next = NULL;
	head->next->next = current;

	count_nodes(head);
	print_node_data(head);


	return (0);
}
