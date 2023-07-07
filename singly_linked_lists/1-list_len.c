#include "lists.h"
/**
 * list_len - returns number of elements in a ll
 * @h: pointer to head of ll
 * 
 * Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	if (h == NULL)
	{
		return (count);
	}

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}