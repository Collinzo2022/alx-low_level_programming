#include "lists.h"

/**
 * listint_len - this function returns the number of elements
 * in a linked listint_t list.
 *
 * @h: head pointer to linked list.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	for (; h != NULL; h = h->next)
	{
		number++;
	}

	return (number);
}
