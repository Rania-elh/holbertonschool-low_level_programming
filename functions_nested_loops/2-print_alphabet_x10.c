#include "main.h"
#include <stdio.h>


/**
 * print_alphabet810 - use Prototype
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
		{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
		}
}
