#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list
 * @head: head pointer
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* free the duplicated string */
		free(head->str);
		/* save the current node address */
		temp = head;
		/* move to the next node */
		head = head->next;
		/* free the current node*/
		free(temp);
	}
}
