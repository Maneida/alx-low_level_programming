#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int i, l_alpha, u_alpha;

	l_alpha = 'a';
	u_alpha = 'A';
	for (i = 0; i < 26; ++i)
	{
		putchar(l_alpha);
		++l_alpha;
	}
	for (i = 0; i < 26; ++i)
	{
		putchar(u_alpha);
		++u_alpha;
	}
	putchar('\n');

	return (0);
}

