#include "lists.h"
/**
 * add_node - add new node at the beginning
 * @head: pointer to head pointer
 * @str: string parameter
 * 
 * Return: new_node
*/
list_t *add_node(list_t **head, const char *str)
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

	temp = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	new_node->next = temp;
	*head = new_node;

	return (temp);
}