#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n:  number to print last digit
 *
 * Return: n
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		l *= (-1);
	_putchar('0' + l);

	return (l);
}

