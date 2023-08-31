#include "lists.h"

int main(void)
{
	node_t *head = NULL;

	head = malloc(sizeof(node_t));

	if (head == NULL)
		exit(1);

	head->data = 45;
	head->next = NULL;

	printf("Data: %d\n", head->data);

	return (0);
}
