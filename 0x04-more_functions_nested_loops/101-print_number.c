#include "main.h"

/**
 * print_number - prints integer
 * @n: integer to be printed
 *
 * Return: no return
 */

void print_number(int n)
{
	int div;

	if (n < 0) /* print negative sign for negative numbers */
	{
		n *= -1;
		_putchar('-');
	}

	div = 1; /* find biggest divisor by exponents of 10 */
	while (n / div != 0)
		div *= 10;

	while (div >= 10) /* loop through and print from biggest digit up to tens */
	{
		if (n / div != 0)
			_putchar('0' + ((n / div) % 10));
		div /= 10;
	}

	if (n != 0) /* print digit for ones */
		_putchar('0' + (n % 10));
	else
		_putchar('0');
}
