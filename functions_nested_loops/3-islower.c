#include "main.h"
#include <stdio.h>

/**
 * _islower - check if a character is lowercase.
 * @c: the character to be checked.
 * return value of '_islower' _islower
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)#include <stdio.h>
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
