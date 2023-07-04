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
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
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
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;


	return (add);
}
