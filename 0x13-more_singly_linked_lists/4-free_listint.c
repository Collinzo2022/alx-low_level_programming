#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function frees a list.
 *
 * @head: pointer to the head.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}


