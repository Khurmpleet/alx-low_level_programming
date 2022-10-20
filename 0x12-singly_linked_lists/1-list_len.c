#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements (length) in linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
