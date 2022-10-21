#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;
	int i;

	alpha = 'a';
	for (i = 0; i < 26; ++i)
	{
		_putchar(alpha);
		++alpha;
	}
	_putchar('\n');
}
