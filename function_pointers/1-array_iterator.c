#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - parameter on each element of an array.
 * @action: pointer to the function to be use
 * @size: size of the array
 * @array: pointer to the array
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
