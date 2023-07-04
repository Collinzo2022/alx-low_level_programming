#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements in the elements in list_t
 * @h: list to be printed.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int no;

	no = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		no++;
	}
	return (no);
}
