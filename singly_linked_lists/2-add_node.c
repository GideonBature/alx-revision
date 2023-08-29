#include "lists.h"
/**
 * add_node - add new node at beginning
 * @head: head node pointer
 * @str: string data
 *
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *s = strdup(str);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->len = strlen(s);
	new_node->str = s;
	new_node->next = NULL;

	temp = *head;

	*head = new_node;
	new_node->next = temp;

	return (new_node);
}
