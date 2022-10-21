#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n:  number to print last digit
 *
 * Return: n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n %= 10;
	n = _putchar('0' + n);

	return (n);
}

