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

	printf("Data1: %d\n", head->data);
	printf("Data2: %d\n", current->data);


	return (0);
}
