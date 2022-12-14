#include <stdio.h>

/**
 * main - computes and prints the sum of all
 * multiples of 3 and 5 below 1024 followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; ++i)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%i\n", sum);

	return (0);
}

