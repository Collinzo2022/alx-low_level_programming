#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint linked list.
 * @head: head pointer to the node.
 * @index: index of the node.
 *
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i != index)
		return (NULL);



	return (temp);
}
