#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints all the elements of a list_t
 * @h: name of the list.
 *
 *Return: number of nodes.
 **/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		count++;
		h = h->next;
	}
	return (count);
}
