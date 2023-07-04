#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strlen - finds the length of a string
 * @str: string to find the length
 *
 * Return: length of string.
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 *add_node - the function adds a new note at the
 * beginning of a list.
 *
 * @head: pointer to the first node of the list.
 * @str: string to be added to the node list.
 *
 * Return: the he address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
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
		temp = temp->next;
	temp->next = new;

	return (new);
}
