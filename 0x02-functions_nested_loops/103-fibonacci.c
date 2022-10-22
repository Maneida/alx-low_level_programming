#include <stdio.h>

/**
 * main - finds and prints sum of fibonacci numbers less than 4000000
 *
 * Return: 0
 */

int main(void)
{
	long a, b, c, sum;

	a = 0, b = 1,  c = 0, sum = 0;
	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}
	printf("%li\n", sum);

	return (0);
}
