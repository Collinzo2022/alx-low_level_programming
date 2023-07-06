#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function adds a new node at the end of a list.
 *
 * @head: pointer to head of the node.
 * @n: add the list.
 * Return: address of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (new);
}




