#include "lists.h"
/**
 * add_nodeint - adds node at beginning
 * @head: pointer to head node pointer
 * @n: data
 *
 * Return: the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	temp = *head;
	
	new_node->n = n;
	new_node->next = temp;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		*head = new_node;
		new_node->next = temp;
	}
	return (new_node);
}
