#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: input
 * Return: The square root if found, otherwise -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
