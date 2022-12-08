#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h:doubly linked list argument
 *
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count += 1;
	}
	
	return (node_count);
}

