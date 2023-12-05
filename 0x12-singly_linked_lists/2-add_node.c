#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer head.
 * @str: character string.
 *
 *Return: the address of a newly created node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* check if the input string is null */
	if (str == NULL)
	{
		return (NULL);
	}

	new_node = (list_t *)malloc(sizeof(list_t));

	/* check if node was created successfuly */
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
	}
	new_node->len = strlen(str) - 1;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
