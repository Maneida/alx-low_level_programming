#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except 'q' and 'e'
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i, alpha;

	alpha = 'a';
	for (i = 0; i < 26; ++i)
	{
		if (alpha != 'e' || 'q')
			putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}

