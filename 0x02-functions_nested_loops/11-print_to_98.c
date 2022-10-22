#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * numbers ae separated by comma and space
 * @n: initial number start count
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; ++i)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("%i", n);
	printf("\n");
}

