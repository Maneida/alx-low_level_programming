#include "main.h"

/**
 * print_diagonal - draws adiagonal line ont the terminal
 * @n: number of times char '\' should be printed
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n - 1; ++j)
				_putchar(' ');
			_putchar('\');
		}
		_putchar('\n');
	}
}
