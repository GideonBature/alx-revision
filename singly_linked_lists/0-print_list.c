#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: head node pointer
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	list_t const *temp;

	size_t size = 0;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
		}
		else
		{
			printf("[%ld] %s\n", strlen(temp->str), temp->str);
			temp = temp->next;
		}
		size++;
	}
	return (size);
}
