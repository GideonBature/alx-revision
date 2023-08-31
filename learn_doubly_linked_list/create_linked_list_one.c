#include "lists.h"

int main(void)
{
	node_t *head, *current = NULL;

	head = malloc(sizeof(node_t));
	current = malloc(sizeof(node_t));

	if (head == NULL || current == NULL)
		exit(1);

	head->prev = NULL;
	head->data = 35;
	head->next = NULL;

	current->prev = NULL;
	current->data = 45;
	current->next = NULL;

	printf("Data1: %d\n", head->data);
	printf("Data2: %d\n", current->data);

	return (0);
}
