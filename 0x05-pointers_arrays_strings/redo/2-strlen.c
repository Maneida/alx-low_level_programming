#include <stdo.h>
#include "main.h"

/**
 * _strlen - function that returns the length f a string
 * @s: string whose length is to be found
 *
 * Return: len
 */

void _strlen(char *s)
{
	int len;

	while ((*s + len) != '\0')
		++len;

	return (len);
}

