#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * at the end of a list.
 * @head: pointer to the head of the node.
 * @str: string to be added to the node.
 * Return: the address of the new element or NULL
 * if its failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
