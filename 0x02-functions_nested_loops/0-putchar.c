#include "main.h"

/**
 * main - prints _putchar followed by new line
 * Description: standrd libraries disallowed
 * Return: 0
 */

int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
