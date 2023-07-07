#include "lists.h"
/**
 * listint_len - returns number of elements in a ll
 * @h: pointer to head node
 *
 * Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
