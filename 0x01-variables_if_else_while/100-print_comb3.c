#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i, num1, num2;

	num1 = '0';
	for (i = 0; i < 10; ++i)
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);
			if (num1 != '8' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}

