#include "lists.h"
/**
 * add_node_end - adds node at the end of lists
 * @head: pointer to head node pointer
 * @str: The String parameter
 * 
 * Return: address to new_node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;


	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}