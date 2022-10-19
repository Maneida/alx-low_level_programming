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
	int i, num1_1, num1_2, num2_1, num2_2;

	num1_1 = '0';
	for (i = 0; i < 10; ++i) /* tens of num1 */
	{
		num1_2 = '0';
		while (num1_2 <= '9') /* ones of num1 */
		{
			num2_1 = num1_1; /* tens of num2 */
			while (num2_1 <= '9')
			{
				num2_2 = num1_2;
				while (num2_2 <= '9')
				{
					putchar(num1_1);
					putchar(num1_2);
					putchar(' ');

					putchar(num2_1);
					putchar(num2_2);
					if (num1_1 != '9' || num1_2 != '8' || num2_1 != '9' || num2_2 != '9')
					{
						putchar(',');
						putchar(' ');
					}
					++num2_2;
				}
				++num2_1;
			}
			++num1_2;
		}
		++num1_1;
	}
	putchar('\n');

	return (0);
}

