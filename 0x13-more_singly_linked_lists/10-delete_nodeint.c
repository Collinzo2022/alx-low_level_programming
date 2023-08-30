#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a listint_t list.
 * @index: index of the node.
 * @head: double pointer to the head of the linked list.
 * Return:1 if it succeed or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous, *temp;
	unsigned int i = 0;

	/*check if the list or head is empty*/
	if (head == NULL || *head == NULL)
		return (-1);

	/*if we want to delete the first box(index 0)*/
	if (index == 0)
	{
		temp = *head;/*Store the address of the first box*/
		*head = (*head)->next; /*Update the haed to point to the second box*/
		free(temp);/*Release the memory of the first box*/
		return (1); /*it worked*/
	}
	/*if we wnt to delete a box in the middle or end*/
	current = *head;/*Start at the first box*/
	previous = NULL;

	/*loop until we reach the desired box or end of the list*/
	while (current != NULL && i < index)
	{
		previous = current;/* remember the current box*/
		current = current->next;/*move to next box*/
	}

	/*if the desired box was not found*/
	if (current == NULL)
		return (-1);

	/*update to skip the box we want to delete*/
	previous->next = current->next;

	free(current);

	return (1);
}



