#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list
 * @h: list whose number of elements is to be found
 *
 * Return: size_t num of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num += 1;
	}

	return (num);
}

