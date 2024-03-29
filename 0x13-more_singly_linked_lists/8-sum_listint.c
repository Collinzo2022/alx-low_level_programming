#include "lists.h"
/**
 * sum_listint - function that returns the
 * sum of all the data(n) of a listint_t
 * linked list.
 * @head: head pointer of the linked list.
 *
 * Return: the sum or 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}

	return (sum);
}
