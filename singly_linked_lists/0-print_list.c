#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head node
 * 
 * Return: size_t
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}