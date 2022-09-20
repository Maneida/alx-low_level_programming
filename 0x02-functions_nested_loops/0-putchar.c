#include "main.h"
/**
*main - Prints "putchar" followed by new line
*Description:Standard libraries are disallowed
*Return: Always 0 (Success)
*/
int main(void)
{
	char putchar[] = 'char c';
	int i = 0;

	while (putchar[i] != "\0")
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
