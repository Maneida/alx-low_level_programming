#include "main.h"

/**
 * print_square - prints a square followed by  a new line
 * @size: size of the square
 *
 * Return: no return
 */

void print_square(int size)
{
	int r_, c_;

	if (size > 0)
	{
		for (c_ = 0; c_ < size; ++c_)
		{
			for (r_ = 0; r_ < size; ++r_)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n')
}
