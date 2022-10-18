#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10  from 0
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
	putchar('\n');

	return (0);
}

