#include "main.h"
#include <limits.h>

/**
 * print_number - prints integer
 * @n: integer to be printed
 *
 * Return: no return
 */

void print_number(int n)
{
	unsigned int digit, abs_n = n;
	double div;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0) /* print negative sign for negative numbers */
		{
			abs_n = -n;
			_putchar('-');
		}

		div = 1; /* find biggest divisor by exponents of 10 */
		while (div <= abs_n)
			div *= 10;
		div /= 10;

		while (div >= 1) /* loop through and print from biggest digit up to tens */
		{
			digit = abs_n / div;
			_putchar('0' + digit);
			abs_n = abs_n - (digit * div);
			div /= 10;
		}
	}
}
