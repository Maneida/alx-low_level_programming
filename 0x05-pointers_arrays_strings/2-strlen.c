#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strlen - returns length of string
*@s: character whos elength is to be determined
*Return: no return
*/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
