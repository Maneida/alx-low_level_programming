#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i, overflow;
	unsigned long a, b, c;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	a = 0, b = 1;
	for (i = 1; i <= 92; ++i)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i != 98)
			printf(", ");
	}

	a_head = a / 1000000000;
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;
		
	for (; i <= 98; ++i)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;

		printf("%lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;

		if (i != 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}

