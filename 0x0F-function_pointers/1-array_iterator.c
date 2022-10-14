#include "function_pointers.h"

/**
 * array_iterator - executes function as parameter for each array element
 * @array: input integer array
 * @size: size of the array
 * @action: pointer to function that needs to be used
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

