#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to linked list.
 *
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (size);
}







