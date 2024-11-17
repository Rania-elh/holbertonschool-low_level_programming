#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @max: variable 1
 * @min: variable 2
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *a;
	int l, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	{
		if (a == NULL)
		return (NULL);
	}
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
