#include "main.h"
#include <stdio.h>

/**
*_puts - prints string followed by new line to stdout
*@str: the string that is printed
*Returns: no return
*/
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}
}
