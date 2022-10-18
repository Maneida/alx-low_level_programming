#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i, num;

	num = '0';
	for (i = 0; i < 10; ++i)
	{
		putchar(num);
		++num;
	}
	num = 'a';
	for (i = 0; i < 6; ++i)
	{
		putchar(num);
		++num;
	}
	putchar('\n');

	return (0);
}

