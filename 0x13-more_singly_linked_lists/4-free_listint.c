#include "lists.h"
/**
 * free_listint - function that frees a list.
 * @head: head pointer to the firt node.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}


}
