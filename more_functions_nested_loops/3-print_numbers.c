#include "main.h"
#include <stdio.h>

/**
 * print_numbers - check that prints the numbers, from 0 to 9
 * Return: print number i.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
		_putchar('\n');

}
