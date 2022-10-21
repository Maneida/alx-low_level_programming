#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer's absolute to be computed
 *
 *
 * Return: n(absolute)
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
