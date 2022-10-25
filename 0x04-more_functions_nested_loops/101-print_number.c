#include "main.h"

/**
 * print_number - prints integer
 * @n: integer to be printed
 *
 * Return: no return
 */

void print_number(int n)
{
	if (n / 1000 != 0)
		_putchar('0' + ((n / 1000) % 10));
	if ((n / 100) != 0)
		_putchar('0' + ((n / 100) % 10));
	if ((n / 10) != 0)
		_putchar('0' + ((n / 10) % 10));
	if (n != 0)
		_putchar('0' + (n % 10));
}

