#include "lists.h"

/**
 * count_nodes_till_loop - count nodes to know now many unique nodes to print
 * @head: pointer to head pointer of linked list
 * Return: number of unique nodes in list before a loop
 */
size_t print_listint_safe(const listint_t *head)
{
	int size = 0, i;
	const listint_t *tmp[100];

	if (!head)
		exit(98);

	while (head)
	{
		for (i = 0; i < size; i++)
		{
			if (tmp[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (size);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp[size] = head;
		size++;
		head = head->next;
	}
	return (size);
}
