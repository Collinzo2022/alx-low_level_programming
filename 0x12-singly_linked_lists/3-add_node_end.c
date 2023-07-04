#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string.
 * @str: string to find the length.
 *
 * Return: length of string.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		;
	}
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to a linked list.
 * @str: string to add.
 *
 * Return: address of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;

		return (new);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
