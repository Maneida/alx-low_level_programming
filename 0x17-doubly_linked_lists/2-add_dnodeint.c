#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint -  a function that adds a new node at the beginning
 *  of a dlistint_t list
 * @head: beginning of list
 * @n: value
 *
 * Return: struct dlistint_t
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(struct dlistint_s));

	if (!new)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}

