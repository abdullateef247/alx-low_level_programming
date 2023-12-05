#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	/* Loop through the link list */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}

		h = h->next;
		count++;
		printf("\n");

	}
	return (count);
}

