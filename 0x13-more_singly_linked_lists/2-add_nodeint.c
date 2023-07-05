#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at beginning of a list.
 *
 * @head: head pointer.
 *@n: integer of new node.
 * Return: address of a new elment.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
