#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int i, alpha;

	alpha = 'z';
	for (i = 0; i < 26; ++i)
	{
		putchar(alpha);
		--alpha;
	}
	putchar('\n');

	return (0);
}

