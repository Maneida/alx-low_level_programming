#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	unsigned long div, num;

	div = 2;
	num = 612852475143;
	while (div < num)
	{
		if (num % div == 0)
			num /= div;
		else
			++div;
	}
	printf("%li\n", num);

	return (0);
}
