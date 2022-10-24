#include "main.h"

/**
 * print_triangle - prints triangle followed by new line
 * @size: size of triangle
 *
 * Return: no return
 */

void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; ++size)
		{
			for (j = 1; j <= (size - i); ++j)
				_putchar(' ');
			for (k = 1; k <= i; ++k)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
