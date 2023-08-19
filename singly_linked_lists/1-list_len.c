#include "lists.h"
/**
 * list_len - resturns number of elements in linked list
 * @h: head pointer
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t const *temp;

	temp = h;

	while(temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
