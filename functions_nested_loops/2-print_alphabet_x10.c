#include "main.h"
#include <stdio.h>


/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * This function uses _putchar to print the letters a to z,
 * followed by a new line, and repeats this process 10 times.
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
