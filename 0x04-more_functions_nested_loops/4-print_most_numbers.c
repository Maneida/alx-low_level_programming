#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 excet 2 and 4
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		if (i != '2' || '4')
			_putchar(i);
	_putchar('\n');
}
