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
	head->next = current;

	current->prev = head;
	current->data = 45;
	current->next = NULL;

	current = malloc(sizeof(node_t));

	if (current == NULL)
		exit(1);

	current->prev = head->next;
	current->data = 55;
	current->next = NULL;
	head->next->next = current;

	printf("Data1: %d\n", head->data);
	printf("Data2: %d\n", head->next->data);
	printf("Data3: %d\n", head->next->next->data);
	
	printf("\nData1: %d\n", current->data);
	printf("Data2: %d\n", current->prev->data);
	printf("Data3: %d\n", current->prev->prev->data);

	return (0);
}
