#include "lists.h"
/**
 * listint_len - function that returns the
 * number of elements in a linked list.
 * @h: pointer to linked list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);


}
