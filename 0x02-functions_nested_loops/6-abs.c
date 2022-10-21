#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @int: integer's absolute to be computed
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
