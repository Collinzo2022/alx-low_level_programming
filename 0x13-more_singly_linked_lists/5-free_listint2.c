#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: head pointer to the node.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
