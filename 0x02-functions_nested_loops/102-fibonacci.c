#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2
 * followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int i, a, b, c;

	a = 0, b = 1;
	for (i = 1; i <= 50; ++i)
	{
		c = a + b;
		printf("%i", c);
		if (i != 50)
			printf(", ");
		b = a;
		a = c;
	}
	return (0);
}

