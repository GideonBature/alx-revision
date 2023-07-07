#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: pointer to head node
 *
 * Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *temp;

	if (h == NULL)
	{
		return (count);
	}

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
