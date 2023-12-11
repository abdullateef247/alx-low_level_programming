#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head pointer
 *
 * Return: returns the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}