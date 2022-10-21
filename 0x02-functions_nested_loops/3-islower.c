#include "main.h"

/**
 * _islower -  checks for lower case character
 * @c: integer to be checked
 *
 * Return: 1 if  cis lower and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
