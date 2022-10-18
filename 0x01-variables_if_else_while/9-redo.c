#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, num;

	num = '0';
	for (i = 0; i < 10; ++i)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');

	return (0);
}

