#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of ll
 * @h: pointer to pointer of head node
 * @n: the data
 *
 * Return: new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	temp = *head;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
