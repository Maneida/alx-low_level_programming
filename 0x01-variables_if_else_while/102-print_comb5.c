#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers
 * The two numbers are separated by a space
 * number combinations separated by a comma
 *
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; ++num1) /* tens of num1 */
	{
		for (num2 = num1 + 1; num2 <= 99; ++num2) /* ones of num1 */
		{
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');

			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));
			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

