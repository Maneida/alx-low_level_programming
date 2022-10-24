#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers 1 to 100 followed by a new line
 * replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz"
 * if multiple of 3 and 5 print FizzBuzz
 * every number separated by a space
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

