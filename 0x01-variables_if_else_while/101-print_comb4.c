#include <stdio.h>

/**
 * main - prints all possible combinations of 3 digits
 * with no duplicate
 *
 * Return: 0
 */

int main(void)
{
	int i, num1, num2, num3;

	num1 = '0';
	for (i = 0; i < 10; ++i)
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != '7' || num2 != '8' || num3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				++num3;
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}

