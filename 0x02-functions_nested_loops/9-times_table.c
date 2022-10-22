#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; ++row)
	{
		for (column = 0; column <= 9; ++column)
		{
			if (((row * column) / 10) != 0)
				_putchar('0' + ((row * column) / 10));
			else
				if (column != 0)
					_putchar(' ');
			_putchar('0' + ((row * column) % 10));
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

