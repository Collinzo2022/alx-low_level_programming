#include "lists.h"
#include <stdio.h>
/**
 * print_listint - the function prints all the elements of the list.
 *
 * @h: head pointer to the linked list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		number++;
	}

	return (number);
}
