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

	add_node_at_beg(35, &head);
	head = add_node_at_beg_return(25, head);
	add_node_at_end(75, head);
	add_node_at_pos(10, 3, head);
	head = del_node_at_beg(head);
	del_node_at_end(head);
	del_node_at_end_sp(head);
	del_node_at_pos(3, head);
	count_nodes(head);
	print_node_data(head);


	return (0);
}
