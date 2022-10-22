#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: the times table of this number
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int row, column, result;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; ++row)
		{
			for (column = 0; column <= n; ++column)
			{
				result = row * column;
				if (result / 100 != 0)
					_putchar('0' + (result / 100));
				else
					if (column != 0)
						_putchar(' ');

				if ((result % 100) / 10 != 0 || (result / 100) != 0)
					_putchar('0' + ((result % 100) / 10));
				else
					if (column != 0)
						_putchar(' ');
				_putchar('0' + (result % 10));
				if (column != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

