#include <stdio.h>

/**
 * print_name -  prints a name
 * @name: nom
 * @f: jsp
 * Return: ALways 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
