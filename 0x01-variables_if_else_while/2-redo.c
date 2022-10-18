#include <stdio.h>

/**
 * main - prints the alphebet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i, alpha;

	alpha = 'a';
	for (i = 1; i <= 26; ++i)
	{
		putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}

