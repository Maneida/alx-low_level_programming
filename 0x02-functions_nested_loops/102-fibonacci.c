#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2
 * followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int a, b, c;

	a = 0, b = 1;
	for (i = 0; i <= 50; ++i)
	{
		c = a + b;
		if(i != 0)
		{
			printf("%li", c);
			if (i != 50)
				printf(", ");
		}
		b = a;
		a = c;
	}
	printf("\n");

	return (0);
}

