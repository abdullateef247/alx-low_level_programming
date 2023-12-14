#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: pointer to pointer head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
