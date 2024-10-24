#include <stdio.h>

/**
 * print_alphabet - Affiche les lettres de l'alphabet en minuscules
 *
 * Return: Rien
 */

void print_alphabet(void)
{
	char c; /* Déclaration ici */

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
