#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
