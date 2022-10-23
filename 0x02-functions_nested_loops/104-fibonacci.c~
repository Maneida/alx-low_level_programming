#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	double a, b, c;

	a = 0, b = 1;
	for (i = 1; i <= 98; ++i)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%.0f", c);
		if (i != 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}

