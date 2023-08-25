#include "lists.h"
/**
 * add_node - function that adds a new
 * node at the beginning of a list.
 *
 * @head: pointer to the head of the node.
 * @str: string to be added to the node.
 * Return: address of the new element or NULL
 * if its failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
