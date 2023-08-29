#include "lists.h"
/**
 * pop_listint - function that deletes the head
 * node of a link.
 * @head: head pointer to a link list.
 *
 * Return: 0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;


	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
