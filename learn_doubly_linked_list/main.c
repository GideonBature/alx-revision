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

	head = add_node_at_beg(25, head);
	add_node_at_beg_without_return(15, &head);
	add_node_at_pos(10, 3, head);
	add_node_at_end(65, head);
	head = del_node_at_beg(head);
	count_nodes(head);
	print_node_data(head);

	return (0);
}
