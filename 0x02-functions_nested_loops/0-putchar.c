#include "main.h"

/**
 * main - prints _putchar followed by new line
 * Description: standrd libraries disallowed
 * Return: 0
 */

int main(void)
{
	char string[] = "_putchar";
	int i, len;

	len = sizeof(string);
	for (i = 0; i < len; ++i)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}

