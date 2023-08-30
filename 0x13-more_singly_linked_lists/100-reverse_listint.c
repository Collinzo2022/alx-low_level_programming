#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list.
 * @head: double pointer to head of the linked list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;
	listint_t *new_node;

	while (current != NULL)
	{
		new_node = current->next;
		current->next = previous;


		previous = current;
		current = new_node;
	}

	*head = previous;

	return (*head);
}
